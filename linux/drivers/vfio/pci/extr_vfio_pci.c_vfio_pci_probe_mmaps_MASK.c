
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* name; int flags; scalar_t__ end; scalar_t__ start; } ;
struct vfio_pci_dummy_resource {int index; int res_next; TYPE_2__ resource; } ;
struct vfio_pci_device {int* bar_mmap_supported; int dummy_resources_list; TYPE_1__* pdev; } ;
struct resource {int flags; int start; int parent; scalar_t__ end; } ;
struct TYPE_3__ {struct resource* resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vfio_pci_dummy_resource*) ;
 struct vfio_pci_dummy_resource* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct resource*) ;

__attribute__((used)) static void FUNC_7(struct vfio_pci_device *VAR_7)
{
 struct resource *VAR_8;
 int VAR_9;
 struct vfio_pci_dummy_resource *VAR_10;

 FUNC_0(&VAR_7->dummy_resources_list);

 for (VAR_9 = VAR_5; VAR_9 <= VAR_6; VAR_9++) {
  VAR_8 = VAR_7->pdev->resource + VAR_9;

  if (!FUNC_1(VAR_0))
   goto no_mmap;

  if (!(VAR_8->flags & VAR_2))
   goto no_mmap;






  if (!FUNC_6(VAR_8))
   goto no_mmap;

  if (FUNC_6(VAR_8) >= VAR_4) {
   VAR_7->bar_mmap_supported[VAR_9] = 1;
   continue;
  }

  if (!(VAR_8->start & ~VAR_3)) {





   VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1);
   if (VAR_10 == ((void*)0))
    goto no_mmap;

   VAR_10->resource.name = "vfio sub-page reserved";
   VAR_10->resource.start = VAR_8->end + 1;
   VAR_10->resource.end = VAR_8->start + VAR_4 - 1;
   VAR_10->resource.flags = VAR_8->flags;
   if (FUNC_5(VAR_8->parent,
      &VAR_10->resource)) {
    FUNC_2(VAR_10);
    goto no_mmap;
   }
   VAR_10->index = VAR_9;
   FUNC_4(&VAR_10->res_next,
     &VAR_7->dummy_resources_list);
   VAR_7->bar_mmap_supported[VAR_9] = 1;
   continue;
  }
no_mmap:
  VAR_7->bar_mmap_supported[VAR_9] = 0;
 }
}
