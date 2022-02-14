
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int napi; int netdev; struct xgbe_channel** channel; scalar_t__ per_channel_irq; } ;
struct xgbe_channel {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_3, unsigned int VAR_4)
{
 struct xgbe_channel *VAR_5;
 unsigned int VAR_6;

 if (VAR_3->per_channel_irq) {
  for (VAR_6 = 0; VAR_6 < VAR_3->channel_count; VAR_6++) {
   VAR_5 = VAR_3->channel[VAR_6];
   if (VAR_4)
    FUNC_1(VAR_3->netdev, &VAR_5->napi,
            VAR_2, VAR_0);

   FUNC_0(&VAR_5->napi);
  }
 } else {
  if (VAR_4)
   FUNC_1(VAR_3->netdev, &VAR_3->napi,
           VAR_1, VAR_0);

  FUNC_0(&VAR_3->napi);
 }
}
