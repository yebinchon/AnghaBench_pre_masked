
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ f_version; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ,int) ;
 int FUNC_2 (struct file*,int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct inode *VAR_3 = VAR_0->f_mapping->host;
 int VAR_4 = FUNC_4(VAR_3);
 loff_t VAR_5, VAR_6 = FUNC_0(VAR_0);

 if (FUNC_5(VAR_4))
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2,
          VAR_6, VAR_6);
 else
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_0->f_version = FUNC_3(VAR_3) - 1;
 return VAR_5;
}
