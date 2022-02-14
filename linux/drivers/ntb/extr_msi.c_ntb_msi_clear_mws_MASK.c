
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_dev {int dummy; } ;


 int FUNC_0 (struct ntb_dev*,int,int) ;
 int FUNC_1 (struct ntb_dev*,int) ;
 int FUNC_2 (struct ntb_dev*) ;

void FUNC_3(struct ntb_dev *VAR_0)
{
 int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0); VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2 < 0)
   continue;

  FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
