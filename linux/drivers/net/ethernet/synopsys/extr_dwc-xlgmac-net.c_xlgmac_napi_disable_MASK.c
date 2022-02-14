
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pdata {unsigned int channel_count; int napi; struct xlgmac_channel* channel_head; scalar_t__ per_channel_irq; } ;
struct xlgmac_channel {int napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct xlgmac_pdata *VAR_0, unsigned int VAR_1)
{
 struct xlgmac_channel *VAR_2;
 unsigned int VAR_3;

 if (VAR_0->per_channel_irq) {
  VAR_2 = VAR_0->channel_head;
  for (VAR_3 = 0; VAR_3 < VAR_0->channel_count; VAR_3++, VAR_2++) {
   FUNC_0(&VAR_2->napi);

   if (VAR_1)
    FUNC_1(&VAR_2->napi);
  }
 } else {
  FUNC_0(&VAR_0->napi);

  if (VAR_1)
   FUNC_1(&VAR_0->napi);
 }
}
