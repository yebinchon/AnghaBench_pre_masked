
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct btrfs_block_group_cache {int free_space_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_2 (struct btrfs_block_group_cache*,int,int,int) ;
 scalar_t__ FUNC_3 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct btrfs_block_group_cache *VAR_5,
        u32 VAR_6)
{
 u64 VAR_7 = (u64)(VAR_0 * VAR_6);
 int VAR_8;

 FUNC_5("running bitmap and extent tests");






 VAR_8 = FUNC_2(VAR_5, VAR_3, VAR_1, 1);
 if (VAR_8) {
  FUNC_4("couldn't create bitmap entry %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_5, 0, VAR_1, 0);
 if (VAR_8) {
  FUNC_4("couldn't add extent entry %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, 0, VAR_1);
 if (VAR_8) {
  FUNC_4("couldn't remove extent entry %d", VAR_8);
  return VAR_8;
 }

 if (FUNC_3(VAR_5, 0, VAR_1)) {
  FUNC_4("left remnants after our remove");
  return -1;
 }


 VAR_8 = FUNC_2(VAR_5, 0, VAR_1, 0);
 if (VAR_8) {
  FUNC_4("couldn't re-add extent entry %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_3, VAR_1);
 if (VAR_8) {
  FUNC_4("couldn't remove from bitmap %d", VAR_8);
  return VAR_8;
 }

 if (FUNC_3(VAR_5, VAR_3, VAR_1)) {
  FUNC_4("left remnants in the bitmap");
  return -1;
 }





 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_3, 1);
 if (VAR_8) {
  FUNC_4("couldn't add to a bitmap %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_4, 3 * VAR_1);
 if (VAR_8) {
  FUNC_4("couldn't remove overlapping space %d", VAR_8);
  return VAR_8;
 }

 if (FUNC_3(VAR_5, VAR_4, 3 * VAR_1)) {
  FUNC_4("left over pieces after removing overlapping");
  return -1;
 }

 FUNC_0(VAR_5->free_space_ctl);


 VAR_8 = FUNC_2(VAR_5, VAR_3, VAR_3, 1);
 if (VAR_8) {
  FUNC_4("couldn't add space to the bitmap %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_2, VAR_2, 0);
 if (VAR_8) {
  FUNC_4("couldn't add extent to the cache %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, 3 * VAR_1, VAR_3);
 if (VAR_8) {
  FUNC_4("problem removing overlapping space %d", VAR_8);
  return VAR_8;
 }

 if (FUNC_3(VAR_5, 3 * VAR_1, VAR_3)) {
  FUNC_4("left something behind when removing space");
  return -1;
 }
 FUNC_0(VAR_5->free_space_ctl);
 VAR_8 = FUNC_2(VAR_5, VAR_7 + VAR_3, VAR_3, 1);
 if (VAR_8) {
  FUNC_4("couldn't add bitmap %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_7 - VAR_1,
     5 * VAR_1, 0);
 if (VAR_8) {
  FUNC_4("couldn't add extent entry %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_7 + VAR_1, 5 * VAR_1);
 if (VAR_8) {
  FUNC_4("failed to free our space %d", VAR_8);
  return VAR_8;
 }

 if (FUNC_3(VAR_5, VAR_7 + VAR_1, 5 * VAR_1)) {
  FUNC_4("left stuff over");
  return -1;
 }

 FUNC_0(VAR_5->free_space_ctl);







 VAR_8 = FUNC_2(VAR_5, VAR_1, VAR_2, 1);
 if (VAR_8) {
  FUNC_4("couldn't add bitmap entry %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_5, 3 * VAR_1, VAR_1, 0);
 if (VAR_8) {
  FUNC_4("couldn't add extent entry %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_5, VAR_1, 3 * VAR_1);
 if (VAR_8) {
  FUNC_4("error removing bitmap and extent overlapping %d", VAR_8);
  return VAR_8;
 }

 FUNC_0(VAR_5->free_space_ctl);
 return 0;
}
