
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int risc_on; int mfc_cmds; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_3 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_4 (struct s5p_mfc_dev*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_dev *VAR_5)
{
 int VAR_6;


 VAR_6 = FUNC_3(VAR_5->mfc_cmds, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1("Failed to send command to MFC - timeout\n");
  return VAR_6;
 }


 if (FUNC_0(VAR_5)) {
  VAR_5->risc_on = 1;
  FUNC_2(VAR_5, 0x1, VAR_1);
 } else {
  FUNC_2(VAR_5, 0x3ff, VAR_2);
 }

 if (FUNC_4(VAR_5, VAR_3)) {
  FUNC_1("Failed to wakeup MFC\n");
  return -VAR_0;
 }
 return VAR_6;
}
