
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mb_cache_entry {int e_reusable; } ;
struct mb_cache {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_xattr_inode_array {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
typedef int handle_t ;
struct TYPE_2__ {int h_refcount; int h_hash; } ;


 int FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*,char*) ;
 struct mb_cache* FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct buffer_head*,char*,...) ;
 int FUNC_10 (int *,struct inode*,struct buffer_head*,int ,int,int) ;
 int FUNC_11 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (struct inode*,struct buffer_head*) ;
 int FUNC_18 (int *,struct inode*,struct buffer_head*,int ,int,struct ext4_xattr_inode_array**,int,int) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (struct mb_cache*,int,int ) ;
 struct mb_cache_entry* FUNC_23 (struct mb_cache*,int,int ) ;
 int FUNC_24 (struct mb_cache*,struct mb_cache_entry*) ;
 int FUNC_25 (struct buffer_head*) ;

__attribute__((used)) static void
FUNC_26(handle_t *VAR_3, struct inode *VAR_4,
    struct buffer_head *VAR_5,
    struct ext4_xattr_inode_array **VAR_6,
    int VAR_7)
{
 struct mb_cache *VAR_8 = FUNC_3(VAR_4);
 u32 VAR_9, VAR_10;
 int VAR_11 = 0;

 FUNC_2(VAR_5, "get_write_access");
 VAR_11 = FUNC_15(VAR_3, VAR_5);
 if (VAR_11)
  goto out;

 FUNC_21(VAR_5);
 VAR_9 = FUNC_20(FUNC_1(VAR_5)->h_hash);
 VAR_10 = FUNC_20(FUNC_1(VAR_5)->h_refcount);
 if (VAR_10 == 1) {
  FUNC_9(VAR_5, "refcount now=0; freeing");




  if (VAR_8)
   FUNC_22(VAR_8, VAR_9,
           VAR_5->b_blocknr);
  FUNC_19(VAR_5);
  FUNC_25(VAR_5);

  if (FUNC_14(VAR_4->i_sb))
   FUNC_18(VAR_3, VAR_4, VAR_5,
           FUNC_0(VAR_5),
           1 ,
           VAR_6,
           VAR_7,
           1 );
  FUNC_10(VAR_3, VAR_4, VAR_5, 0, 1,
     VAR_1 |
     VAR_0);
 } else {
  VAR_10--;
  FUNC_1(VAR_5)->h_refcount = FUNC_7(VAR_10);
  if (VAR_10 == VAR_2 - 1) {
   struct mb_cache_entry *VAR_12;

   if (VAR_8) {
    VAR_12 = FUNC_23(VAR_8, VAR_9,
       VAR_5->b_blocknr);
    if (VAR_12) {
     VAR_12->e_reusable = 1;
     FUNC_24(VAR_8, VAR_12);
    }
   }
  }

  FUNC_17(VAR_4, VAR_5);
  if (FUNC_13(VAR_3))
   VAR_11 = FUNC_11(VAR_3, VAR_4, VAR_5);
  FUNC_25(VAR_5);
  if (!FUNC_13(VAR_3))
   VAR_11 = FUNC_11(VAR_3, VAR_4, VAR_5);
  if (FUNC_6(VAR_4))
   FUNC_12(VAR_3);
  FUNC_8(VAR_4, FUNC_4(FUNC_5(VAR_4->i_sb), 1));
  FUNC_9(VAR_5, "refcount now=%d; releasing",
     FUNC_20(FUNC_1(VAR_5)->h_refcount));
 }
out:
 FUNC_16(VAR_4->i_sb, VAR_11);
 return;
}
