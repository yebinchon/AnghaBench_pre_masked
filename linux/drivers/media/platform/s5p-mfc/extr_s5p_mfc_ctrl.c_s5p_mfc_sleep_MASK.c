
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {scalar_t__ int_err; scalar_t__ int_type; scalar_t__ int_cond; int mfc_cmds; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct s5p_mfc_dev*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_7 (struct s5p_mfc_dev*,scalar_t__) ;
 int VAR_2 ;

int FUNC_8(struct s5p_mfc_dev *VAR_3)
{
 int VAR_4;

 FUNC_0();
 FUNC_5();
 FUNC_3(VAR_3);
 VAR_4 = FUNC_6(VAR_3->mfc_cmds, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_2("Failed to send command to MFC - timeout\n");
  return VAR_4;
 }
 if (FUNC_7(VAR_3, VAR_1)) {
  FUNC_2("Failed to sleep\n");
  return -VAR_0;
 }
 FUNC_4();
 VAR_3->int_cond = 0;
 if (VAR_3->int_err != 0 || VAR_3->int_type !=
      VAR_1) {

  FUNC_2("Failed to sleep - error: %d int: %d\n", VAR_3->int_err,
        VAR_3->int_type);
  return -VAR_0;
 }
 FUNC_1();
 return VAR_4;
}
