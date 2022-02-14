
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int,unsigned long*,int) ;
 unsigned long FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pinctrl_dev *VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = FUNC_2(VAR_0[VAR_4], 0);
  FUNC_1(VAR_1, VAR_2, &VAR_3, 1);
 }
}
