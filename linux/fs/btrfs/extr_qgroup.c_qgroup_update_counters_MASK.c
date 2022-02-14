
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ulist_node {int dummy; } ;
struct ulist_iterator {int dummy; } ;
struct ulist {int dummy; } ;
struct btrfs_qgroup {int excl_cmpr; int excl; int rfer_cmpr; int rfer; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct ulist_iterator*) ;
 scalar_t__ FUNC_1 (struct btrfs_qgroup*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct btrfs_qgroup*,scalar_t__) ;
 int FUNC_3 (struct btrfs_fs_info*,struct btrfs_qgroup*) ;
 int FUNC_4 (struct btrfs_fs_info*,struct btrfs_qgroup*,scalar_t__,scalar_t__) ;
 struct ulist_node* FUNC_5 (struct ulist*,struct ulist_iterator*) ;
 struct btrfs_qgroup* FUNC_6 (struct ulist_node*) ;

__attribute__((used)) static int FUNC_7(struct btrfs_fs_info *VAR_0,
      struct ulist *VAR_1,
      u64 VAR_2,
      u64 VAR_3,
      u64 VAR_4, u64 VAR_5)
{
 struct ulist_node *VAR_6;
 struct ulist_iterator VAR_7;
 struct btrfs_qgroup *VAR_8;
 u64 VAR_9, VAR_10;

 FUNC_0(&VAR_7);
 while ((VAR_6 = FUNC_5(VAR_1, &VAR_7))) {
  bool VAR_11 = 0;

  VAR_8 = FUNC_6(VAR_6);
  VAR_10 = FUNC_2(VAR_8, VAR_5);
  VAR_9 = FUNC_1(VAR_8, VAR_5);

  FUNC_4(VAR_0, VAR_8, VAR_10,
          VAR_9);


  if (VAR_10 == 0 && VAR_9 > 0) {
   VAR_8->rfer += VAR_4;
   VAR_8->rfer_cmpr += VAR_4;
   VAR_11 = 1;
  }
  if (VAR_10 > 0 && VAR_9 == 0) {
   VAR_8->rfer -= VAR_4;
   VAR_8->rfer_cmpr -= VAR_4;
   VAR_11 = 1;
  }



  if (VAR_10 == VAR_2 &&
      VAR_9 < VAR_3) {

   if (VAR_10 != 0) {
    VAR_8->excl -= VAR_4;
    VAR_8->excl_cmpr -= VAR_4;
    VAR_11 = 1;
   }
  }


  if (VAR_10 < VAR_2 &&
      VAR_9 == VAR_3) {

   if (VAR_9 != 0) {
    VAR_8->excl += VAR_4;
    VAR_8->excl_cmpr += VAR_4;
    VAR_11 = 1;
   }
  }


  if (VAR_10 == VAR_2 &&
      VAR_9 == VAR_3) {
   if (VAR_10 == 0) {


    if (VAR_9 != 0) {

     VAR_8->excl += VAR_4;
     VAR_8->excl_cmpr += VAR_4;
     VAR_11 = 1;
    }

   } else {


    if (VAR_9 == 0) {

     VAR_8->excl -= VAR_4;
     VAR_8->excl_cmpr -= VAR_4;
     VAR_11 = 1;
    }

   }
  }

  if (VAR_11)
   FUNC_3(VAR_0, VAR_8);
 }
 return 0;
}
