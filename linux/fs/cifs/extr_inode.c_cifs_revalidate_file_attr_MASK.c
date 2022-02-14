
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct cifsFileInfo {int tlink; } ;
struct TYPE_2__ {scalar_t__ unix_ext; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct file*) ;
 TYPE_1__* FUNC_4 (int ) ;

int FUNC_5(struct file *VAR_0)
{
 int VAR_1 = 0;
 struct inode *VAR_2 = FUNC_3(VAR_0);
 struct cifsFileInfo *VAR_3 = (struct cifsFileInfo *) VAR_0->private_data;

 if (!FUNC_2(VAR_2))
  return VAR_1;

 if (FUNC_4(VAR_3->tlink)->unix_ext)
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_0(VAR_0);

 return VAR_1;
}
