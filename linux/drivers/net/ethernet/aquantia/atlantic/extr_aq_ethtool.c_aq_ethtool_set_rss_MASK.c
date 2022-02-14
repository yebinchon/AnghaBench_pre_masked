
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct net_device {int dummy; } ;
struct aq_nic_s {int aq_hw; TYPE_1__* aq_hw_ops; } ;
struct TYPE_5__ {unsigned int indirection_table_size; unsigned int* indirection_table; int hash_secret_key; } ;
struct aq_nic_cfg_s {TYPE_2__ aq_rss; } ;
struct TYPE_4__ {int (* hw_rss_hash_set ) (int ,TYPE_2__*) ;int (* hw_rss_set ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (int ,scalar_t__ const*,int) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, const u32 *VAR_4,
         const u8 *VAR_5, const u8 VAR_6)
{
 struct aq_nic_s *VAR_7 = FUNC_2(VAR_3);
 struct aq_nic_cfg_s *VAR_8;
 unsigned int VAR_9 = 0U;
 u32 VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_0(VAR_7);
 VAR_10 = VAR_8->aq_rss.indirection_table_size;


 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return -VAR_0;

 if (VAR_4)
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   VAR_8->aq_rss.indirection_table[VAR_9] = VAR_4[VAR_9];


 if (VAR_5) {
  FUNC_1(VAR_8->aq_rss.hash_secret_key, VAR_5,
         sizeof(VAR_8->aq_rss.hash_secret_key));
  VAR_11 = VAR_7->aq_hw_ops->hw_rss_hash_set(VAR_7->aq_hw,
   &VAR_8->aq_rss);
  if (VAR_11)
   return VAR_11;
 }

 VAR_11 = VAR_7->aq_hw_ops->hw_rss_set(VAR_7->aq_hw, &VAR_8->aq_rss);

 return VAR_11;
}
