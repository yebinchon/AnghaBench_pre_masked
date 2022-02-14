
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdos_sb_info {int inode_hash_lock; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_pos; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline loff_t FUNC_3(struct msdos_sb_info *VAR_0,
     struct inode *VAR_1)
{
 loff_t VAR_2;



 VAR_2 = FUNC_0(VAR_1)->i_pos;



 return VAR_2;
}
