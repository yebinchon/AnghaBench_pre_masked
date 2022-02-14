
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_iloc {int dummy; } ;
struct ext4_dir_entry_2 {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_block; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct inode*) ;
 void* FUNC_2 (struct inode*,struct ext4_iloc*) ;
 TYPE_1__* FUNC_3 (struct ext4_iloc*) ;

__attribute__((used)) static inline struct ext4_dir_entry_2 *
FUNC_4(struct inode *VAR_1,
        struct ext4_iloc *VAR_2,
        unsigned int VAR_3,
        void **VAR_4,
        int *VAR_5)
{
 void *VAR_6;

 FUNC_0(VAR_3 > FUNC_1(VAR_1));

 if (VAR_3 < VAR_0) {
  VAR_6 = (void *)FUNC_3(VAR_2)->i_block;
  *VAR_5 = VAR_0;
 } else {
  VAR_6 = FUNC_2(VAR_1, VAR_2);
  VAR_3 -= VAR_0;
  *VAR_5 = FUNC_1(VAR_1) -
    VAR_0;
 }

 if (VAR_4)
  *VAR_4 = VAR_6;
 return (struct ext4_dir_entry_2 *)(VAR_6 + VAR_3);
}
