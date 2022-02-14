
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int) ;

int FUNC_5(struct inode *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1);

 VAR_2 = FUNC_0(VAR_1->i_mapping);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 < 0)
  goto out;
 FUNC_2(VAR_1, 1);
 VAR_2 = 0;

out:
 FUNC_4(VAR_1, VAR_2);
 return VAR_2;
}
