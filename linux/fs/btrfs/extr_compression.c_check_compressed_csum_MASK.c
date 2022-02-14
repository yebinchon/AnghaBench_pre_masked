
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct page {int dummy; } ;
struct compressed_bio {unsigned long nr_pages; int mirror_num; struct page** compressed_pages; int * sums; } ;
struct btrfs_inode {int flags; TYPE_1__* root; } ;
struct btrfs_fs_info {int csum_shash; int super_copy; } ;
struct TYPE_8__ {int tfm; } ;
struct TYPE_7__ {struct btrfs_fs_info* fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct btrfs_inode*,int ,int *,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int ) ;
 char* FUNC_6 (struct page*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int **,int *,int const) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_9(struct btrfs_inode *VAR_5,
     struct compressed_bio *VAR_6,
     u64 VAR_7)
{
 struct btrfs_fs_info *VAR_8 = VAR_5->root->fs_info;
 FUNC_0(VAR_4, VAR_8->csum_shash);
 const u16 VAR_9 = FUNC_2(VAR_8->super_copy);
 int VAR_10;
 struct page *VAR_11;
 unsigned long VAR_12;
 char *VAR_13;
 u8 VAR_14[VAR_0];
 u8 *VAR_15 = VAR_6->sums;

 if (VAR_5->flags & VAR_1)
  return 0;

 VAR_4->tfm = VAR_8->csum_shash;

 for (VAR_12 = 0; VAR_12 < VAR_6->nr_pages; VAR_12++) {
  VAR_11 = VAR_6->compressed_pages[VAR_12];

  FUNC_4(VAR_4);
  VAR_13 = FUNC_6(VAR_11);
  FUNC_5(VAR_4, VAR_13, VAR_3);
  FUNC_7(VAR_13);
  FUNC_3(VAR_4, (u8 *)&VAR_14);

  if (FUNC_8(&VAR_14, VAR_15, VAR_9)) {
   FUNC_1(VAR_5, VAR_7,
     VAR_14, VAR_15, VAR_6->mirror_num);
   VAR_10 = -VAR_2;
   goto fail;
  }
  VAR_15 += VAR_9;

 }
 VAR_10 = 0;
fail:
 return VAR_10;
}
