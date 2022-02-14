
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct fastrpc_user* private_data; } ;
struct fastrpc_user {int user; int mutex; int sctx; struct fastrpc_channel_ctx* cctx; int tgid; int maps; int pending; int lock; } ;
struct fastrpc_channel_ctx {int lock; int users; TYPE_1__* rpdev; } ;
struct TYPE_4__ {int tgid; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct fastrpc_channel_ctx*) ;
 int FUNC_3 (struct fastrpc_channel_ctx*) ;
 int FUNC_4 (struct fastrpc_user*) ;
 struct fastrpc_user* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 struct fastrpc_channel_ctx* FUNC_7 (struct fastrpc_user*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, struct file *VAR_5)
{
 struct fastrpc_channel_ctx *VAR_6 = FUNC_7(VAR_5->private_data);
 struct fastrpc_user *VAR_7 = ((void*)0);
 unsigned long VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 FUNC_2(VAR_6);

 VAR_5->private_data = VAR_7;
 FUNC_10(&VAR_7->lock);
 FUNC_9(&VAR_7->mutex);
 FUNC_0(&VAR_7->pending);
 FUNC_0(&VAR_7->maps);
 FUNC_0(&VAR_7->user);
 VAR_7->tgid = VAR_3->tgid;
 VAR_7->cctx = VAR_6;

 VAR_7->sctx = FUNC_3(VAR_6);
 if (!VAR_7->sctx) {
  FUNC_1(&VAR_6->rpdev->dev, "No session available\n");
  FUNC_8(&VAR_7->mutex);
  FUNC_4(VAR_7);

  return -VAR_0;
 }

 FUNC_11(&VAR_6->lock, VAR_8);
 FUNC_6(&VAR_7->user, &VAR_6->users);
 FUNC_12(&VAR_6->lock, VAR_8);

 return 0;
}
