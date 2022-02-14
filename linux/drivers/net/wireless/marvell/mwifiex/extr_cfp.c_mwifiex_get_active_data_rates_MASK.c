
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int num_of_rates; int data_rates; } ;
struct mwifiex_private {TYPE_1__ curr_bss_params; int media_connected; } ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct mwifiex_private*,int *) ;

u32 FUNC_2(struct mwifiex_private *VAR_0, u8 *VAR_1)
{
 if (!VAR_0->media_connected)
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_1, 0,
       VAR_0->curr_bss_params.data_rates,
       VAR_0->curr_bss_params.num_of_rates);
}
