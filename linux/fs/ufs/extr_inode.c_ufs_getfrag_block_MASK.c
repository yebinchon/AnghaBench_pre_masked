
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ufs_sb_private_info {unsigned int s_fpbshift; unsigned int s_fpbmask; } ;
struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct buffer_head {int * b_page; } ;
typedef unsigned int sector_t ;
struct TYPE_4__ {unsigned int i_lastfrag; int truncate_mutex; int meta_lock; } ;
struct TYPE_3__ {struct ufs_sb_private_info* s_uspi; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long long) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 unsigned int VAR_1 ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*,struct super_block*,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct inode*,unsigned int,unsigned int*) ;
 int FUNC_10 (struct inode*,unsigned int,int*,int *) ;
 scalar_t__ FUNC_11 (struct inode*,unsigned int*,int) ;
 scalar_t__ FUNC_12 (struct inode*,scalar_t__,unsigned int,unsigned int,int*,int*,int *) ;
 scalar_t__ FUNC_13 (struct inode*,unsigned int,unsigned int,int*,int*,int *) ;
 int FUNC_14 (struct super_block*,char*,char*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_2, sector_t VAR_3, struct buffer_head *VAR_4, int VAR_5)
{
 struct super_block *VAR_6 = VAR_2->i_sb;
 struct ufs_sb_private_info *VAR_7 = FUNC_2(VAR_6)->s_uspi;
 int VAR_8 = 0, VAR_9 = 0;
 unsigned VAR_10[4];
 int VAR_11 = FUNC_9(VAR_2, VAR_3 >> VAR_7->s_fpbshift, VAR_10);
 u64 VAR_12 = 0;
 unsigned VAR_13 = VAR_3 & VAR_7->s_fpbmask;

 VAR_12 = FUNC_11(VAR_2, VAR_10, VAR_11);
 if (!VAR_5)
  goto done;

 if (VAR_12) {
  if (VAR_3 >= VAR_1)
   goto done;
  FUNC_6(&FUNC_1(VAR_2)->meta_lock);
  if (VAR_3 < FUNC_1(VAR_2)->i_lastfrag) {
   FUNC_7(&FUNC_1(VAR_2)->meta_lock);
   goto done;
  }
  FUNC_7(&FUNC_1(VAR_2)->meta_lock);
 }


 FUNC_4(&FUNC_1(VAR_2)->truncate_mutex);

 FUNC_0("ENTER, ino %lu, fragment %llu\n", VAR_2->i_ino, (unsigned long long)VAR_3);
 if (FUNC_15(!VAR_11)) {
  FUNC_14(VAR_6, "ufs_get_block", "block > big");
  VAR_8 = -VAR_0;
  goto out;
 }

 if (FUNC_1(VAR_2)->i_lastfrag < VAR_1) {
  unsigned VAR_14 = FUNC_1(VAR_2)->i_lastfrag;
  unsigned VAR_15 = VAR_14 & VAR_7->s_fpbmask;
  if (VAR_15 && VAR_3 >= VAR_14) {
   if (!FUNC_10(VAR_2, VAR_3,
          &VAR_8, VAR_4->b_page))
    goto out;
  }
 }

 if (VAR_11 == 1) {
  VAR_12 = FUNC_13(VAR_2, VAR_10[0], VAR_3,
        &VAR_8, &VAR_9, VAR_4->b_page);
 } else {
  int VAR_16;
  VAR_12 = FUNC_13(VAR_2, VAR_10[0], VAR_3,
        &VAR_8, ((void*)0), ((void*)0));
  for (VAR_16 = 1; VAR_16 < VAR_11 - 1; VAR_16++)
   VAR_12 = FUNC_12(VAR_2, VAR_12, VAR_10[VAR_16],
      VAR_3, &VAR_8, ((void*)0), ((void*)0));
  VAR_12 = FUNC_12(VAR_2, VAR_12, VAR_10[VAR_11 - 1],
     VAR_3, &VAR_8, &VAR_9, VAR_4->b_page);
 }
out:
 if (VAR_12) {
  VAR_12 += VAR_13;
  FUNC_3(VAR_4, VAR_6, VAR_12);
  if (VAR_9)
   FUNC_8(VAR_4);
 }
 FUNC_5(&FUNC_1(VAR_2)->truncate_mutex);
 return VAR_8;

done:
 if (VAR_12)
  FUNC_3(VAR_4, VAR_6, VAR_12 + VAR_13);
 return 0;
}
