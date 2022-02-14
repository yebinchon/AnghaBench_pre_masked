
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {int allocation_group; scalar_t__ start; } ;
typedef TYPE_1__ befs_inode_addr ;
typedef scalar_t__ befs_blocknr_t ;
struct TYPE_5__ {int ag_shift; } ;


 TYPE_3__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline befs_blocknr_t
FUNC_1(struct super_block *VAR_0, const befs_inode_addr *VAR_1)
{
 return ((VAR_1->allocation_group << FUNC_0(VAR_0)->ag_shift) +
  VAR_1->start);
}
