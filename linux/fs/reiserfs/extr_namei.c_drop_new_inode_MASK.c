
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 VAR_1->i_flags |= VAR_0;
 FUNC_1(VAR_1);
 return 0;
}
