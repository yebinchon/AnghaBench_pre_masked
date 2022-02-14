
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {unsigned long mi_blocks_per_desc_block; } ;


 TYPE_1__* FUNC_0 (struct inode const*) ;
 unsigned long FUNC_1 (struct inode const*) ;

__attribute__((used)) static unsigned long
FUNC_2(const struct inode *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 =
  VAR_1 / FUNC_1(VAR_0);
 return VAR_2 * FUNC_0(VAR_0)->mi_blocks_per_desc_block;
}
