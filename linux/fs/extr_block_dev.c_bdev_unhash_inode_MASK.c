
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct inode* FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

void FUNC_4(dev_t VAR_2)
{
 struct inode *VAR_3;

 VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_0, &VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
 }
}
