
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int rx_hash_key; int rx_indir_table; } ;
struct efx_nic {TYPE_1__* type; TYPE_2__ rss_context; } ;
struct TYPE_3__ {int (* rx_pull_rss_config ) (struct efx_nic*) ;int rx_hash_key_size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, u32 *VAR_2, u8 *VAR_3,
    u8 *VAR_4)
{
 struct efx_nic *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = VAR_5->type->rx_pull_rss_config(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_4)
  *VAR_4 = VAR_0;
 if (VAR_2)
  FUNC_0(VAR_2, VAR_5->rss_context.rx_indir_table,
         sizeof(VAR_5->rss_context.rx_indir_table));
 if (VAR_3)
  FUNC_0(VAR_3, VAR_5->rss_context.rx_hash_key,
         VAR_5->type->rx_hash_key_size);
 return 0;
}
