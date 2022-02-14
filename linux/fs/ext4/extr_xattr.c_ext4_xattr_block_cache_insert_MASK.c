
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb_cache {int dummy; } ;
struct ext4_xattr_header {int h_refcount; int h_hash; } ;
struct buffer_head {int b_blocknr; } ;
typedef scalar_t__ __u32 ;


 struct ext4_xattr_header* FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mb_cache*,int ,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mb_cache *VAR_3,
         struct buffer_head *VAR_4)
{
 struct ext4_xattr_header *VAR_5 = FUNC_0(VAR_4);
 __u32 VAR_6 = FUNC_2(VAR_5->h_hash);
 int VAR_7 = FUNC_2(VAR_5->h_refcount) <
         VAR_1;
 int VAR_8;

 if (!VAR_3)
  return;
 VAR_8 = FUNC_3(VAR_3, VAR_2, VAR_6,
          VAR_4->b_blocknr, VAR_7);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   FUNC_1(VAR_4, "already in cache");
 } else
  FUNC_1(VAR_4, "inserting [%x]", (int)VAR_6);
}
