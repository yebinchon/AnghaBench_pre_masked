
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ const vcn; int length; scalar_t__ lcn; } ;
typedef TYPE_3__ runlist_element ;
struct TYPE_13__ {TYPE_3__* rl; } ;
struct TYPE_16__ {TYPE_2__* vol; TYPE_1__ runlist; int size_lock; int allocated_size; int mft_no; } ;
typedef TYPE_4__ ntfs_inode ;
struct TYPE_17__ {int mrec; } ;
typedef TYPE_5__ ntfs_attr_search_ctx ;
typedef scalar_t__ VCN ;
struct TYPE_14__ {int sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (TYPE_4__*,scalar_t__ const,TYPE_5__*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;

runlist_element *FUNC_12(ntfs_inode *VAR_6, const VCN VAR_7,
  ntfs_attr_search_ctx *VAR_8)
{
 unsigned long VAR_9;
 runlist_element *VAR_10;
 int VAR_11 = 0;
 bool VAR_12 = 0;

 FUNC_0(!VAR_6);
 FUNC_6("Entering for i_ino 0x%lx, vcn 0x%llx, with%s ctx.",
   VAR_6->mft_no, (unsigned long long)VAR_7, VAR_8 ? "" : "out");
 FUNC_0(!FUNC_3(VAR_6));
 FUNC_0(VAR_7 < 0);
 if (!VAR_6->runlist.rl) {
  FUNC_9(&VAR_6->size_lock, VAR_9);
  if (!VAR_6->allocated_size) {
   FUNC_10(&VAR_6->size_lock, VAR_9);
   return FUNC_1(-VAR_2);
  }
  FUNC_10(&VAR_6->size_lock, VAR_9);
 }
retry_remap:
 VAR_10 = VAR_6->runlist.rl;
 if (FUNC_5(VAR_10 && VAR_7 >= VAR_10[0].vcn)) {
  while (FUNC_5(VAR_10->length)) {
   if (FUNC_11(VAR_7 < VAR_10[1].vcn)) {
    if (FUNC_5(VAR_10->lcn >= VAR_4)) {
     FUNC_6("Done.");
     return VAR_10;
    }
    break;
   }
   VAR_10++;
  }
  if (FUNC_5(VAR_10->lcn != VAR_5)) {
   if (FUNC_5(VAR_10->lcn == VAR_3))
    VAR_11 = -VAR_2;
   else
    VAR_11 = -VAR_1;
  }
 }
 if (!VAR_11 && !VAR_12) {




  if (FUNC_2(VAR_8->mrec))
   VAR_11 = FUNC_4(VAR_8->mrec);
  else {




   VAR_11 = FUNC_8(VAR_6, VAR_7, VAR_8);
   if (FUNC_5(!VAR_11)) {
    VAR_12 = 1;
    goto retry_remap;
   }
  }
  if (VAR_11 == -VAR_0)
   VAR_11 = -VAR_1;
 } else if (!VAR_11)
  VAR_11 = -VAR_1;
 if (VAR_11 != -VAR_2)
  FUNC_7(VAR_6->vol->sb, "Failed with error code %i.", VAR_11);
 return FUNC_1(VAR_11);
}
