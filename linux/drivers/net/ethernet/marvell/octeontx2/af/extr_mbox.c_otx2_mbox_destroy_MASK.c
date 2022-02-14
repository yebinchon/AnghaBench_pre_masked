
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct otx2_mbox {int * dev; int * hwbase; int * reg_base; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct otx2_mbox *VAR_0)
{
 VAR_0->reg_base = ((void*)0);
 VAR_0->hwbase = ((void*)0);

 FUNC_0(VAR_0->dev);
 VAR_0->dev = ((void*)0);
}
