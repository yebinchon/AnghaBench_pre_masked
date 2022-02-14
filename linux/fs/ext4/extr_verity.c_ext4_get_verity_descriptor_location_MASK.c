
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct inode {int i_blkbits; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {size_t p_depth; struct ext4_extent* p_ext; } ;
typedef int desc_size_disk ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (struct ext4_ext_path*) ;
 int FUNC_4 (struct ext4_extent*) ;
 struct ext4_ext_path* FUNC_5 (struct inode*,scalar_t__,int *,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ext4_ext_path*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,int *,int,int) ;
 int FUNC_12 (int,int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4,
            size_t *VAR_5,
            u64 *VAR_6)
{
 struct ext4_ext_path *VAR_7;
 struct ext4_extent *VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 __le32 VAR_11;
 u32 VAR_12;
 u64 VAR_13;
 int VAR_14;






 if (!FUNC_6(VAR_4, VAR_1)) {
  FUNC_0(VAR_4, "verity file doesn't use extents");
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_4, VAR_2 - 1, ((void*)0), 0);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_8 = VAR_7[VAR_7->p_depth].p_ext;
 if (!VAR_8) {
  FUNC_0(VAR_4, "verity file has no extents");
  FUNC_3(VAR_7);
  FUNC_9(VAR_7);
  return -VAR_0;
 }

 VAR_9 = FUNC_10(VAR_8->ee_block) +
     FUNC_4(VAR_8);
 VAR_10 = (u64)VAR_9 << VAR_4->i_blkbits;
 FUNC_3(VAR_7);
 FUNC_9(VAR_7);

 if (VAR_10 < sizeof(VAR_11))
  goto bad;
 VAR_10 -= sizeof(VAR_11);

 VAR_14 = FUNC_11(VAR_4, &VAR_11, sizeof(VAR_11),
        VAR_10);
 if (VAR_14)
  return VAR_14;
 VAR_12 = FUNC_10(VAR_11);






 if (VAR_12 > VAR_3 || VAR_12 > VAR_10)
  goto bad;

 VAR_13 = FUNC_12(VAR_10 - VAR_12, FUNC_8(VAR_4));
 if (VAR_13 < FUNC_7(VAR_4))
  goto bad;

 *VAR_5 = VAR_12;
 *VAR_6 = VAR_13;
 return 0;

bad:
 FUNC_0(VAR_4, "verity file corrupted; can't find descriptor");
 return -VAR_0;
}
