
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb_cache_entry {int e_key; } ;
struct mb_cache {int dummy; } ;


 struct mb_cache_entry* FUNC_0 (struct mb_cache*,struct mb_cache_entry*,int ) ;

struct mb_cache_entry *FUNC_1(struct mb_cache *VAR_0,
      struct mb_cache_entry *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1, VAR_1->e_key);
}
