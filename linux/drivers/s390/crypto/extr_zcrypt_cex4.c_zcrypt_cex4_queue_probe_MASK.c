
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_queue {int online; int reply; int load; struct ap_queue* queue; void* ops; } ;
struct ap_queue {TYPE_1__* card; struct zcrypt_queue* private; int request_timeout; } ;
struct TYPE_4__ {int kobj; } ;
struct ap_device {TYPE_2__ device; } ;
struct TYPE_3__ {int functions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ap_queue*,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_13 ;
 int FUNC_3 (int *,int *) ;
 struct ap_queue* FUNC_4 (TYPE_2__*) ;
 void* FUNC_5 (int ,int ) ;
 struct zcrypt_queue* FUNC_6 (int ) ;
 int FUNC_7 (struct zcrypt_queue*) ;
 int FUNC_8 (struct zcrypt_queue*) ;
 int FUNC_9 (struct zcrypt_queue*) ;

__attribute__((used)) static int FUNC_10(struct ap_device *VAR_14)
{
 struct ap_queue *VAR_15 = FUNC_4(&VAR_14->device);
 struct zcrypt_queue *VAR_16;
 int VAR_17;

 if (FUNC_1(&VAR_15->card->functions, VAR_0)) {
  VAR_16 = FUNC_6(VAR_3);
  if (!VAR_16)
   return -VAR_7;
  VAR_16->ops = FUNC_5(VAR_11,
      VAR_12);
 } else if (FUNC_1(&VAR_15->card->functions, VAR_1)) {
  VAR_16 = FUNC_6(VAR_4);
  if (!VAR_16)
   return -VAR_7;
  VAR_16->ops = FUNC_5(VAR_8,
      VAR_9);
 } else if (FUNC_1(&VAR_15->card->functions, VAR_2)) {
  VAR_16 = FUNC_6(VAR_4);
  if (!VAR_16)
   return -VAR_7;
  VAR_16->ops = FUNC_5(VAR_8,
      VAR_10);
 } else {
  return -VAR_6;
 }

 VAR_16->queue = VAR_15;
 VAR_16->online = 1;
 FUNC_2(&VAR_16->load, 0);
 FUNC_0(VAR_15, &VAR_16->reply);
 VAR_15->request_timeout = VAR_5,
 VAR_15->private = VAR_16;
 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17) {
  VAR_15->private = ((void*)0);
  FUNC_7(VAR_16);
  goto out;
 }

 if (FUNC_1(&VAR_15->card->functions, VAR_1)) {
  VAR_17 = FUNC_3(&VAR_14->device.kobj,
     &VAR_13);
  if (VAR_17)
   FUNC_9(VAR_16);
 }

out:
 return VAR_17;
}
