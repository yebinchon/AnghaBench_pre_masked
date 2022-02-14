
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct befs_sb_info {scalar_t__ magic1; scalar_t__ magic2; scalar_t__ magic3; int block_size; int block_shift; int ag_shift; int blocks_per_ag; scalar_t__ log_start; scalar_t__ log_end; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct befs_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct super_block*,char*,...) ;

int
FUNC_2(struct super_block *VAR_7)
{
 struct befs_sb_info *VAR_8 = FUNC_0(VAR_7);


 if ((VAR_8->magic1 != VAR_3)
     || (VAR_8->magic2 != VAR_4)
     || (VAR_8->magic3 != VAR_5)) {
  FUNC_1(VAR_7, "invalid magic header");
  return VAR_1;
 }







 if ((VAR_8->block_size != 1024)
     && (VAR_8->block_size != 2048)
     && (VAR_8->block_size != 4096)
     && (VAR_8->block_size != 8192)) {
  FUNC_1(VAR_7, "invalid blocksize: %u", VAR_8->block_size);
  return VAR_1;
 }

 if (VAR_8->block_size > VAR_6) {
  FUNC_1(VAR_7, "blocksize(%u) cannot be larger "
      "than system pagesize(%lu)", VAR_8->block_size,
      VAR_6);
  return VAR_1;
 }






 if ((1 << VAR_8->block_shift) != VAR_8->block_size) {
  FUNC_1(VAR_7, "block_shift disagrees with block_size. "
      "Corruption likely.");
  return VAR_1;
 }





 if ((1 << VAR_8->ag_shift) != VAR_8->blocks_per_ag)
  FUNC_1(VAR_7, "ag_shift disagrees with blocks_per_ag.");

 if (VAR_8->log_start != VAR_8->log_end ||
     VAR_8->flags == VAR_0) {
  FUNC_1(VAR_7, "Filesystem not clean! There are blocks in the "
      "journal. You must boot into BeOS and mount this "
      "volume to make it clean.");
  return VAR_1;
 }

 return VAR_2;
}
