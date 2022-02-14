
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_extent {int be_f_offset; int be_length; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;

__attribute__((used)) static __be32 *FUNC_1(struct pnfs_block_extent *VAR_1, __be32 *VAR_2)
{
 VAR_2 = FUNC_0(VAR_2, VAR_1->be_f_offset << VAR_0);
 return FUNC_0(VAR_2, VAR_1->be_length << VAR_0);
}
