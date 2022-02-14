
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;
struct cachefiles_cache {int cache_cred; } ;


 struct cred* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct cachefiles_cache *VAR_0,
        const struct cred **VAR_1)
{
 *VAR_1 = FUNC_0(VAR_0->cache_cred);
}
