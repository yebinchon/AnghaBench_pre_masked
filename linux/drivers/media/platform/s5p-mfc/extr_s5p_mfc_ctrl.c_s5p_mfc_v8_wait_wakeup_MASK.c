
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int risc_on; int mfc_cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_3 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_4 (struct s5p_mfc_dev*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_dev *VAR_5)
{
 int VAR_6;


 VAR_5->risc_on = 1;
 FUNC_2(VAR_5, 0x1, VAR_1);

 if (FUNC_4(VAR_5, VAR_2)) {
  FUNC_1("Failed to reset MFCV8\n");
  return -VAR_0;
 }
 FUNC_0(2, "Write command to wakeup MFCV8\n");
 VAR_6 = FUNC_3(VAR_5->mfc_cmds, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_1("Failed to send command to MFCV8 - timeout\n");
  return VAR_6;
 }

 if (FUNC_4(VAR_5, VAR_3)) {
  FUNC_1("Failed to wakeup MFC\n");
  return -VAR_0;
 }
 return VAR_6;
}
