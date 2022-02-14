
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_rss_context {int rx_hash_key; int rx_indir_table; } ;
struct efx_nic {int rss_lock; TYPE_1__* type; } ;
struct TYPE_2__ {int (* rx_pull_rss_context_config ) (struct efx_nic*,struct efx_rss_context*) ;int rx_hash_key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct efx_rss_context* FUNC_0 (struct efx_nic*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct efx_nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct efx_nic*,struct efx_rss_context*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, u32 *VAR_4,
     u8 *VAR_5, u8 *VAR_6, u32 VAR_7)
{
 struct efx_nic *VAR_8 = FUNC_4(VAR_3);
 struct efx_rss_context *VAR_9;
 int VAR_10 = 0;

 if (!VAR_8->type->rx_pull_rss_context_config)
  return -VAR_1;

 FUNC_2(&VAR_8->rss_lock);
 VAR_9 = FUNC_0(VAR_8, VAR_7);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto out_unlock;
 }
 VAR_10 = VAR_8->type->rx_pull_rss_context_config(VAR_8, VAR_9);
 if (VAR_10)
  goto out_unlock;

 if (VAR_6)
  *VAR_6 = VAR_2;
 if (VAR_4)
  FUNC_1(VAR_4, VAR_9->rx_indir_table, sizeof(VAR_9->rx_indir_table));
 if (VAR_5)
  FUNC_1(VAR_5, VAR_9->rx_hash_key, VAR_8->type->rx_hash_key_size);
out_unlock:
 FUNC_3(&VAR_8->rss_lock);
 return VAR_10;
}
