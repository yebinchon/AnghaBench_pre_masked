
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; } ;
struct TYPE_2__ {struct inode* rsrc_inode; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inode *VAR_0)
{
 FUNC_4(&VAR_0->i_data);
 FUNC_2(VAR_0);
 if (FUNC_1(VAR_0) && FUNC_0(VAR_0)->rsrc_inode) {
  FUNC_0(FUNC_0(VAR_0)->rsrc_inode)->rsrc_inode = ((void*)0);
  FUNC_3(FUNC_0(VAR_0)->rsrc_inode);
 }
}
