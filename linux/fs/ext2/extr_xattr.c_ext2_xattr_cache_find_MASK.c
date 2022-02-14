
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mb_cache_entry {scalar_t__ e_value; int e_hash_list; } ;
struct mb_cache {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
struct ext2_xattr_header {int h_hash; } ;
struct buffer_head {int b_count; } ;
typedef scalar_t__ __u32 ;
struct TYPE_3__ {int h_refcount; } ;


 struct mb_cache* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*,char*,int ) ;
 int FUNC_5 (struct inode*,char*,unsigned long,...) ;
 int FUNC_6 (int ,char*,char*,int ,unsigned long) ;
 int FUNC_7 (struct ext2_xattr_header*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct buffer_head*) ;
 struct mb_cache_entry* FUNC_11 (struct mb_cache*,scalar_t__) ;
 struct mb_cache_entry* FUNC_12 (struct mb_cache*,struct mb_cache_entry*) ;
 int FUNC_13 (struct mb_cache*,struct mb_cache_entry*) ;
 int FUNC_14 (struct mb_cache*,struct mb_cache_entry*) ;
 struct buffer_head* FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *
FUNC_17(struct inode *VAR_1, struct ext2_xattr_header *VAR_2)
{
 __u32 VAR_3 = FUNC_9(VAR_2->h_hash);
 struct mb_cache_entry *VAR_4;
 struct mb_cache *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_2->h_hash)
  return ((void*)0);
 FUNC_5(VAR_1, "looking for cached blocks [%x]", (int)VAR_3);
again:
 VAR_4 = FUNC_11(VAR_5, VAR_3);
 while (VAR_4) {
  struct buffer_head *VAR_6;

  VAR_6 = FUNC_15(VAR_1->i_sb, VAR_4->e_value);
  if (!VAR_6) {
   FUNC_6(VAR_1->i_sb, "ext2_xattr_cache_find",
    "inode %ld: block %ld read error",
    VAR_1->i_ino, (unsigned long) VAR_4->e_value);
  } else {
   FUNC_10(VAR_6);
   if (FUNC_8(&VAR_4->e_hash_list)) {
    FUNC_13(VAR_5, VAR_4);
    FUNC_16(VAR_6);
    FUNC_3(VAR_6);
    goto again;
   } else if (FUNC_9(FUNC_1(VAR_6)->h_refcount) >
       VAR_0) {
    FUNC_5(VAR_1, "block %ld refcount %d>%d",
       (unsigned long) VAR_4->e_value,
       FUNC_9(FUNC_1(VAR_6)->h_refcount),
       VAR_0);
   } else if (!FUNC_7(VAR_2, FUNC_1(VAR_6))) {
    FUNC_4(VAR_6, "b_count=%d",
       FUNC_2(&(VAR_6->b_count)));
    FUNC_14(VAR_5, VAR_4);
    FUNC_13(VAR_5, VAR_4);
    return VAR_6;
   }
   FUNC_16(VAR_6);
   FUNC_3(VAR_6);
  }
  VAR_4 = FUNC_12(VAR_5, VAR_4);
 }
 return ((void*)0);
}
