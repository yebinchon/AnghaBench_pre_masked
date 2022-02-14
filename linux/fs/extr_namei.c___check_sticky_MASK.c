
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_uid; } ;
typedef int kuid_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct inode *VAR_1, struct inode *VAR_2)
{
 kuid_t VAR_3 = FUNC_1();

 if (FUNC_2(VAR_2->i_uid, VAR_3))
  return 0;
 if (FUNC_2(VAR_1->i_uid, VAR_3))
  return 0;
 return !FUNC_0(VAR_2, VAR_0);
}
