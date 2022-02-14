
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i_root; } ;
struct TYPE_3__ {int inodes_count; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__*) ;

int FUNC_4(struct inode *VAR_0,
        u64 *VAR_1, u64 *VAR_2)
{
 u64 VAR_3;
 int VAR_4;

 *VAR_1 = 0;
 *VAR_2 = 0;

 VAR_3 = FUNC_1(&FUNC_0(VAR_0)->i_root->inodes_count);
 VAR_4 = FUNC_3(VAR_0, VAR_3, VAR_1);
 if (FUNC_2(!VAR_4))
  *VAR_2 = *VAR_1 - VAR_3;
 return VAR_4;
}
