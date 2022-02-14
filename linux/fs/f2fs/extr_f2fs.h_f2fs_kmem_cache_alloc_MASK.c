
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 void* FUNC_0 (struct kmem_cache*,int) ;

__attribute__((used)) static inline void *FUNC_1(struct kmem_cache *VAR_1,
      gfp_t VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_1, VAR_2 | VAR_0);
 return VAR_3;
}
