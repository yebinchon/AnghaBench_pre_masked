
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct kmem_cache {int dummy; } ;
struct area_priv {int is_write; size_t count; void* addr; void* flags; } ;
struct ab_task {struct area_priv area_pd; } ;


 struct ab_task* FUNC_0 (struct kmem_cache*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct ab_task *
FUNC_1(struct kmem_cache *VAR_1, u16 VAR_2, u16 VAR_3,
     size_t VAR_4)
{
 struct ab_task *VAR_5;
 struct area_priv *VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_6 = &VAR_5->area_pd;
 VAR_6->flags = VAR_2;
 VAR_6->addr = VAR_3;
 VAR_6->is_write = 0;
 VAR_6->count = VAR_4;
 return VAR_5;
}
