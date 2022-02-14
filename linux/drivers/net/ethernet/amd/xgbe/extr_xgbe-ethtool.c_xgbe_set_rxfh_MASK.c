
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct xgbe_hw_if {unsigned int (* set_rss_lookup_table ) (struct xgbe_prv_data*,int const*) ;unsigned int (* set_rss_hash_key ) (struct xgbe_prv_data*,scalar_t__ const*) ;} ;
struct xgbe_prv_data {struct xgbe_hw_if hw_if; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct xgbe_prv_data*,int const*) ;
 unsigned int FUNC_3 (struct xgbe_prv_data*,scalar_t__ const*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, const u32 *VAR_4,
    const u8 *VAR_5, const u8 VAR_6)
{
 struct xgbe_prv_data *VAR_7 = FUNC_1(VAR_3);
 struct xgbe_hw_if *VAR_8 = &VAR_7->hw_if;
 unsigned int VAR_9;

 if (VAR_6 != VAR_1 && VAR_6 != VAR_2) {
  FUNC_0(VAR_3, "unsupported hash function\n");
  return -VAR_0;
 }

 if (VAR_4) {
  VAR_9 = VAR_8->set_rss_lookup_table(VAR_7, VAR_4);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_5) {
  VAR_9 = VAR_8->set_rss_hash_key(VAR_7, VAR_5);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
