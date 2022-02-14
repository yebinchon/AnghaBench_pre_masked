
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct z_erofs_pcluster {TYPE_1__ obj; } ;
struct z_erofs_collection {int vcnt; int nr_pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 struct z_erofs_collection* FUNC_2 (struct z_erofs_pcluster*) ;

__attribute__((used)) static void FUNC_3(struct z_erofs_pcluster *VAR_0)
{
 struct z_erofs_collection *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->obj.refcount, 1);

 FUNC_0(VAR_1->nr_pages);
 FUNC_0(VAR_1->vcnt);
}
