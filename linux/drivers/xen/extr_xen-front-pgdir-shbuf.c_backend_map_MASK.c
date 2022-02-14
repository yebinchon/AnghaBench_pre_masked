
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_page_directory {int * gref; } ;
struct xen_front_pgdir_shbuf {int num_pages; unsigned char* directory; int num_grefs; TYPE_1__* xb_dev; int * backend_map_handles; int * pages; } ;
struct gnttab_map_grant_ref {scalar_t__ status; int handle; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int dev; int otherend_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xen_front_pgdir_shbuf*) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct gnttab_map_grant_ref*,int *,int *,int) ;
 int FUNC_3 (struct gnttab_map_grant_ref*,int ,int ,int ,int ) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct gnttab_map_grant_ref*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct xen_front_pgdir_shbuf *VAR_6)
{
 struct gnttab_map_grant_ref *VAR_7 = ((void*)0);
 unsigned char *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_7 = FUNC_4(VAR_6->num_pages, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6->backend_map_handles = FUNC_4(VAR_6->num_pages,
        sizeof(*VAR_6->backend_map_handles),
        VAR_1);
 if (!VAR_6->backend_map_handles) {
  FUNC_5(VAR_7);
  return -VAR_0;
 }






 VAR_8 = VAR_6->directory;
 VAR_13 = VAR_6->num_pages;
 VAR_12 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_6->num_grefs; VAR_11++) {
  struct xen_page_directory *VAR_14 =
   (struct xen_page_directory *)VAR_8;
  int VAR_15 = VAR_5;

  if (VAR_15 > VAR_13)
   VAR_15 = VAR_13;

  for (VAR_10 = 0; VAR_10 < VAR_15; VAR_10++) {
   phys_addr_t VAR_16;

   VAR_16 = FUNC_7(VAR_6->pages[VAR_12]);
   FUNC_3(&VAR_7[VAR_12], VAR_16,
       VAR_2,
       VAR_14->gref[VAR_10],
       VAR_6->xb_dev->otherend_id);
   VAR_12++;
  }

  VAR_13 -= VAR_15;
  VAR_8 += VAR_4;
 }
 VAR_9 = FUNC_2(VAR_7, ((void*)0), VAR_6->pages, VAR_6->num_pages);


 for (VAR_12 = 0; VAR_12 < VAR_6->num_pages; VAR_12++) {
  VAR_6->backend_map_handles[VAR_12] = VAR_7[VAR_12].handle;
  if (FUNC_6(VAR_7[VAR_12].status != VAR_3))
   FUNC_1(&VAR_6->xb_dev->dev,
    "Failed to map page %d: %d\n",
    VAR_12, VAR_7[VAR_12].status);
 }

 if (VAR_9) {
  FUNC_1(&VAR_6->xb_dev->dev,
   "Failed to map grant references, ret %d", VAR_9);
  FUNC_0(VAR_6);
 }

 FUNC_5(VAR_7);
 return VAR_9;
}
