
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fs_context {int purpose; unsigned int sb_flags; unsigned int sb_flags_mask; int need_free; TYPE_3__* fs_type; int root; void* user_ns; TYPE_4__* cred; int uapi_mutex; int net_ns; } ;
struct file_system_type {int dummy; } ;
struct dentry {TYPE_2__* d_sb; } ;
typedef enum fs_context_purpose { ____Placeholder_fs_context_purpose } fs_context_purpose ;
struct TYPE_10__ {TYPE_1__* nsproxy; } ;
struct TYPE_9__ {int user_ns; } ;
struct TYPE_8__ {int (* init_fs_context ) (struct fs_context*) ;} ;
struct TYPE_7__ {int s_user_ns; int s_active; } ;
struct TYPE_6__ {int net_ns; } ;


 int VAR_0 ;
 struct fs_context* FUNC_0 (int) ;



 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_5__* VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 TYPE_4__* FUNC_3 () ;
 TYPE_3__* FUNC_4 (struct file_system_type*) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 struct fs_context* FUNC_7 (int,int ) ;
 int FUNC_8 (struct fs_context*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct fs_context*) ;

__attribute__((used)) static struct fs_context *FUNC_11(struct file_system_type *VAR_3,
          struct dentry *VAR_4,
          unsigned int VAR_5,
          unsigned int VAR_6,
          enum fs_context_purpose VAR_7)
{
 int (*VAR_8)(struct fs_context *);
 struct fs_context *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_9 = FUNC_7(sizeof(struct fs_context), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->purpose = VAR_7;
 VAR_9->sb_flags = VAR_5;
 VAR_9->sb_flags_mask = VAR_6;
 VAR_9->fs_type = FUNC_4(VAR_3);
 VAR_9->cred = FUNC_3();
 VAR_9->net_ns = FUNC_5(VAR_2->nsproxy->net_ns);

 FUNC_9(&VAR_9->uapi_mutex);

 switch (VAR_7) {
 case 130:
  VAR_9->user_ns = FUNC_6(VAR_9->cred->user_ns);
  break;
 case 128:
  VAR_9->user_ns = FUNC_6(VAR_4->d_sb->s_user_ns);
  break;
 case 129:
  FUNC_1(&VAR_4->d_sb->s_active);
  VAR_9->user_ns = FUNC_6(VAR_4->d_sb->s_user_ns);
  VAR_9->root = FUNC_2(VAR_4);
  break;
 }


 VAR_8 = VAR_9->fs_type->init_fs_context;
 if (!VAR_8)
  VAR_8 = FUNC_8;

 VAR_10 = VAR_8(VAR_9);
 if (VAR_10 < 0)
  goto err_fc;
 VAR_9->need_free = 1;
 return VAR_9;

err_fc:
 FUNC_10(VAR_9);
 return FUNC_0(VAR_10);
}
