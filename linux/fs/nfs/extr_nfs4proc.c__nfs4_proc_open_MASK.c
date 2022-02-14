
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_server {int caps; } ;
struct TYPE_3__ {scalar_t__ before; scalar_t__ after; } ;
struct nfs_openres {int rflags; int f_label; TYPE_2__* f_attr; int fh; int seq_res; TYPE_1__ cinfo; } ;
struct nfs_openargs {int open_flags; } ;
struct nfs_open_context {int dummy; } ;
struct nfs4_opendata {int file_created; int f_attr; int rpc_done; struct nfs_openres o_res; struct nfs_openargs o_arg; int dir; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int valid; int time_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nfs4_opendata*) ;
 struct inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct nfs_server*,int *,TYPE_2__*,int ,int *) ;
 int FUNC_5 (struct nfs4_opendata*,struct nfs_open_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfs_server*,int *) ;
 int FUNC_8 (struct inode*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct nfs4_opendata *VAR_8,
      struct nfs_open_context *VAR_9)
{
 struct inode *VAR_10 = FUNC_2(VAR_8->dir);
 struct nfs_server *VAR_11 = FUNC_0(VAR_10);
 struct nfs_openargs *VAR_12 = &VAR_8->o_arg;
 struct nfs_openres *VAR_13 = &VAR_8->o_res;
 int VAR_14;

 VAR_14 = FUNC_5(VAR_8, VAR_9);
 if (!VAR_8->rpc_done)
  return VAR_14;
 if (VAR_14 != 0) {
  if (VAR_14 == -VAR_1 &&
    !(VAR_12->open_flags & VAR_6))
   return -VAR_0;
  return VAR_14;
 }

 FUNC_7(VAR_11, &VAR_8->f_attr);

 if (VAR_12->open_flags & VAR_6) {
  if (VAR_12->open_flags & VAR_7)
   VAR_8->file_created = 1;
  else if (VAR_13->cinfo.before != VAR_13->cinfo.after)
   VAR_8->file_created = 1;
  if (VAR_8->file_created ||
      FUNC_3(VAR_10) != VAR_13->cinfo.after)
   FUNC_8(VAR_10, &VAR_13->cinfo,
     VAR_13->f_attr->time_start, 0);
 }
 if ((VAR_13->rflags & VAR_3) == 0)
  VAR_11->caps &= ~VAR_5;
 if(VAR_13->rflags & VAR_2) {
  VAR_14 = FUNC_1(VAR_8);
  if (VAR_14 != 0)
   return VAR_14;
 }
 if (!(VAR_13->f_attr->valid & VAR_4)) {
  FUNC_6(&VAR_13->seq_res);
  FUNC_4(VAR_11, &VAR_13->fh, VAR_13->f_attr,
    VAR_13->f_label, ((void*)0));
 }
 return 0;
}
