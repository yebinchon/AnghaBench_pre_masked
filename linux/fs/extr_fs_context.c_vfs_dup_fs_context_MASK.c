
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fs_context {TYPE_2__* ops; TYPE_1__* log; int cred; int user_ns; int net_ns; int fs_type; int * security; int * source; int * s_fs_info; int * fs_private; int uapi_mutex; } ;
struct TYPE_4__ {int (* dup ) (struct fs_context*,struct fs_context*) ;} ;
struct TYPE_3__ {int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fs_context* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct fs_context* FUNC_5 (struct fs_context*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct fs_context*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fs_context*,struct fs_context*) ;
 int FUNC_10 (struct fs_context*,struct fs_context*) ;

struct fs_context *FUNC_11(struct fs_context *VAR_3)
{
 struct fs_context *VAR_4;
 int VAR_5;

 if (!VAR_3->ops->dup)
  return FUNC_0(-VAR_1);

 VAR_4 = FUNC_5(VAR_3, sizeof(struct fs_context), VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_6(&VAR_4->uapi_mutex);

 VAR_4->fs_private = ((void*)0);
 VAR_4->s_fs_info = ((void*)0);
 VAR_4->source = ((void*)0);
 VAR_4->security = ((void*)0);
 FUNC_2(VAR_4->fs_type);
 FUNC_3(VAR_4->net_ns);
 FUNC_4(VAR_4->user_ns);
 FUNC_1(VAR_4->cred);
 if (VAR_4->log)
  FUNC_8(&VAR_4->log->usage);


 VAR_5 = VAR_4->ops->dup(VAR_4, VAR_3);
 if (VAR_5 < 0)
  goto err_fc;

 VAR_5 = FUNC_9(VAR_4, VAR_3);
 if (VAR_5 < 0)
  goto err_fc;
 return VAR_4;

err_fc:
 FUNC_7(VAR_4);
 return FUNC_0(VAR_5);
}
