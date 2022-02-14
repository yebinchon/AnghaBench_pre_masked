
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_front_pgdir_shbuf {int num_pages; struct gnttab_unmap_grant_ref* backend_map_handles; TYPE_1__* xb_dev; int * pages; int grefs; } ;
struct gnttab_unmap_grant_ref {scalar_t__ status; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct gnttab_unmap_grant_ref*,int ,int ,struct gnttab_unmap_grant_ref) ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,int *,int *,int) ;
 struct gnttab_unmap_grant_ref* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct gnttab_unmap_grant_ref*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct xen_front_pgdir_shbuf *VAR_4)
{
 struct gnttab_unmap_grant_ref *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_4->pages || !VAR_4->backend_map_handles || !VAR_4->grefs)
  return 0;

 VAR_5 = FUNC_3(VAR_4->num_pages, sizeof(*VAR_5),
       VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_pages; VAR_6++) {
  phys_addr_t VAR_8;

  VAR_8 = FUNC_6(VAR_4->pages[VAR_6]);
  FUNC_1(&VAR_5[VAR_6], VAR_8, VAR_2,
        VAR_4->backend_map_handles[VAR_6]);
 }

 VAR_7 = FUNC_2(VAR_5, ((void*)0), VAR_4->pages,
    VAR_4->num_pages);

 for (VAR_6 = 0; VAR_6 < VAR_4->num_pages; VAR_6++) {
  if (FUNC_5(VAR_5[VAR_6].status != VAR_3))
   FUNC_0(&VAR_4->xb_dev->dev,
    "Failed to unmap page %d: %d\n",
    VAR_6, VAR_5[VAR_6].status);
 }

 if (VAR_7)
  FUNC_0(&VAR_4->xb_dev->dev,
   "Failed to unmap grant references, ret %d", VAR_7);

 FUNC_4(VAR_5);
 FUNC_4(VAR_4->backend_map_handles);
 VAR_4->backend_map_handles = ((void*)0);
 return VAR_7;
}
