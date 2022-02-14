
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct msdos_dir_entry {int dummy; } ;
struct buffer_head {scalar_t__ b_data; scalar_t__ b_blocknr; } ;
typedef int loff_t ;
struct TYPE_2__ {int dir_per_block_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline loff_t FUNC_1(struct super_block *VAR_0,
        struct buffer_head *VAR_1,
        struct msdos_dir_entry *VAR_2)
{
 return ((loff_t)VAR_1->b_blocknr << FUNC_0(VAR_0)->dir_per_block_bits)
  | (VAR_2 - (struct msdos_dir_entry *)VAR_1->b_data);
}
