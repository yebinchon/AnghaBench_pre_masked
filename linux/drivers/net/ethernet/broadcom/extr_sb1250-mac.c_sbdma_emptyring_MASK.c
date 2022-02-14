
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct sbmacdma {int sbdma_maxdescr; struct sk_buff** sbdma_ctxtable; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sbmacdma *VAR_0)
{
 int VAR_1;
 struct sk_buff *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->sbdma_maxdescr; VAR_1++) {
  VAR_2 = VAR_0->sbdma_ctxtable[VAR_1];
  if (VAR_2) {
   FUNC_0(VAR_2);
   VAR_0->sbdma_ctxtable[VAR_1] = ((void*)0);
  }
 }
}
