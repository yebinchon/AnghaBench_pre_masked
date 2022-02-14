
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_sb_info {int s_anchor; scalar_t__ s_last_block; } ;
struct udf_options {int anchor; int novrs; scalar_t__ lastblock; int blocksize; } ;
struct super_block {int dummy; } ;
struct kernel_lb_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct udf_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct super_block*,struct kernel_lb_addr*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,char*) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_3, struct udf_options *VAR_4,
   int VAR_5, struct kernel_lb_addr *VAR_6)
{
 struct udf_sb_info *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = 0;
 int VAR_9;

 if (!FUNC_1(VAR_3, VAR_4->blocksize)) {
  if (!VAR_5)
   FUNC_6(VAR_3, "Bad block size\n");
  return -VAR_1;
 }
 VAR_7->s_last_block = VAR_4->lastblock;
 if (!VAR_4->novrs) {

  VAR_8 = FUNC_2(VAR_3);
  if (!VAR_8) {
   if (!VAR_5)
    FUNC_6(VAR_3, "No VRS found\n");
   return -VAR_1;
  }
  if (VAR_8 == -1)
   FUNC_3("Failed to read sector at offset %d. "
      "Assuming open disc. Skipping validity "
      "check\n", VAR_2);
  if (!VAR_7->s_last_block)
   VAR_7->s_last_block = FUNC_5(VAR_3);
 } else {
  FUNC_3("Validity check skipped because of novrs option\n");
 }


 VAR_7->s_anchor = VAR_4->anchor;
 VAR_9 = FUNC_4(VAR_3, VAR_6);
 if (VAR_9 < 0) {
  if (!VAR_5 && VAR_9 == -VAR_0)
   FUNC_6(VAR_3, "No anchor found\n");
  return VAR_9;
 }
 return 0;
}
