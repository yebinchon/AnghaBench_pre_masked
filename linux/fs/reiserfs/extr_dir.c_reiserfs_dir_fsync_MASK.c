
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct file*,int ,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2,
         int VAR_3)
{
 struct inode *VAR_4 = VAR_0->f_mapping->host;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_4);
 FUNC_4(VAR_4->i_sb);
 VAR_5 = FUNC_3(VAR_4);
 FUNC_5(VAR_4->i_sb);
 FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
