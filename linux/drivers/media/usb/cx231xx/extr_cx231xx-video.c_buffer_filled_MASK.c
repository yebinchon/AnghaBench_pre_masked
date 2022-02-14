
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cx231xx_dmaqueue {int dummy; } ;
struct TYPE_8__ {int done; int queue; int ts; int field_count; int state; int i; } ;
struct cx231xx_buffer {TYPE_4__ vb; } ;
struct TYPE_6__ {int * buf; } ;
struct TYPE_5__ {int * buf; } ;
struct TYPE_7__ {TYPE_2__ bulk_ctl; TYPE_1__ isoc_ctl; } ;
struct cx231xx {TYPE_3__ video_mode; scalar_t__ USE_ISO; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct cx231xx_buffer*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct cx231xx *VAR_1,
     struct cx231xx_dmaqueue *VAR_2,
     struct cx231xx_buffer *VAR_3)
{

 FUNC_0("[%p/%d] wakeup\n", VAR_3, VAR_3->vb.i);
 VAR_3->vb.state = VAR_0;
 VAR_3->vb.field_count++;
 VAR_3->vb.ts = FUNC_1();

 if (VAR_1->USE_ISO)
  VAR_1->video_mode.isoc_ctl.buf = ((void*)0);
 else
  VAR_1->video_mode.bulk_ctl.buf = ((void*)0);

 FUNC_2(&VAR_3->vb.queue);
 FUNC_3(&VAR_3->vb.done);
}
