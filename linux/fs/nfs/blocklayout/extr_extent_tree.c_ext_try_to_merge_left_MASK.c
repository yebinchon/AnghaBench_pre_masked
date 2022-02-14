
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_root {int dummy; } ;
struct pnfs_block_extent {int be_device; int be_node; scalar_t__ be_length; } ;


 scalar_t__ FUNC_0 (struct pnfs_block_extent*,struct pnfs_block_extent*) ;
 struct pnfs_block_extent* FUNC_1 (struct pnfs_block_extent*) ;
 int FUNC_2 (struct pnfs_block_extent*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct rb_root*) ;

__attribute__((used)) static struct pnfs_block_extent *
FUNC_5(struct rb_root *VAR_0, struct pnfs_block_extent *VAR_1)
{
 struct pnfs_block_extent *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 && FUNC_0(VAR_2, VAR_1)) {
  VAR_2->be_length += VAR_1->be_length;
  FUNC_4(&VAR_1->be_node, VAR_0);
  FUNC_3(VAR_1->be_device);
  FUNC_2(VAR_1);
  return VAR_2;
 }

 return VAR_1;
}
