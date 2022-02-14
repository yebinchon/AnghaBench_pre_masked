
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_cache_array {int size; TYPE_2__* array; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ string; } ;


 int FUNC_0 (int ) ;
 struct nfs_cache_array* FUNC_1 (struct page*) ;
 int FUNC_2 (struct nfs_cache_array*) ;

__attribute__((used)) static
void FUNC_3(struct page *VAR_0)
{
 struct nfs_cache_array *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 for (VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++)
  FUNC_0(VAR_1->array[VAR_2].string.name);
 FUNC_2(VAR_1);
}
