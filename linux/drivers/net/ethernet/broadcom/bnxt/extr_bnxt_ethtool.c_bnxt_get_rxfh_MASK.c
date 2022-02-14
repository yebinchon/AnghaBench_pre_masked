
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct bnxt_vnic_info {scalar_t__ rss_hash_key; int * rss_table; } ;
struct bnxt {struct bnxt_vnic_info* vnic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 struct bnxt* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, u32 *VAR_4, u8 *VAR_5,
    u8 *VAR_6)
{
 struct bnxt *VAR_7 = FUNC_2(VAR_3);
 struct bnxt_vnic_info *VAR_8;
 int VAR_9 = 0;

 if (VAR_6)
  *VAR_6 = VAR_0;

 if (!VAR_7->vnic_info)
  return 0;

 VAR_8 = &VAR_7->vnic_info[0];
 if (VAR_4 && VAR_8->rss_table) {
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
   VAR_4[VAR_9] = FUNC_0(VAR_8->rss_table[VAR_9]);
 }

 if (VAR_5 && VAR_8->rss_hash_key)
  FUNC_1(VAR_5, VAR_8->rss_hash_key, VAR_2);

 return 0;
}
