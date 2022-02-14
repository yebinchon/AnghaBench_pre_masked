
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
struct ext4_map_blocks {scalar_t__ m_lblk; unsigned int m_len; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {int p_depth; struct ext4_extent* p_ext; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 int FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (int *,struct inode*,struct ext4_ext_path*) ;
 int FUNC_3 (int *,struct inode*,struct ext4_ext_path*) ;
 unsigned int FUNC_4 (struct ext4_extent*) ;
 int FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_7 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 struct ext4_ext_path* FUNC_8 (struct inode*,scalar_t__,struct ext4_ext_path**,int ) ;
 int FUNC_9 (int *,struct inode*,struct ext4_map_blocks*,struct ext4_ext_path**,int ) ;
 int FUNC_10 (int ,char*,int ,unsigned long long,unsigned int,unsigned long long,unsigned int) ;
 int FUNC_11 (char*,int ,unsigned long long,unsigned int) ;
 int FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(handle_t *VAR_1,
      struct inode *VAR_2,
      struct ext4_map_blocks *VAR_3,
      struct ext4_ext_path **VAR_4)
{
 struct ext4_ext_path *VAR_5 = *VAR_4;
 struct ext4_extent *VAR_6;
 ext4_lblk_t VAR_7;
 unsigned int VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_12(VAR_2);
 VAR_6 = VAR_5[VAR_9].p_ext;
 VAR_7 = FUNC_13(VAR_6->ee_block);
 VAR_8 = FUNC_4(VAR_6);

 FUNC_11("ext4_convert_unwritten_extents_endio: inode %lu, logical"
  "block %llu, max_blocks %u\n", VAR_2->i_ino,
    (unsigned long long)VAR_7, VAR_8);







 if (VAR_7 != VAR_3->m_lblk || VAR_8 > VAR_3->m_len) {






  VAR_10 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_5 = FUNC_8(VAR_2, VAR_3->m_lblk, VAR_4, 0);
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  VAR_9 = FUNC_12(VAR_2);
  VAR_6 = VAR_5[VAR_9].p_ext;
 }

 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_5 + VAR_9);
 if (VAR_10)
  goto out;

 FUNC_5(VAR_6);




 FUNC_7(VAR_1, VAR_2, VAR_5, VAR_6);


 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_5 + VAR_5->p_depth);
out:
 FUNC_6(VAR_2, VAR_5);
 return VAR_10;
}
