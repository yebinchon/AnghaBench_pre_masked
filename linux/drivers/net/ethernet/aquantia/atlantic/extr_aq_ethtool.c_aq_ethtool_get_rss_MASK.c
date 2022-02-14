
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct aq_nic_s {int dummy; } ;
struct TYPE_2__ {int hash_secret_key; int * indirection_table; } ;
struct aq_nic_cfg_s {TYPE_1__ aq_rss; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (int *,int ,int) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
         u8 *VAR_5)
{
 struct aq_nic_s *VAR_6 = FUNC_2(VAR_2);
 struct aq_nic_cfg_s *VAR_7 = FUNC_0(VAR_6);
 unsigned int VAR_8 = 0U;

 if (VAR_5)
  *VAR_5 = VAR_1;
 if (VAR_3) {
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_3[VAR_8] = VAR_7->aq_rss.indirection_table[VAR_8];
 }
 if (VAR_4)
  FUNC_1(VAR_4, VAR_7->aq_rss.hash_secret_key,
         sizeof(VAR_7->aq_rss.hash_secret_key));
 return 0;
}
