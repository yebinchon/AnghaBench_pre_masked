
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,unsigned int,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_6(struct inode *VAR_2)
{
 unsigned int VAR_3 = (unsigned int)FUNC_2(VAR_2->i_ino,
      VAR_0);
 FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_3, &VAR_1);
 FUNC_5(VAR_2, VAR_3, !FUNC_3(&VAR_1));
 FUNC_4(&VAR_1);
}
