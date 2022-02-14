
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {int dummy; } ;
typedef unsigned char s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct scsi_tape*,char*,char*,unsigned char,char*) ;

__attribute__((used)) static void FUNC_1(struct scsi_tape *VAR_2, int VAR_3, char *VAR_4, unsigned char *VAR_5)
{
 s32 VAR_6;

 if (!VAR_1)
  return;

 VAR_6 = VAR_5[2] & 0x80 ? 0xff000000 : 0;
 VAR_6 |= (VAR_5[2] << 16) | (VAR_5[3] << 8) | VAR_5[4];
 if (VAR_3)
  VAR_6 = -VAR_6;
 FUNC_0(VAR_0, VAR_2, "Spacing tape %s over %d %s.\n",
    VAR_3 ? "backward" : "forward", VAR_6, VAR_4);
}
