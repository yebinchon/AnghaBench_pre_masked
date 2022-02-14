
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb_cache_entry {scalar_t__ e_value; } ;
struct mb_cache {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_xattr_header {int h_hash; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (struct buffer_head*) ;
 struct mb_cache* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*,char*,unsigned long) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*,char*,int) ;
 struct buffer_head* FUNC_7 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (struct ext4_xattr_header*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 struct mb_cache_entry* FUNC_10 (struct mb_cache*,scalar_t__) ;
 struct mb_cache_entry* FUNC_11 (struct mb_cache*,struct mb_cache_entry*) ;

__attribute__((used)) static struct buffer_head *
FUNC_12(struct inode *VAR_2,
       struct ext4_xattr_header *VAR_3,
       struct mb_cache_entry **VAR_4)
{
 __u32 VAR_5 = FUNC_9(VAR_3->h_hash);
 struct mb_cache_entry *VAR_6;
 struct mb_cache *VAR_7 = FUNC_1(VAR_2);

 if (!VAR_7)
  return ((void*)0);
 if (!VAR_3->h_hash)
  return ((void*)0);
 FUNC_6(VAR_2, "looking for cached blocks [%x]", (int)VAR_5);
 VAR_6 = FUNC_10(VAR_7, VAR_5);
 while (VAR_6) {
  struct buffer_head *VAR_8;

  VAR_8 = FUNC_7(VAR_2->i_sb, VAR_6->e_value, VAR_1);
  if (FUNC_3(VAR_8)) {
   if (FUNC_4(VAR_8) == -VAR_0)
    return ((void*)0);
   VAR_8 = ((void*)0);
   FUNC_2(VAR_2, "block %lu read error",
      (unsigned long)VAR_6->e_value);
  } else if (FUNC_8(VAR_3, FUNC_0(VAR_8)) == 0) {
   *VAR_4 = VAR_6;
   return VAR_8;
  }
  FUNC_5(VAR_8);
  VAR_6 = FUNC_11(VAR_7, VAR_6);
 }
 return ((void*)0);
}
