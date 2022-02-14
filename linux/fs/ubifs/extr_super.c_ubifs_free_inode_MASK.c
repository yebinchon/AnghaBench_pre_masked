
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int data; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ubifs_inode*) ;
 struct ubifs_inode* FUNC_3 (struct inode*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_1)
{
 struct ubifs_inode *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2->data);
 FUNC_0(VAR_1);

 FUNC_2(VAR_0, VAR_2);
}
