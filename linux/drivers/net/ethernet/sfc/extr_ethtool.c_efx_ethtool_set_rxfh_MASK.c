
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {scalar_t__* rx_hash_key; int * rx_indir_table; } ;
struct efx_nic {TYPE_2__* type; TYPE_1__ rss_context; } ;
struct TYPE_4__ {int (* rx_push_rss_config ) (struct efx_nic*,int,int const*,scalar_t__ const*) ;} ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 struct efx_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct efx_nic*,int,int const*,scalar_t__ const*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, const u32 *VAR_4,
    const u8 *VAR_5, const u8 VAR_6)
{
 struct efx_nic *VAR_7 = FUNC_0(VAR_3);


 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return -VAR_0;
 if (!VAR_4 && !VAR_5)
  return 0;

 if (!VAR_5)
  VAR_5 = VAR_7->rss_context.rx_hash_key;
 if (!VAR_4)
  VAR_4 = VAR_7->rss_context.rx_indir_table;

 return VAR_7->type->rx_push_rss_config(VAR_7, 1, VAR_4, VAR_5);
}
