
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct btrfs_block_group_cache {int free_space_ctl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct btrfs_block_group_cache*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct btrfs_block_group_cache *VAR_4,
   u32 VAR_5)
{
 u64 VAR_6;
 int VAR_7;

 FUNC_5("running bitmap only tests");

 VAR_7 = FUNC_2(VAR_4, 0, VAR_3, 1);
 if (VAR_7) {
  FUNC_4("couldn't create a bitmap entry %d", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_4, 0, VAR_3);
 if (VAR_7) {
  FUNC_4("error removing bitmap full range %d", VAR_7);
  return VAR_7;
 }

 if (FUNC_3(VAR_4, 0, VAR_3)) {
  FUNC_4("left some space in bitmap");
  return -1;
 }

 VAR_7 = FUNC_2(VAR_4, 0, VAR_3, 1);
 if (VAR_7) {
  FUNC_4("couldn't add to our bitmap entry %d", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_1, VAR_2);
 if (VAR_7) {
  FUNC_4("couldn't remove middle chunk %d", VAR_7);
  return VAR_7;
 }





 VAR_6 = (u64)(VAR_0 * VAR_5);


 VAR_7 = FUNC_2(VAR_4, VAR_6 - VAR_2,
     VAR_3, 1);
 if (VAR_7) {
  FUNC_4("couldn't add space that straddles two bitmaps %d",
    VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_6 - VAR_1, VAR_2);
 if (VAR_7) {
  FUNC_4("couldn't remove overlapping space %d", VAR_7);
  return VAR_7;
 }

 if (FUNC_3(VAR_4, VAR_6 - VAR_1, VAR_2)) {
  FUNC_4("left some space when removing overlapping");
  return -1;
 }

 FUNC_0(VAR_4->free_space_ctl);

 return 0;
}
