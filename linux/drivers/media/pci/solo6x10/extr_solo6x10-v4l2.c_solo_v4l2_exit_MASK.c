
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int * vfd; int disp_hdl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct solo_dev *VAR_0)
{
 if (VAR_0->vfd == ((void*)0))
  return;

 FUNC_1(VAR_0->vfd);
 FUNC_0(&VAR_0->disp_hdl);
 VAR_0->vfd = ((void*)0);
}
