
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int nr_scratch; int scratchbuf; int scratch_addr; int sysdev; int has_hibernation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dwc3 *VAR_2)
{
 if (!VAR_2->has_hibernation)
  return;

 if (!VAR_2->nr_scratch)
  return;


 if (!FUNC_0(VAR_2->scratchbuf))
  return;

 FUNC_1(VAR_2->sysdev, VAR_2->scratch_addr, VAR_2->nr_scratch *
   VAR_1, VAR_0);
 FUNC_2(VAR_2->scratchbuf);
}
