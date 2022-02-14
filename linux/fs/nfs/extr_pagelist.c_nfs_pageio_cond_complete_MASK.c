
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int prev; } ;
struct nfs_pgio_mirror {TYPE_1__ pg_list; } ;
struct nfs_pageio_descriptor {size_t pg_mirror_count; struct nfs_pgio_mirror* pg_mirrors; } ;
struct nfs_page {scalar_t__ wb_index; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (TYPE_1__*) ;
 struct nfs_page* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_pageio_descriptor*) ;

void FUNC_3(struct nfs_pageio_descriptor *VAR_0, pgoff_t VAR_1)
{
 struct nfs_pgio_mirror *VAR_2;
 struct nfs_page *VAR_3;
 u32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->pg_mirror_count; VAR_4++) {
  VAR_2 = &VAR_0->pg_mirrors[VAR_4];
  if (!FUNC_0(&VAR_2->pg_list)) {
   VAR_3 = FUNC_1(VAR_2->pg_list.prev);
   if (VAR_1 != VAR_3->wb_index + 1) {
    FUNC_2(VAR_0);
    break;
   }
  }
 }
}
