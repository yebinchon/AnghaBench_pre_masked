
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pnfs_block_dev_map {scalar_t__ start; scalar_t__ len; } ;



__attribute__((used)) static bool FUNC_0(u64 VAR_0, struct pnfs_block_dev_map *VAR_1)
{
 return VAR_0 >= VAR_1->start && VAR_0 < VAR_1->start + VAR_1->len;
}
