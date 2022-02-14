
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; int p_block; } ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,scalar_t__) ;
 int FUNC_2 (struct inode*,char*,unsigned long,int,int ) ;
 struct ext4_sb_info* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ext4_ext_path*) ;
 int FUNC_5 (struct ext4_ext_path*) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_7 (struct ext4_extent*) ;
 scalar_t__ FUNC_8 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_9 (struct inode*,scalar_t__,int *,int ) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct inode *VAR_1, ext4_lblk_t VAR_2)
{
 struct ext4_sb_info *VAR_3 = FUNC_3(VAR_1->i_sb);
 struct ext4_ext_path *VAR_4;
 int VAR_5, VAR_6 = 0, VAR_7 = 0;
 struct ext4_extent *VAR_8;
 ext4_lblk_t VAR_9, VAR_10, VAR_11;


 VAR_4 = FUNC_9(VAR_1, FUNC_1(VAR_3, VAR_2), ((void*)0), 0);
 if (FUNC_4(VAR_4)) {
  VAR_7 = FUNC_5(VAR_4);
  VAR_4 = ((void*)0);
  goto out;
 }

 VAR_5 = FUNC_10(VAR_1);






 if (FUNC_13(VAR_4[VAR_5].p_ext == ((void*)0) && VAR_5 != 0)) {
  FUNC_2(VAR_1,
      "bad extent address - lblock: %lu, depth: %d, pblock: %lld",
     (unsigned long) FUNC_1(VAR_3, VAR_2),
     VAR_5, VAR_4[VAR_5].p_block);
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8 = VAR_4[VAR_5].p_ext;


 if (VAR_8 == ((void*)0))
  goto out;

 VAR_9 = FUNC_12(VAR_8->ee_block);
 VAR_10 = FUNC_0(VAR_3, VAR_9);







 if (VAR_2 >= VAR_10) {
  VAR_11 = FUNC_0(VAR_3, VAR_9 +
         FUNC_7(VAR_8) - 1);
  if (VAR_2 <= VAR_11) {
   VAR_6 = 1;
  } else {
   VAR_9 = FUNC_8(VAR_4);
   VAR_10 = FUNC_0(VAR_3, VAR_9);
   if (VAR_2 == VAR_10)
    VAR_6 = 1;
  }
 }

out:
 FUNC_6(VAR_4);
 FUNC_11(VAR_4);

 return VAR_7 ? VAR_7 : VAR_6;
}
