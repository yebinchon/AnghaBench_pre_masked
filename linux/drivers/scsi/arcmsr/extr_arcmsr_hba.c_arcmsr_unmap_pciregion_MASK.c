
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int adapter_type; int pmuE; int mem_base0; int pmuC; int mem_base1; int pmuA; } ;







 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct AdapterControlBlock *VAR_0)
{
 switch (VAR_0->adapter_type) {
 case 132:{
  FUNC_0(VAR_0->pmuA);
 }
 break;
 case 131:{
  FUNC_0(VAR_0->mem_base0);
  FUNC_0(VAR_0->mem_base1);
 }

 break;
 case 130:{
  FUNC_0(VAR_0->pmuC);
 }
 break;
 case 129:
  FUNC_0(VAR_0->mem_base0);
  break;
 case 128:
  FUNC_0(VAR_0->pmuE);
  break;
 }
}
