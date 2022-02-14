
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_queue {int online; int reply; void* ops; int load; struct ap_queue* queue; } ;
struct ap_queue {struct zcrypt_queue* private; int request_timeout; } ;
struct ap_device {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ap_queue*,int *) ;
 int FUNC_1 (int *,int ) ;
 struct ap_queue* FUNC_2 (int *) ;
 int FUNC_3 (struct ap_queue*) ;
 void* FUNC_4 (int ,int ) ;
 struct zcrypt_queue* FUNC_5 (int ) ;
 int FUNC_6 (struct zcrypt_queue*) ;
 int FUNC_7 (struct zcrypt_queue*) ;

__attribute__((used)) static int FUNC_8(struct ap_device *VAR_6)
{
 struct ap_queue *VAR_7 = FUNC_2(&VAR_6->device);
 struct zcrypt_queue *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_1);
 if (!VAR_8)
  return -VAR_2;
 VAR_8->queue = VAR_7;
 VAR_8->online = 1;
 FUNC_1(&VAR_8->load, 0);
 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9 < 0) {
  FUNC_6(VAR_8);
  return VAR_9;
 }
 if (VAR_9)
  VAR_8->ops = FUNC_4(VAR_3,
      VAR_4);
 else
  VAR_8->ops = FUNC_4(VAR_3,
      VAR_5);
 FUNC_0(VAR_7, &VAR_8->reply);
 VAR_7->request_timeout = VAR_0;
 VAR_7->private = VAR_8;
 VAR_9 = FUNC_7(VAR_8);
 if (VAR_9) {
  VAR_7->private = ((void*)0);
  FUNC_6(VAR_8);
 }
 return VAR_9;
}
