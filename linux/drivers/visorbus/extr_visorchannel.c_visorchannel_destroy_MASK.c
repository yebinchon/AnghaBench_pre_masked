
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorchannel {int nbytes; int physaddr; scalar_t__ requested; scalar_t__ mapped; } ;


 int FUNC_0 (struct visorchannel*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct visorchannel *VAR_0)
{
 if (!VAR_0)
  return;

 if (VAR_0->mapped) {
  FUNC_1(VAR_0->mapped);
  if (VAR_0->requested)
   FUNC_2(VAR_0->physaddr, VAR_0->nbytes);
 }
 FUNC_0(VAR_0);
}
