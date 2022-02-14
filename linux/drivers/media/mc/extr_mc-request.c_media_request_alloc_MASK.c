
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_request {int debug_str; scalar_t__ access_count; scalar_t__ updating_count; int poll_wait; int lock; int objects; int kref; scalar_t__ num_incomplete_objects; int state; struct media_device* mdev; } ;
struct media_device {int dev; int request_id; TYPE_1__* ops; } ;
struct file {struct media_request* private_data; } ;
struct TYPE_2__ {struct media_request* (* req_alloc ) (struct media_device*) ;int req_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (int) ;
 struct file* FUNC_4 (char*,int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int,struct file*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct media_request* FUNC_12 (int,int ) ;
 int FUNC_13 (int) ;
 int VAR_4 ;
 int FUNC_14 (int ,int,char*,int,int) ;
 int FUNC_15 (int *) ;
 struct media_request* FUNC_16 (struct media_device*) ;

int FUNC_17(struct media_device *VAR_5, int *VAR_6)
{
 struct media_request *VAR_7;
 struct file *VAR_8;
 int VAR_9;
 int VAR_10;


 if (FUNC_3(!VAR_5->ops->req_alloc ^ !VAR_5->ops->req_free))
  return -VAR_0;

 VAR_9 = FUNC_9(VAR_3);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_4("request", &VAR_4, ((void*)0), VAR_3);
 if (FUNC_1(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8);
  goto err_put_fd;
 }

 if (VAR_5->ops->req_alloc)
  VAR_7 = VAR_5->ops->req_alloc(VAR_5);
 else
  VAR_7 = FUNC_12(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto err_fput;
 }

 VAR_8->private_data = VAR_7;
 VAR_7->mdev = VAR_5;
 VAR_7->state = VAR_2;
 VAR_7->num_incomplete_objects = 0;
 FUNC_11(&VAR_7->kref);
 FUNC_0(&VAR_7->objects);
 FUNC_15(&VAR_7->lock);
 FUNC_10(&VAR_7->poll_wait);
 VAR_7->updating_count = 0;
 VAR_7->access_count = 0;

 *VAR_6 = VAR_9;

 FUNC_14(VAR_7->debug_str, sizeof(VAR_7->debug_str), "%u:%d",
   FUNC_5(&VAR_5->request_id), VAR_9);
 FUNC_6(VAR_5->dev, "request: allocated %s\n", VAR_7->debug_str);

 FUNC_7(VAR_9, VAR_8);

 return 0;

err_fput:
 FUNC_8(VAR_8);

err_put_fd:
 FUNC_13(VAR_9);

 return VAR_10;
}
