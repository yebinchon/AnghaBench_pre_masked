
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mb_cache {int dummy; } ;
struct inode {int i_nlink; int i_ino; } ;
struct ext4_iloc {int dummy; } ;
typedef int s64 ;
typedef int handle_t ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_4 (int *,struct inode*) ;
 int FUNC_5 (int *,struct inode*) ;
 int FUNC_6 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_7 (struct inode*,char*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct mb_cache*,int ,int ,int ,int) ;
 int FUNC_14 (struct mb_cache*,int ,int ) ;
 int FUNC_15 (struct inode*,int) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_1, struct inode *VAR_2,
           int VAR_3)
{
 struct mb_cache *VAR_4 = FUNC_0(VAR_2);
 struct ext4_iloc VAR_5;
 s64 VAR_6;
 u32 VAR_7;
 int VAR_8;

 FUNC_11(VAR_2);

 VAR_8 = FUNC_6(VAR_1, VAR_2, &VAR_5);
 if (VAR_8)
  goto out;

 VAR_6 = FUNC_9(VAR_2);
 VAR_6 += VAR_3;
 FUNC_10(VAR_2, VAR_6);

 if (VAR_3 > 0) {
  FUNC_1(VAR_6 <= 0, "EA inode %lu ref_count=%lld",
     VAR_2->i_ino, VAR_6);

  if (VAR_6 == 1) {
   FUNC_1(VAR_2->i_nlink, "EA inode %lu i_nlink=%u",
      VAR_2->i_ino, VAR_2->i_nlink);

   FUNC_15(VAR_2, 1);
   FUNC_5(VAR_1, VAR_2);

   if (VAR_4) {
    VAR_7 = FUNC_8(VAR_2);
    FUNC_13(VAR_4,
            VAR_0, VAR_7,
            VAR_2->i_ino,
            1 );
   }
  }
 } else {
  FUNC_1(VAR_6 < 0, "EA inode %lu ref_count=%lld",
     VAR_2->i_ino, VAR_6);

  if (VAR_6 == 0) {
   FUNC_1(VAR_2->i_nlink != 1,
      "EA inode %lu i_nlink=%u",
      VAR_2->i_ino, VAR_2->i_nlink);

   FUNC_2(VAR_2);
   FUNC_4(VAR_1, VAR_2);

   if (VAR_4) {
    VAR_7 = FUNC_8(VAR_2);
    FUNC_14(VAR_4, VAR_7,
            VAR_2->i_ino);
   }
  }
 }

 VAR_8 = FUNC_3(VAR_1, VAR_2, &VAR_5);
 if (VAR_8)
  FUNC_7(VAR_2,
       "ext4_mark_iloc_dirty() failed ret=%d", VAR_8);
out:
 FUNC_12(VAR_2);
 return VAR_8;
}
