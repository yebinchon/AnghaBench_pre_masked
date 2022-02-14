
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int mfc_cmds; } ;


 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct s5p_mfc_dev *VAR_1)
{
 if (FUNC_0(VAR_1))
  VAR_0 = FUNC_2();
 else
  VAR_0 = FUNC_1();

 VAR_1->mfc_cmds = VAR_0;
}
