
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct find_free_extent_ctl {scalar_t__ loop; int orig_have_caching_bg; scalar_t__ index; scalar_t__ empty_size; scalar_t__ empty_cluster; int flags; scalar_t__ have_caching_bg; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {scalar_t__ objectid; } ;
struct btrfs_fs_info {struct btrfs_root* extent_root; } ;
struct btrfs_free_cluster {int lock; scalar_t__ window_start; } ;
struct TYPE_2__ {struct btrfs_trans_handle* journal_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*,int) ;
 int FUNC_3 (struct btrfs_trans_handle*,int ,int ) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*) ;
 TYPE_1__* VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct btrfs_fs_info *VAR_8,
     struct btrfs_free_cluster *VAR_9,
     struct btrfs_key *VAR_10,
     struct find_free_extent_ctl *VAR_11,
     int VAR_12, bool VAR_13)
{
 struct btrfs_root *VAR_14 = VAR_8->extent_root;
 int VAR_15;

 if ((VAR_11->loop == VAR_4) &&
     VAR_11->have_caching_bg && !VAR_11->orig_have_caching_bg)
  VAR_11->orig_have_caching_bg = 1;

 if (!VAR_10->objectid && VAR_11->loop >= VAR_5 &&
     VAR_11->have_caching_bg)
  return 1;

 if (!VAR_10->objectid && ++(VAR_11->index) < VAR_0)
  return 1;

 if (VAR_10->objectid) {
  if (!VAR_13 && VAR_9) {
   FUNC_6(&VAR_9->lock);
   VAR_9->window_start = VAR_10->objectid;
   FUNC_7(&VAR_9->lock);
  }
  return 0;
 }
 if (VAR_11->loop < VAR_6) {
  VAR_11->index = 0;
  if (VAR_11->loop == VAR_4) {





   if (VAR_11->orig_have_caching_bg || !VAR_12)
    VAR_11->loop = VAR_5;
   else
    VAR_11->loop = VAR_3;
  } else {
   VAR_11->loop++;
  }

  if (VAR_11->loop == VAR_3) {
   struct btrfs_trans_handle *VAR_16;
   int VAR_17 = 0;

   VAR_16 = VAR_7->journal_info;
   if (VAR_16)
    VAR_17 = 1;
   else
    VAR_16 = FUNC_5(VAR_14);

   if (FUNC_0(VAR_16)) {
    VAR_15 = FUNC_1(VAR_16);
    return VAR_15;
   }

   VAR_15 = FUNC_3(VAR_16, VAR_11->flags,
      VAR_1);






   if (VAR_15 == -VAR_2)
    VAR_11->loop = VAR_6;


   if (VAR_15 < 0 && VAR_15 != -VAR_2)
    FUNC_2(VAR_16, VAR_15);
   else
    VAR_15 = 0;
   if (!VAR_17)
    FUNC_4(VAR_16);
   if (VAR_15)
    return VAR_15;
  }

  if (VAR_11->loop == VAR_6) {




   if (VAR_11->empty_size == 0 &&
       VAR_11->empty_cluster == 0)
    return -VAR_2;
   VAR_11->empty_size = 0;
   VAR_11->empty_cluster = 0;
  }
  return 1;
 }
 return -VAR_2;
}
