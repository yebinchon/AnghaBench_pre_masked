
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {int fd; } ;
struct TYPE_3__ {struct inode* host; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2,
   int VAR_3)
{
 struct inode *VAR_4 = VAR_0->f_mapping->host;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_4);
 VAR_5 = FUNC_2(FUNC_0(VAR_4)->fd, VAR_3);
 FUNC_4(VAR_4);

 return VAR_5;
}
