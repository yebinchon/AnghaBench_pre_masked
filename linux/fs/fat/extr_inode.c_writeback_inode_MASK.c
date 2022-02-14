
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0)
{

 int VAR_1;





 VAR_1 = FUNC_1(VAR_0, 0);
 if (!VAR_1)
  VAR_1 = FUNC_0(VAR_0->i_mapping);
 return VAR_1;
}
