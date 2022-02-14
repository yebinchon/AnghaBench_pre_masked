
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * type; int release; } ;
struct TYPE_4__ {int device_type; TYPE_1__ device; } ;
struct ap_card {int raw_hwtype; int queue_depth; unsigned int functions; int id; TYPE_2__ ap_dev; int queues; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ap_card* FUNC_1 (int,int ) ;

struct ap_card *FUNC_2(int VAR_3, int VAR_4, int VAR_5,
          int VAR_6, unsigned int VAR_7)
{
 struct ap_card *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);
 FUNC_0(&VAR_8->list);
 FUNC_0(&VAR_8->queues);
 VAR_8->ap_dev.device.release = VAR_1;
 VAR_8->ap_dev.device.type = &VAR_2;
 VAR_8->ap_dev.device_type = VAR_6;
 VAR_8->raw_hwtype = VAR_5;
 VAR_8->queue_depth = VAR_4;
 VAR_8->functions = VAR_7;
 VAR_8->id = VAR_3;
 return VAR_8;
}
