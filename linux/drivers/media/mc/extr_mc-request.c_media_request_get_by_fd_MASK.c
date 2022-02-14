
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct media_request {struct media_device* mdev; } ;
struct media_device {int dev; TYPE_2__* ops; } ;
struct fd {TYPE_1__* file; } ;
struct TYPE_4__ {int req_queue; int req_validate; } ;
struct TYPE_3__ {struct media_request* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct media_request* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct fd FUNC_2 (int) ;
 int FUNC_3 (struct fd) ;
 int FUNC_4 (struct media_request*) ;
 int VAR_2 ;

struct media_request *
FUNC_5(struct media_device *VAR_3, int VAR_4)
{
 struct fd VAR_5;
 struct media_request *VAR_6;

 if (!VAR_3 || !VAR_3->ops ||
     !VAR_3->ops->req_validate || !VAR_3->ops->req_queue)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5.file)
  goto err_no_req_fd;

 if (VAR_5.file->f_op != &VAR_2)
  goto err_fput;
 VAR_6 = VAR_5.file->private_data;
 if (VAR_6->mdev != VAR_3)
  goto err_fput;
 FUNC_4(VAR_6);
 FUNC_3(VAR_5);

 return VAR_6;

err_fput:
 FUNC_3(VAR_5);

err_no_req_fd:
 FUNC_1(VAR_3->dev, "cannot find request_fd %d\n", VAR_4);
 return FUNC_0(-VAR_1);
}
