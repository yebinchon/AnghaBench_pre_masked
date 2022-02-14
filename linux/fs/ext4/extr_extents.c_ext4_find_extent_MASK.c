
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int eh_max; int eh_entries; } ;
struct ext4_ext_path {short p_maxdepth; short p_depth; int * p_ext; int p_block; int * p_idx; struct ext4_extent_header* p_hdr; struct buffer_head* p_bh; } ;
struct buffer_head {int dummy; } ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_ext_path* FUNC_0 (int) ;
 int FUNC_1 (struct inode*,char*,short) ;
 short VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct inode*,struct ext4_ext_path*,int ) ;
 int FUNC_5 (struct inode*,struct ext4_ext_path*,int ) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,struct ext4_ext_path*) ;
 int FUNC_9 (int *) ;
 struct ext4_extent_header* FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (char*,short,int ,int ) ;
 short FUNC_12 (struct inode*) ;
 struct ext4_extent_header* FUNC_13 (struct inode*) ;
 struct ext4_ext_path* FUNC_14 (short,int,int ) ;
 int FUNC_15 (struct ext4_ext_path*) ;
 int FUNC_16 (int ) ;
 struct buffer_head* FUNC_17 (struct inode*,int ,short,int) ;
 scalar_t__ FUNC_18 (int) ;

struct ext4_ext_path *
FUNC_19(struct inode *VAR_4, ext4_lblk_t VAR_5,
   struct ext4_ext_path **VAR_6, int VAR_7)
{
 struct ext4_extent_header *VAR_8;
 struct buffer_head *VAR_9;
 struct ext4_ext_path *VAR_10 = VAR_6 ? *VAR_6 : ((void*)0);
 short int VAR_11, VAR_12, VAR_13 = 0;
 int VAR_14;

 VAR_8 = FUNC_13(VAR_4);
 VAR_11 = FUNC_12(VAR_4);
 if (VAR_11 < 0 || VAR_11 > VAR_2) {
  FUNC_1(VAR_4, "inode has invalid extent depth: %d",
     VAR_11);
  VAR_14 = -VAR_0;
  goto err;
 }

 if (VAR_10) {
  FUNC_6(VAR_10);
  if (VAR_11 > VAR_10[0].p_maxdepth) {
   FUNC_15(VAR_10);
   *VAR_6 = VAR_10 = ((void*)0);
  }
 }
 if (!VAR_10) {

  VAR_10 = FUNC_14(VAR_11 + 2, sizeof(struct ext4_ext_path),
    VAR_3);
  if (FUNC_18(!VAR_10))
   return FUNC_0(-VAR_1);
  VAR_10[0].p_maxdepth = VAR_11 + 1;
 }
 VAR_10[0].p_hdr = VAR_8;
 VAR_10[0].p_bh = ((void*)0);

 VAR_12 = VAR_11;

 while (VAR_12) {
  FUNC_11("depth %d: num %d, max %d\n",
     VAR_13, FUNC_16(VAR_8->eh_entries), FUNC_16(VAR_8->eh_max));

  FUNC_5(VAR_4, VAR_10 + VAR_13, VAR_5);
  VAR_10[VAR_13].p_block = FUNC_9(VAR_10[VAR_13].p_idx);
  VAR_10[VAR_13].p_depth = VAR_12;
  VAR_10[VAR_13].p_ext = ((void*)0);

  VAR_9 = FUNC_17(VAR_4, VAR_10[VAR_13].p_block, --VAR_12,
         VAR_7);
  if (FUNC_2(VAR_9)) {
   VAR_14 = FUNC_3(VAR_9);
   goto err;
  }

  VAR_8 = FUNC_10(VAR_9);
  VAR_13++;
  VAR_10[VAR_13].p_bh = VAR_9;
  VAR_10[VAR_13].p_hdr = VAR_8;
 }

 VAR_10[VAR_13].p_depth = VAR_12;
 VAR_10[VAR_13].p_ext = ((void*)0);
 VAR_10[VAR_13].p_idx = ((void*)0);


 FUNC_4(VAR_4, VAR_10 + VAR_13, VAR_5);

 if (VAR_10[VAR_13].p_ext)
  VAR_10[VAR_13].p_block = FUNC_7(VAR_10[VAR_13].p_ext);

 FUNC_8(VAR_4, VAR_10);

 return VAR_10;

err:
 FUNC_6(VAR_10);
 FUNC_15(VAR_10);
 if (VAR_6)
  *VAR_6 = ((void*)0);
 return FUNC_0(VAR_14);
}
