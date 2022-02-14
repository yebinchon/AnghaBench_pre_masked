
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_im_s {int * drv_workq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct bfad_im_s *VAR_0)
{
 if (VAR_0 && VAR_0->drv_workq) {
  FUNC_1(VAR_0->drv_workq);
  FUNC_0(VAR_0->drv_workq);
  VAR_0->drv_workq = ((void*)0);
 }
}
