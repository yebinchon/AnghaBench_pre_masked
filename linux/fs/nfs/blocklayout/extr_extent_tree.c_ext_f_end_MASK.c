
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_extent {scalar_t__ be_length; scalar_t__ be_f_offset; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static inline sector_t
FUNC_0(struct pnfs_block_extent *VAR_0)
{
 return VAR_0->be_f_offset + VAR_0->be_length;
}
