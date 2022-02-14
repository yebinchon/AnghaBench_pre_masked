
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_data; int i_ino; } ;
struct TYPE_2__ {struct inode* rsrc_inode; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_1)
{
 FUNC_3(VAR_0, "hfsplus_evict_inode: %lu\n", VAR_1->i_ino);
 FUNC_5(&VAR_1->i_data);
 FUNC_2(VAR_1);
 if (FUNC_1(VAR_1)) {
  FUNC_0(FUNC_0(VAR_1)->rsrc_inode)->rsrc_inode = ((void*)0);
  FUNC_4(FUNC_0(VAR_1)->rsrc_inode);
 }
}
