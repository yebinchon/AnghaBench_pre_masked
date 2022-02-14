
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int usage; int firmware_status; int startaddr; int num; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int,...) ;
 int FUNC_2 (struct cosa_data*,int) ;

__attribute__((used)) static inline int FUNC_3(struct cosa_data *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->usage > 1)
  FUNC_0("cosa%d: WARNING: start microcode requested with cosa->usage > 1 (%d). Odd things may happen.\n",
   VAR_5->num, VAR_5->usage);

 if ((VAR_5->firmware_status & (VAR_1|VAR_0))
  != (VAR_1|VAR_0)) {
  FUNC_1("%s: download the microcode and/or reset the card first (status %d)\n",
     VAR_5->name, VAR_5->firmware_status);
  return -VAR_4;
 }
 VAR_5->firmware_status &= ~VAR_1;
 if ((VAR_7=FUNC_2(VAR_5, VAR_6)) < 0) {
  FUNC_1("cosa%d: start microcode at 0x%04x failed: %d\n",
     VAR_5->num, VAR_6, VAR_7);
  return -VAR_3;
 }
 FUNC_0("cosa%d: starting microcode at 0x%04x\n", VAR_5->num, VAR_6);
 VAR_5->startaddr = VAR_6;
 VAR_5->firmware_status |= VAR_2;
 return 0;
}
