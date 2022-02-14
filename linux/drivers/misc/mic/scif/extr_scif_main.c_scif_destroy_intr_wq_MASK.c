
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_dev {int * intr_wq; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct scif_dev *VAR_0)
{
 if (VAR_0->intr_wq) {
  FUNC_0(VAR_0->intr_wq);
  VAR_0->intr_wq = ((void*)0);
 }
}
