
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videobuf_queue {struct cx231xx_fh* priv_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct TYPE_8__ {int state; } ;
struct cx231xx_buffer {TYPE_4__ vb; } ;
struct TYPE_6__ {struct cx231xx_buffer* buf; } ;
struct TYPE_5__ {struct cx231xx_buffer* buf; } ;
struct TYPE_7__ {int slock; TYPE_2__ bulk_ctl; TYPE_1__ isoc_ctl; } ;
struct cx231xx {TYPE_3__ video_mode; scalar_t__ USE_ISO; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(struct videobuf_queue *VAR_1, struct cx231xx_buffer *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_1->priv_data;
 struct cx231xx *VAR_4 = VAR_3->dev;
 unsigned long VAR_5 = 0;

 FUNC_0(FUNC_1());
 FUNC_2(&VAR_4->video_mode.slock, VAR_5);
 if (VAR_4->USE_ISO) {
  if (VAR_4->video_mode.isoc_ctl.buf == VAR_2)
   VAR_4->video_mode.isoc_ctl.buf = ((void*)0);
 } else {
  if (VAR_4->video_mode.bulk_ctl.buf == VAR_2)
   VAR_4->video_mode.bulk_ctl.buf = ((void*)0);
 }
 FUNC_3(&VAR_4->video_mode.slock, VAR_5);

 FUNC_4(&VAR_2->vb);
 VAR_2->vb.state = VAR_0;
}
