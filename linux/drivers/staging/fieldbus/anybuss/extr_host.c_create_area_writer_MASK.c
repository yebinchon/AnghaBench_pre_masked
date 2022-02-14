
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct kmem_cache {int dummy; } ;
struct area_priv {int is_write; size_t count; int buf; void* addr; void* flags; } ;
struct ab_task {struct area_priv area_pd; } ;


 struct ab_task* FUNC_0 (struct kmem_cache*,int ) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int VAR_0 ;

__attribute__((used)) static struct ab_task *
FUNC_2(struct kmem_cache *VAR_1, u16 VAR_2, u16 VAR_3,
     const void *VAR_4, size_t VAR_5)
{
 struct ab_task *VAR_6;
 struct area_priv *VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_7 = &VAR_6->area_pd;
 VAR_7->flags = VAR_2;
 VAR_7->addr = VAR_3;
 VAR_7->is_write = 1;
 VAR_7->count = VAR_5;
 FUNC_1(VAR_7->buf, VAR_4, VAR_5);
 return VAR_6;
}
