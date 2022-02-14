
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
typedef int kprojid_t ;
struct TYPE_2__ {int i_projid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct inode *VAR_1, kprojid_t *VAR_2)
{
 if (!FUNC_1(VAR_1->i_sb))
  return -VAR_0;
 *VAR_2 = FUNC_0(VAR_1)->i_projid;
 return 0;
}
