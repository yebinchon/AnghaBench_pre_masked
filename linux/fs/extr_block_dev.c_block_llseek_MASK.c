
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,int,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static loff_t FUNC_5(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_0(VAR_0);
 loff_t VAR_4;

 FUNC_3(VAR_3);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, FUNC_2(VAR_3));
 FUNC_4(VAR_3);
 return VAR_4;
}
