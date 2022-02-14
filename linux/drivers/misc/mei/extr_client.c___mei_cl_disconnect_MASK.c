
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; } ;
struct mei_cl_cb {int dummy; } ;
struct mei_cl {scalar_t__ state; int status; int wait; struct mei_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 struct mei_cl_cb* FUNC_2 (struct mei_cl*,int ,int ,int *) ;
 int FUNC_3 (struct mei_cl*,struct mei_cl_cb*) ;
 int FUNC_4 (struct mei_cl*) ;
 scalar_t__ FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct mei_cl_cb*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,int ) ;

__attribute__((used)) static int FUNC_11(struct mei_cl *VAR_7)
{
 struct mei_device *VAR_8;
 struct mei_cl_cb *VAR_9;
 int VAR_10;

 VAR_8 = VAR_7->dev;

 VAR_7->state = VAR_4;

 VAR_9 = FUNC_2(VAR_7, 0, VAR_6, ((void*)0));
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto out;
 }

 if (FUNC_5(VAR_8)) {
  VAR_10 = FUNC_3(VAR_7, VAR_9);
  if (VAR_10) {
   FUNC_1(VAR_8, VAR_7, "failed to disconnect.\n");
   goto out;
  }
 }

 FUNC_9(&VAR_8->device_lock);
 FUNC_10(VAR_7->wait,
      VAR_7->state == VAR_5 ||
      VAR_7->state == VAR_3,
      FUNC_7(VAR_2));
 FUNC_8(&VAR_8->device_lock);

 VAR_10 = VAR_7->status;
 if (VAR_7->state != VAR_5 &&
     VAR_7->state != VAR_3) {
  FUNC_0(VAR_8, VAR_7, "timeout on disconnect from FW client.\n");
  VAR_10 = -VAR_1;
 }

out:

 FUNC_4(VAR_7);
 if (!VAR_10)
  FUNC_0(VAR_8, VAR_7, "successfully disconnected from FW client.\n");

 FUNC_6(VAR_9);
 return VAR_10;
}
