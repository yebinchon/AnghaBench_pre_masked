
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vxgedev {int intr_cnt; int no_of_vpath; TYPE_1__* entries; TYPE_1__* vxge_entries; int pdev; } ;
struct vxge_msix_entry {int dummy; } ;
struct msix_entry {int dummy; } ;
struct TYPE_3__ {int entry; scalar_t__ in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int,int) ;
 int FUNC_4 (struct vxgedev*,int) ;
 int FUNC_5 (int ,char*,int ,...) ;

__attribute__((used)) static int FUNC_6(struct vxgedev *VAR_9)
{
 int VAR_10, VAR_11, VAR_12 = 0;
 int VAR_13 = 0, VAR_14;
 VAR_9->intr_cnt = 0;

start:

 VAR_9->intr_cnt = VAR_9->no_of_vpath * 2;


 VAR_9->intr_cnt++;

 VAR_9->entries = FUNC_0(VAR_9->intr_cnt, sizeof(struct msix_entry),
    VAR_2);
 if (!VAR_9->entries) {
  FUNC_5(VAR_5,
   "%s: memory allocation failed",
   VAR_4);
  VAR_12 = -VAR_1;
  goto alloc_entries_failed;
 }

 VAR_9->vxge_entries = FUNC_0(VAR_9->intr_cnt,
         sizeof(struct vxge_msix_entry),
         VAR_2);
 if (!VAR_9->vxge_entries) {
  FUNC_5(VAR_5, "%s: memory allocation failed",
   VAR_4);
  VAR_12 = -VAR_1;
  goto alloc_vxge_entries_failed;
 }

 for (VAR_11 = 0, VAR_10 = 0; VAR_11 < VAR_9->no_of_vpath; VAR_11++) {

  VAR_13 = VAR_11 * VAR_6;


  VAR_9->entries[VAR_10].entry = VAR_13;
  VAR_9->vxge_entries[VAR_10].entry = VAR_13;
  VAR_9->vxge_entries[VAR_10].in_use = 0;
  VAR_10++;


  VAR_9->entries[VAR_10].entry = VAR_13 + 1;
  VAR_9->vxge_entries[VAR_10].entry = VAR_13 + 1;
  VAR_9->vxge_entries[VAR_10].in_use = 0;
  VAR_10++;
 }


 VAR_9->entries[VAR_10].entry = VAR_3;
 VAR_9->vxge_entries[VAR_10].entry = VAR_3;
 VAR_9->vxge_entries[VAR_10].in_use = 0;

 VAR_12 = FUNC_3(VAR_9->pdev,
        VAR_9->entries, 3, VAR_9->intr_cnt);
 if (VAR_12 < 0) {
  VAR_12 = -VAR_0;
  goto enable_msix_failed;
 } else if (VAR_12 < VAR_9->intr_cnt) {
  FUNC_2(VAR_9->pdev);

  FUNC_5(VAR_5,
   "%s: MSI-X enable failed for %d vectors, ret: %d",
   VAR_4, VAR_9->intr_cnt, VAR_12);
  if (VAR_8 != VAR_7) {
   VAR_12 = -VAR_0;
   goto enable_msix_failed;
  }

  FUNC_1(VAR_9->entries);
  FUNC_1(VAR_9->vxge_entries);
  VAR_9->entries = ((void*)0);
  VAR_9->vxge_entries = ((void*)0);

  VAR_14 = (VAR_12 - 1)/2;
  FUNC_4(VAR_9, VAR_14);
  VAR_9->no_of_vpath = VAR_14;
  goto start;
 }
 return 0;

enable_msix_failed:
 FUNC_1(VAR_9->vxge_entries);
alloc_vxge_entries_failed:
 FUNC_1(VAR_9->entries);
alloc_entries_failed:
 return VAR_12;
}
