
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int label; TYPE_3__* fattr; int fh; int dir_cinfo; int seq_res; } ;
struct TYPE_6__ {scalar_t__ ftype; int seq_args; } ;
struct nfs4_createdata {TYPE_2__ res; TYPE_1__ arg; int msg; } ;
struct inode {int i_lock; } ;
struct dentry {int dummy; } ;
struct TYPE_9__ {int client; } ;
struct TYPE_8__ {int time_start; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,TYPE_4__*,int *,int *,int *,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,int ,TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1, struct dentry *VAR_2, struct nfs4_createdata *VAR_3)
{
 int VAR_4 = FUNC_1(FUNC_0(VAR_1)->client, FUNC_0(VAR_1), &VAR_3->msg,
        &VAR_3->arg.seq_args, &VAR_3->res.seq_res, 1);
 if (VAR_4 == 0) {
  FUNC_4(&VAR_1->i_lock);
  FUNC_6(VAR_1, &VAR_3->res.dir_cinfo,
    VAR_3->res.fattr->time_start, 0);

  if (VAR_3->arg.ftype == VAR_0)
   FUNC_2(VAR_1);
  FUNC_5(&VAR_1->i_lock);
  VAR_4 = FUNC_3(VAR_2, VAR_3->res.fh, VAR_3->res.fattr, VAR_3->res.label);
 }
 return VAR_4;
}
