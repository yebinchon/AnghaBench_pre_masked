
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; int * channel; } ;


 int FUNC_0 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->channel_count; VAR_1++)
  FUNC_0(VAR_0, VAR_0->channel[VAR_1]);
}
