
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_lru; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_inode_lru; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_1)
{

 if (FUNC_0(&VAR_1->i_sb->s_inode_lru, &VAR_1->i_lru))
  FUNC_1(VAR_0);
}
