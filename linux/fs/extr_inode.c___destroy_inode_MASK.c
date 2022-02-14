
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_default_acl; scalar_t__ i_acl; TYPE_1__* i_sb; int i_nlink; } ;
struct TYPE_2__ {int s_remove_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct inode*) ;
 int VAR_0 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;

void FUNC_12(struct inode *VAR_1)
{
 FUNC_0(FUNC_6(VAR_1));
 FUNC_5(VAR_1);
 FUNC_10(VAR_1);
 FUNC_4(VAR_1);
 FUNC_8(VAR_1);
 if (!VAR_1->i_nlink) {
  FUNC_1(FUNC_3(&VAR_1->i_sb->s_remove_count) == 0);
  FUNC_2(&VAR_1->i_sb->s_remove_count);
 }







 FUNC_11(VAR_0);
}
