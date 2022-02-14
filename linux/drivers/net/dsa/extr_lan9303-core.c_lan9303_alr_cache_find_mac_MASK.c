
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lan9303_alr_cache_entry {int mac_addr; } ;
struct lan9303 {struct lan9303_alr_cache_entry* alr_cache; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int const*) ;

__attribute__((used)) static struct lan9303_alr_cache_entry *
FUNC_2(struct lan9303 *VAR_1, const u8 *VAR_2)
{
 int VAR_3;
 struct lan9303_alr_cache_entry *VAR_4 = VAR_1->alr_cache;

 FUNC_0(sizeof(struct lan9303_alr_cache_entry) & 1,
    "ether_addr_equal require u16 alignment");

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_4++)
  if (FUNC_1(VAR_4->mac_addr, VAR_2))
   return VAR_4;

 return ((void*)0);
}
