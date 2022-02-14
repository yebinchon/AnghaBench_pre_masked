
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cpmac_priv {TYPE_1__* desc_ring; } ;
struct TYPE_2__ {int * skb; scalar_t__ dataflags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct cpmac_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (FUNC_2(!VAR_2->desc_ring))
  return;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->desc_ring[VAR_3].dataflags = 0;
  if (VAR_2->desc_ring[VAR_3].skb) {
   FUNC_0(VAR_2->desc_ring[VAR_3].skb);
   VAR_2->desc_ring[VAR_3].skb = ((void*)0);
  }
 }
}
