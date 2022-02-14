
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_queue {TYPE_2__* queue; int load; int request_count; } ;
struct zcrypt_card {int load; } ;
struct module {int dummy; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ ap_dev; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zcrypt_queue*) ;

__attribute__((used)) static inline void FUNC_4(struct zcrypt_card *VAR_0,
         struct zcrypt_queue *VAR_1,
         struct module *VAR_2,
         unsigned int VAR_3)
{
 VAR_1->request_count--;
 FUNC_0(VAR_3, &VAR_0->load);
 FUNC_0(VAR_3, &VAR_1->load);
 FUNC_2(&VAR_1->queue->ap_dev.device);
 FUNC_3(VAR_1);
 FUNC_1(VAR_2);
}
