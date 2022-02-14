
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_block_group_cache {int free_space_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_block_group_cache*,int ,int) ;
 int FUNC_2 (struct btrfs_block_group_cache*,int,int) ;
 scalar_t__ FUNC_3 (struct btrfs_block_group_cache*,int,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct btrfs_block_group_cache *VAR_3)
{
 int VAR_4 = 0;

 FUNC_5("running extent only tests");


 VAR_4 = FUNC_1(VAR_3, 0, VAR_2);
 if (VAR_4) {
  FUNC_4("error adding initial extents %d", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3, 0, VAR_2);
 if (VAR_4) {
  FUNC_4("error removing extent %d", VAR_4);
  return VAR_4;
 }

 if (FUNC_3(VAR_3, 0, VAR_2)) {
  FUNC_4("full remove left some lingering space");
  return -1;
 }


 VAR_4 = FUNC_1(VAR_3, 0, VAR_2);
 if (VAR_4) {
  FUNC_4("error adding half extent %d", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3, 3 * VAR_0, VAR_0);
 if (VAR_4) {
  FUNC_4("error removing tail end %d", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3, 0, VAR_0);
 if (VAR_4) {
  FUNC_4("error removing front end %d", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3, VAR_1, 4096);
 if (VAR_4) {
  FUNC_4("error removing middle piece %d", VAR_4);
  return VAR_4;
 }

 if (FUNC_3(VAR_3, 0, VAR_0)) {
  FUNC_4("still have space at the front");
  return -1;
 }

 if (FUNC_3(VAR_3, VAR_1, 4096)) {
  FUNC_4("still have space in the middle");
  return -1;
 }

 if (FUNC_3(VAR_3, 3 * VAR_0, VAR_0)) {
  FUNC_4("still have space at the end");
  return -1;
 }


 FUNC_0(VAR_3->free_space_ctl);

 return 0;
}
