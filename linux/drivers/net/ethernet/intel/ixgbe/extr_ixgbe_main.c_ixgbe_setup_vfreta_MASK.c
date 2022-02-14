
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int num_rx_pools; int* rss_indir_tbl; int * rss_key; TYPE_1__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_2__ {int indices; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_1)
{
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;
 u16 VAR_3 = VAR_1->ring_feature[VAR_0].indices;
 int VAR_4, VAR_5;


 for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
  u16 VAR_6 = VAR_1->num_rx_pools;

  while (VAR_6--)
   FUNC_1(VAR_2,
     FUNC_0(VAR_4, FUNC_2(VAR_6)),
     *(VAR_1->rss_key + VAR_4));
 }


 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 64; VAR_4++, VAR_5++) {
  if (VAR_5 == VAR_3)
   VAR_5 = 0;

  VAR_1->rss_indir_tbl[VAR_4] = VAR_5;
 }

 FUNC_3(VAR_1);
}
