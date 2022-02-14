
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zcrypt_queue {TYPE_4__* queue; int request_count; int load; } ;
struct zcrypt_card {int load; } ;
struct module {int dummy; } ;
struct TYPE_6__ {TYPE_3__* drv; int device; } ;
struct TYPE_8__ {TYPE_2__ ap_dev; } ;
struct TYPE_5__ {struct module* owner; } ;
struct TYPE_7__ {TYPE_1__ driver; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (struct zcrypt_queue*) ;

__attribute__((used)) static inline struct zcrypt_queue *FUNC_4(struct zcrypt_card *VAR_0,
           struct zcrypt_queue *VAR_1,
           struct module **VAR_2,
           unsigned int VAR_3)
{
 if (!VAR_1 || !FUNC_2(VAR_1->queue->ap_dev.drv->driver.owner))
  return ((void*)0);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->queue->ap_dev.device);
 FUNC_0(VAR_3, &VAR_0->load);
 FUNC_0(VAR_3, &VAR_1->load);
 VAR_1->request_count++;
 *VAR_2 = VAR_1->queue->ap_dev.drv->driver.owner;
 return VAR_1;
}
