
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_queue {int online; int reply; int load; struct ap_queue* queue; int ops; } ;
struct ap_queue {struct zcrypt_queue* private; int request_timeout; } ;
struct ap_device {int device_type; int device; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ap_queue*,int *) ;
 int FUNC_1 (int *,int ) ;
 struct ap_queue* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct zcrypt_queue* FUNC_4 (int ) ;
 int FUNC_5 (struct zcrypt_queue*) ;
 int FUNC_6 (struct zcrypt_queue*) ;

__attribute__((used)) static int FUNC_7(struct ap_device *VAR_7)
{
 struct ap_queue *VAR_8 = FUNC_2(&VAR_7->device);
 struct zcrypt_queue *VAR_9 = ((void*)0);
 int VAR_10;

 switch (VAR_7->device_type) {
 case 129:
  VAR_9 = FUNC_4(VAR_1);
  if (!VAR_9)
   return -VAR_4;
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_2);
  if (!VAR_9)
   return -VAR_4;
  break;
 }
 if (!VAR_9)
  return -VAR_3;
 VAR_9->ops = FUNC_3(VAR_5, VAR_6);
 VAR_9->queue = VAR_8;
 VAR_9->online = 1;
 FUNC_1(&VAR_9->load, 0);
 FUNC_0(VAR_8, &VAR_9->reply);
 VAR_8->request_timeout = VAR_0,
 VAR_8->private = VAR_9;
 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10) {
  VAR_8->private = ((void*)0);
  FUNC_5(VAR_9);
 }

 return VAR_10;
}
