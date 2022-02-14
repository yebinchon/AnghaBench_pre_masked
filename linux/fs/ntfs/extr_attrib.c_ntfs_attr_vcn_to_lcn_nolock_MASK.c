
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; int rl; } ;
struct TYPE_9__ {TYPE_2__* vol; TYPE_1__ runlist; int size_lock; int allocated_size; int mft_no; } ;
typedef TYPE_3__ ntfs_inode ;
typedef scalar_t__ VCN ;
struct TYPE_8__ {int sb; } ;
typedef scalar_t__ LCN ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,long long,...) ;
 int FUNC_6 (int ,char*,long long) ;
 int FUNC_7 (TYPE_3__*,scalar_t__ const,int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__ const) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

LCN FUNC_14(ntfs_inode *VAR_7, const VCN VAR_8,
  const bool VAR_9)
{
 LCN VAR_10;
 unsigned long VAR_11;
 bool VAR_12 = 0;

 FUNC_0(!VAR_7);
 FUNC_5("Entering for i_ino 0x%lx, vcn 0x%llx, %s_locked.",
   VAR_7->mft_no, (unsigned long long)VAR_8,
   VAR_9 ? "write" : "read");
 FUNC_0(!FUNC_1(VAR_7));
 FUNC_0(VAR_8 < 0);
 if (!VAR_7->runlist.rl) {
  FUNC_9(&VAR_7->size_lock, VAR_11);
  if (!VAR_7->allocated_size) {
   FUNC_10(&VAR_7->size_lock, VAR_11);
   return VAR_3;
  }
  FUNC_10(&VAR_7->size_lock, VAR_11);
 }
retry_remap:

 VAR_10 = FUNC_8(VAR_7->runlist.rl, VAR_8);
 if (FUNC_4(VAR_10 >= VAR_5)) {
  FUNC_5("Done, lcn 0x%llx.", (long long)VAR_10);
  return VAR_10;
 }
 if (VAR_10 != VAR_6) {
  if (VAR_10 != VAR_3)
   VAR_10 = VAR_2;
 } else if (!VAR_12) {
  int VAR_13;

  if (!VAR_9) {
   FUNC_12(&VAR_7->runlist.lock);
   FUNC_3(&VAR_7->runlist.lock);
   if (FUNC_11(FUNC_8(VAR_7->runlist.rl, VAR_8) !=
     VAR_6)) {
    FUNC_13(&VAR_7->runlist.lock);
    FUNC_2(&VAR_7->runlist.lock);
    goto retry_remap;
   }
  }
  VAR_13 = FUNC_7(VAR_7, VAR_8, ((void*)0));
  if (!VAR_9) {
   FUNC_13(&VAR_7->runlist.lock);
   FUNC_2(&VAR_7->runlist.lock);
  }
  if (FUNC_4(!VAR_13)) {
   VAR_12 = 1;
   goto retry_remap;
  }
  if (VAR_13 == -VAR_0)
   VAR_10 = VAR_3;
  else if (VAR_13 == -VAR_1)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_2;
 }
 if (VAR_10 != VAR_3)
  FUNC_6(VAR_7->vol->sb, "Failed with error code %lli.",
    (long long)VAR_10);
 return VAR_10;
}
