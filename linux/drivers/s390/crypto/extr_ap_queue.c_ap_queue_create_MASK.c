
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * type; int release; } ;
struct TYPE_4__ {int device_type; TYPE_1__ device; } ;
struct ap_queue {int timeout; int requestq; int pendingq; int list; int lock; int interrupt; int state; int qid; TYPE_2__ ap_dev; } ;
typedef int ap_qid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ap_queue* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

struct ap_queue *FUNC_4(ap_qid_t VAR_6, int VAR_7)
{
 struct ap_queue *VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return ((void*)0);
 VAR_8->ap_dev.device.release = VAR_3;
 VAR_8->ap_dev.device.type = &VAR_4;
 VAR_8->ap_dev.device_type = VAR_7;
 VAR_8->qid = VAR_6;
 VAR_8->state = VAR_1;
 VAR_8->interrupt = VAR_0;
 FUNC_2(&VAR_8->lock);
 FUNC_0(&VAR_8->list);
 FUNC_0(&VAR_8->pendingq);
 FUNC_0(&VAR_8->requestq);
 FUNC_3(&VAR_8->timeout, VAR_5, 0);

 return VAR_8;
}
