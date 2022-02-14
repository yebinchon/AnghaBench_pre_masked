
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int channel_count; TYPE_1__** channel; } ;
struct TYPE_2__ {int rx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->channel_count; VAR_6++) {
  if (!VAR_5->channel[VAR_6]->rx_ring)
   break;

  FUNC_0(VAR_5->channel[VAR_6], VAR_0, VAR_3, 1);
 }

 FUNC_1(VAR_5, VAR_2, VAR_1, VAR_4);
}
