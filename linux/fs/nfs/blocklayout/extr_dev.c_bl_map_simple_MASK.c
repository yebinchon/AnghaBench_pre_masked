
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pnfs_block_dev_map {int bdev; int disk_offset; int len; int start; } ;
struct pnfs_block_dev {int bdev; int disk_offset; int len; int start; } ;



__attribute__((used)) static bool FUNC_0(struct pnfs_block_dev *VAR_0, u64 VAR_1,
  struct pnfs_block_dev_map *VAR_2)
{
 VAR_2->start = VAR_0->start;
 VAR_2->len = VAR_0->len;
 VAR_2->disk_offset = VAR_0->disk_offset;
 VAR_2->bdev = VAR_0->bdev;
 return 1;
}
