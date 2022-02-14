
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_free_extent {int fe_start; int fe_group; } ;
typedef scalar_t__ ext4_fsblk_t ;
struct TYPE_2__ {int s_cluster_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,int ) ;

__attribute__((used)) static inline ext4_fsblk_t FUNC_2(struct super_block *VAR_0,
     struct ext4_free_extent *VAR_1)
{
 return FUNC_1(VAR_0, VAR_1->fe_group) +
  (VAR_1->fe_start << FUNC_0(VAR_0)->s_cluster_bits);
}
