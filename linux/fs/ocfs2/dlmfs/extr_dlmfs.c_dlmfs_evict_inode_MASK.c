
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int * i_ino; } ;
struct dlmfs_inode_private {int * ip_conn; int * ip_parent; int ip_lockres; } ;


 struct dlmfs_inode_private* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inode *VAR_0)
{
 int VAR_1;
 struct dlmfs_inode_private *VAR_2;

 FUNC_2(VAR_0);

 FUNC_4(0, "inode %lu\n", VAR_0->i_ino);

 VAR_2 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0->i_mode)) {
  VAR_1 = FUNC_6(&VAR_2->ip_lockres);
  if (VAR_1 < 0)
   FUNC_5(VAR_1);
  FUNC_3(VAR_2->ip_parent);
  goto clear_fields;
 }

 FUNC_4(0, "we're a directory, ip->ip_conn = 0x%p\n", VAR_2->ip_conn);


 if (VAR_2->ip_conn)
  FUNC_7(VAR_2->ip_conn);
clear_fields:
 VAR_2->ip_parent = ((void*)0);
 VAR_2->ip_conn = ((void*)0);
}
