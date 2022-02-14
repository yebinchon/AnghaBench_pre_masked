
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; } ;
struct qnx6_super_block {int sb_magic; } ;
struct qnx6_sb_info {int s_bytesex; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qnx6_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct qnx6_sb_info*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 struct buffer_head* FUNC_6 (struct super_block*,int) ;

__attribute__((used)) static struct buffer_head *FUNC_7(struct super_block *VAR_3,
    int VAR_4, int VAR_5)
{
 struct qnx6_sb_info *VAR_6 = FUNC_0(VAR_3);
 struct buffer_head *VAR_7;
 struct qnx6_super_block *VAR_8;



 VAR_7 = FUNC_6(VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_4("unable to read the first superblock\n");
  return ((void*)0);
 }
 VAR_8 = (struct qnx6_super_block *)VAR_7->b_data;
 if (FUNC_2(VAR_6, VAR_8->sb_magic) != VAR_2) {
  VAR_6->s_bytesex = VAR_0;
  if (FUNC_2(VAR_6, VAR_8->sb_magic) == VAR_2) {

   FUNC_3("fs got different endianness.\n");
   return VAR_7;
  } else
   VAR_6->s_bytesex = VAR_1;
  if (!VAR_5) {
   if (VAR_4 == 0) {
    FUNC_4("wrong signature (magic) in superblock #1.\n");
   } else {
    FUNC_5("wrong signature (magic) at position (0x%lx) - will try alternative position (0x0000).\n",
     VAR_4 * VAR_3->s_blocksize);
   }
  }
  FUNC_1(VAR_7);
  return ((void*)0);
 }
 return VAR_7;
}
