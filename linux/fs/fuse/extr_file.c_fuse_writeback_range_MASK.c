
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
typedef int loff_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, loff_t VAR_1, loff_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->i_mapping, VAR_1, VAR_2);

 if (!VAR_3)
  FUNC_1(VAR_0);

 return VAR_3;
}
