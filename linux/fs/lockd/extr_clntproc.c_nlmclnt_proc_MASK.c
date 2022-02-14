
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nlmclnt_operations {int (* nlmclnt_alloc_call ) (void*) ;} ;
struct TYPE_7__ {int block; } ;
struct nlm_rqst {TYPE_3__ a_args; void* a_callback_data; } ;
struct nlm_host {struct nlmclnt_operations* h_nlmclnt_ops; } ;
struct TYPE_5__ {int owner; } ;
struct TYPE_6__ {TYPE_1__ nfs_fl; } ;
struct file_lock {scalar_t__ fl_type; TYPE_4__* fl_ops; TYPE_2__ fl_u; } ;
struct TYPE_8__ {int (* fl_release_private ) (struct file_lock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 struct nlm_rqst* FUNC_4 (struct nlm_host*) ;
 int FUNC_5 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_6 (struct file_lock*,struct nlm_host*) ;
 int FUNC_7 (struct nlm_rqst*) ;
 int FUNC_8 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_9 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_10 (struct nlm_rqst*,struct file_lock*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct file_lock*) ;

int FUNC_13(struct nlm_host *VAR_3, int VAR_4, struct file_lock *VAR_5, void *VAR_6)
{
 struct nlm_rqst *VAR_7;
 int VAR_8;
 const struct nlmclnt_operations *VAR_9 = VAR_3->h_nlmclnt_ops;

 VAR_7 = FUNC_4(VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 if (VAR_9 && VAR_9->nlmclnt_alloc_call)
  VAR_9->nlmclnt_alloc_call(VAR_6);

 FUNC_6(VAR_5, VAR_3);
 if (!VAR_5->fl_u.nfs_fl.owner) {

  FUNC_7(VAR_7);
  return -VAR_1;
 }

 FUNC_8(VAR_7, VAR_5);
 VAR_7->a_callback_data = VAR_6;

 if (FUNC_1(VAR_4) || FUNC_2(VAR_4)) {
  if (VAR_5->fl_type != VAR_2) {
   VAR_7->a_args.block = FUNC_2(VAR_4) ? 1 : 0;
   VAR_8 = FUNC_5(VAR_7, VAR_5);
  } else
   VAR_8 = FUNC_10(VAR_7, VAR_5);
 } else if (FUNC_0(VAR_4))
  VAR_8 = FUNC_9(VAR_7, VAR_5);
 else
  VAR_8 = -VAR_0;
 VAR_5->fl_ops->fl_release_private(VAR_5);
 VAR_5->fl_ops = ((void*)0);

 FUNC_3("lockd: clnt proc returns %d\n", VAR_8);
 return VAR_8;
}
