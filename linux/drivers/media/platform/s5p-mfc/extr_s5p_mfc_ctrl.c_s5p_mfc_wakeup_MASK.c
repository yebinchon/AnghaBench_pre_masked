
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {scalar_t__ int_err; scalar_t__ int_type; scalar_t__ int_cond; scalar_t__ risc_on; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct s5p_mfc_dev*) ;
 int FUNC_6 (struct s5p_mfc_dev*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct s5p_mfc_dev*) ;
 int FUNC_10 (struct s5p_mfc_dev*) ;
 int FUNC_11 (struct s5p_mfc_dev*) ;
 int FUNC_12 (struct s5p_mfc_dev*) ;

int FUNC_13(struct s5p_mfc_dev *VAR_2)
{
 int VAR_3;

 FUNC_2();

 FUNC_1(2, "MFC reset..\n");
 FUNC_8();
 VAR_2->risc_on = 0;
 VAR_3 = FUNC_10(VAR_2);
 if (VAR_3) {
  FUNC_4("Failed to reset MFC - timeout\n");
  FUNC_7();
  return VAR_3;
 }
 FUNC_1(2, "Done MFC reset..\n");

 FUNC_9(VAR_2);

 FUNC_6(VAR_2);
 FUNC_5(VAR_2);

 if (FUNC_0(VAR_2))
  VAR_3 = FUNC_11(VAR_2);
 else
  VAR_3 = FUNC_12(VAR_2);

 FUNC_7();
 if (VAR_3)
  return VAR_3;

 VAR_2->int_cond = 0;
 if (VAR_2->int_err != 0 || VAR_2->int_type !=
      VAR_1) {

  FUNC_4("Failed to wakeup - error: %d int: %d\n", VAR_2->int_err,
        VAR_2->int_type);
  return -VAR_0;
 }
 FUNC_3();
 return 0;
}
