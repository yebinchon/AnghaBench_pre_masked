
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int index; } ;
struct TYPE_6__ {TYPE_2__* object; } ;
struct fscache_retrieval {int mapping; TYPE_3__ op; } ;
struct fscache_cookie {int netfs_data; TYPE_1__* def; } ;
struct TYPE_5__ {struct fscache_cookie* cookie; } ;
struct TYPE_4__ {int (* mark_page_cached ) (int ,int ,struct page*) ;int name; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (char*,struct page*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,struct page*) ;
 int FUNC_5 (struct fscache_cookie*,struct page*,int ) ;

void FUNC_6(struct fscache_retrieval *VAR_2, struct page *VAR_3)
{
 struct fscache_cookie *VAR_4 = VAR_2->op.object->cookie;





 FUNC_5(VAR_4, VAR_3, VAR_1);

 FUNC_1("- mark %p{%lx}", VAR_3, VAR_3->index);
 if (FUNC_0(VAR_3)) {
  static bool VAR_5;
  if (!VAR_5) {
   VAR_5 = 1;
   FUNC_3("Cookie type %s marked page %lx multiple times\n",
    VAR_4->def->name, VAR_3->index);
  }
 }

 if (VAR_4->def->mark_page_cached)
  VAR_4->def->mark_page_cached(VAR_4->netfs_data,
           VAR_2->mapping, VAR_3);
}
