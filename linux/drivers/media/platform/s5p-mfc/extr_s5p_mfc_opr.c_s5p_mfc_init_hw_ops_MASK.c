
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int mfc_ops; int warn_start; } ;


 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;

void FUNC_3(struct s5p_mfc_dev *VAR_3)
{
 if (FUNC_0(VAR_3)) {
  VAR_2 = FUNC_2();
  VAR_3->warn_start = VAR_1;
 } else {
  VAR_2 = FUNC_1();
  VAR_3->warn_start = VAR_0;
 }
 VAR_3->mfc_ops = VAR_2;
}
