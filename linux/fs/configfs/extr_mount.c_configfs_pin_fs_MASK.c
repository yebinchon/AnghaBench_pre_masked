
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct TYPE_3__ {struct dentry* mnt_root; } ;


 struct dentry* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,TYPE_1__**,int *) ;

struct dentry *FUNC_2(void)
{
 int VAR_3 = FUNC_1(&VAR_0, &VAR_2,
        &VAR_1);
 return VAR_3 ? FUNC_0(VAR_3) : VAR_2->mnt_root;
}
