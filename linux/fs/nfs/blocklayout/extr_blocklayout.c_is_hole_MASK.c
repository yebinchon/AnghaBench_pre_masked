
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_extent {int be_state; int be_tag; } ;





__attribute__((used)) static bool FUNC_0(struct pnfs_block_extent *VAR_0)
{
 switch (VAR_0->be_state) {
 case 128:
  return 1;
 case 129:
  return VAR_0->be_tag ? 0 : 1;
 default:
  return 0;
 }
}
