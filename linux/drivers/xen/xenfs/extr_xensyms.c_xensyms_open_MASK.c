
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ namelen; int name; } ;
struct TYPE_5__ {TYPE_1__ symdata; } ;
struct TYPE_6__ {TYPE_2__ u; int cmd; } ;
struct xensyms {scalar_t__ namelen; TYPE_3__ op; int name; } ;
struct seq_file {scalar_t__ private; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct file*,int *,int) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_5, struct file *VAR_6)
{
 struct seq_file *VAR_7;
 struct xensyms *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, &VAR_4,
          sizeof(struct xensyms));
 if (VAR_9)
  return VAR_9;

 VAR_7 = VAR_6->private_data;
 VAR_8 = (struct xensyms *)VAR_7->private;

 VAR_8->namelen = VAR_3 + 1;
 VAR_8->name = FUNC_0(VAR_8->namelen, VAR_1);
 if (!VAR_8->name) {
  FUNC_2(VAR_5, VAR_6);
  return -VAR_0;
 }
 FUNC_3(VAR_8->op.u.symdata.name, VAR_8->name);
 VAR_8->op.cmd = VAR_2;
 VAR_8->op.u.symdata.namelen = VAR_8->namelen;

 return 0;
}
