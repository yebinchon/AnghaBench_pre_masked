
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_segment {int pls_layout; } ;
struct pnfs_block_layout {int dummy; } ;


 struct pnfs_block_layout* FUNC_0 (int ) ;

__attribute__((used)) static inline struct pnfs_block_layout *
FUNC_1(struct pnfs_layout_segment *VAR_0)
{
 return FUNC_0(VAR_0->pls_layout);
}
