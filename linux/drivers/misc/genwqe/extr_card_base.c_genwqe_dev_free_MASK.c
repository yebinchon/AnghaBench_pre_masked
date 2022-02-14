
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {size_t card_idx; } ;


 int ** VAR_0 ;
 int FUNC_0 (struct genwqe_dev*) ;

__attribute__((used)) static void FUNC_1(struct genwqe_dev *VAR_1)
{
 if (!VAR_1)
  return;

 VAR_0[VAR_1->card_idx] = ((void*)0);
 FUNC_0(VAR_1);
}
