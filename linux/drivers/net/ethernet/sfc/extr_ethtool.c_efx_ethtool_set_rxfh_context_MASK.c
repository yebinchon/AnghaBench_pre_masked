
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct efx_rss_context {scalar_t__* rx_hash_key; int user_id; int * rx_indir_table; int context_id; } ;
struct efx_nic {int rss_lock; TYPE_1__* type; } ;
struct TYPE_2__ {int (* rx_push_rss_context_config ) (struct efx_nic*,struct efx_rss_context*,int const*,scalar_t__ const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 int VAR_7 ;
 struct efx_rss_context* FUNC_0 (struct efx_nic*) ;
 struct efx_rss_context* FUNC_1 (struct efx_nic*,int ) ;
 int FUNC_2 (struct efx_rss_context*) ;
 int FUNC_3 (struct efx_nic*,struct efx_rss_context*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct efx_nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__*,int) ;
 int FUNC_8 (struct efx_nic*,struct efx_rss_context*,int const*,scalar_t__ const*) ;
 int FUNC_9 (struct efx_nic*,struct efx_rss_context*,int const*,scalar_t__ const*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8,
     const u32 *VAR_9, const u8 *VAR_10,
     const u8 VAR_11, u32 *VAR_12,
     bool VAR_13)
{
 struct efx_nic *VAR_14 = FUNC_6(VAR_8);
 struct efx_rss_context *VAR_15;
 bool VAR_16 = 0;
 int VAR_17;

 if (!VAR_14->type->rx_push_rss_context_config)
  return -VAR_4;

 if (VAR_11 != VAR_5 && VAR_11 != VAR_6)
  return -VAR_4;

 FUNC_4(&VAR_14->rss_lock);

 if (*VAR_12 == VAR_7) {
  if (VAR_13) {

   VAR_17 = -VAR_1;
   goto out_unlock;
  }
  VAR_15 = FUNC_0(VAR_14);
  if (!VAR_15) {
   VAR_17 = -VAR_3;
   goto out_unlock;
  }
  VAR_15->context_id = VAR_0;

  FUNC_3(VAR_14, VAR_15);
  FUNC_7(VAR_15->rx_hash_key, sizeof(VAR_15->rx_hash_key));
  VAR_16 = 1;
 } else {
  VAR_15 = FUNC_1(VAR_14, *VAR_12);
  if (!VAR_15) {
   VAR_17 = -VAR_2;
   goto out_unlock;
  }
 }

 if (VAR_13) {

  VAR_17 = VAR_14->type->rx_push_rss_context_config(VAR_14, VAR_15, ((void*)0), ((void*)0));
  if (!VAR_17)
   FUNC_2(VAR_15);
  goto out_unlock;
 }

 if (!VAR_10)
  VAR_10 = VAR_15->rx_hash_key;
 if (!VAR_9)
  VAR_9 = VAR_15->rx_indir_table;

 VAR_17 = VAR_14->type->rx_push_rss_context_config(VAR_14, VAR_15, VAR_9, VAR_10);
 if (VAR_17 && VAR_16)
  FUNC_2(VAR_15);
 else
  *VAR_12 = VAR_15->user_id;
out_unlock:
 FUNC_5(&VAR_14->rss_lock);
 return VAR_17;
}
