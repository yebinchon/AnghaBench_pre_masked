
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nfs_open_context* open_context; } ;
struct nfs_open_context {int * mdsthreshold; int list; TYPE_1__ lock_context; scalar_t__ flock_owner; scalar_t__ error; scalar_t__ flags; int mode; int * state; int * ll_cred; struct cred const* cred; int dentry; } ;
struct file {int dummy; } ;
struct dentry {int d_sb; } ;
struct cred {int dummy; } ;
typedef int fmode_t ;
typedef scalar_t__ fl_owner_t ;


 int VAR_0 ;
 struct nfs_open_context* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*) ;
 struct cred* FUNC_3 () ;
 struct nfs_open_context* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cred const*) ;

struct nfs_open_context *FUNC_8(struct dentry *VAR_2,
      fmode_t VAR_3,
      struct file *VAR_4)
{
 struct nfs_open_context *VAR_5;
 const struct cred *VAR_6 = FUNC_3();

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_7(VAR_6);
  return FUNC_0(-VAR_0);
 }
 FUNC_6(VAR_2->d_sb);
 VAR_5->dentry = FUNC_2(VAR_2);
 VAR_5->cred = VAR_6;
 VAR_5->ll_cred = ((void*)0);
 VAR_5->state = ((void*)0);
 VAR_5->mode = VAR_3;
 VAR_5->flags = 0;
 VAR_5->error = 0;
 VAR_5->flock_owner = (fl_owner_t)VAR_4;
 FUNC_5(&VAR_5->lock_context);
 VAR_5->lock_context.open_context = VAR_5;
 FUNC_1(&VAR_5->list);
 VAR_5->mdsthreshold = ((void*)0);
 return VAR_5;
}
