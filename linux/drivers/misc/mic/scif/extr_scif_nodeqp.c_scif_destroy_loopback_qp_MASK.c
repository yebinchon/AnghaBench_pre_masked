
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scif_dev {int * sdev; TYPE_3__* qpairs; } ;
struct TYPE_4__ {TYPE_3__* rb_base; } ;
struct TYPE_6__ {TYPE_1__ outbound_q; } ;
struct TYPE_5__ {int * loopb_dev; int loopb_wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct scif_dev*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (struct scif_dev*) ;

int FUNC_4(struct scif_dev *VAR_1)
{
 FUNC_3(VAR_1);
 FUNC_0(VAR_0.loopb_wq);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1->qpairs->outbound_q.rb_base);
 FUNC_1(VAR_1->qpairs);
 VAR_1->sdev = ((void*)0);
 VAR_0.loopb_dev = ((void*)0);
 return 0;
}
