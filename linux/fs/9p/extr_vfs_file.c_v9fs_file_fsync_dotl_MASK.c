
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct p9_fid* private_data; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct p9_fid*,int) ;
 int FUNC_4 (int ,char*,struct file*,int) ;

int FUNC_5(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3,
    int VAR_4)
{
 struct p9_fid *VAR_5;
 struct inode *VAR_6 = VAR_1->f_mapping->host;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_6);
 FUNC_4(VAR_0, "filp %p datasync %x\n", VAR_1, VAR_4);

 VAR_5 = VAR_1->private_data;

 VAR_7 = FUNC_3(VAR_5, VAR_4);
 FUNC_2(VAR_6);

 return VAR_7;
}
