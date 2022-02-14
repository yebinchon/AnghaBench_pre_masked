
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_layout {scalar_t__ bl_scsi_layout; } ;
typedef int __be32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static size_t FUNC_0(struct pnfs_block_layout *VAR_2, size_t VAR_3)
{
 if (VAR_2->bl_scsi_layout)
  return sizeof(__be32) + VAR_1 * VAR_3;
 else
  return sizeof(__be32) + VAR_0 * VAR_3;
}
