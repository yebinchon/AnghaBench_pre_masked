
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cx231xx_dmaqueue {int current_field; scalar_t__ lines_completed; scalar_t__ lines_per_field; int field1_done; int bytes_left_in_line; scalar_t__ pos; } ;
struct cx231xx_buffer {int dummy; } ;
struct TYPE_5__ {struct cx231xx_buffer* buf; } ;
struct TYPE_4__ {struct cx231xx_buffer* buf; } ;
struct TYPE_6__ {TYPE_2__ bulk_ctl; TYPE_1__ isoc_ctl; } ;
struct cx231xx {int width; TYPE_3__ video_mode; scalar_t__ USE_ISO; } ;


 int FUNC_0 (struct cx231xx_dmaqueue*,struct cx231xx_buffer**) ;

void FUNC_1(struct cx231xx *VAR_0,
    struct cx231xx_dmaqueue *VAR_1)
{
 struct cx231xx_buffer *VAR_2;


 if (VAR_1->current_field == 1) {
  if (VAR_1->lines_completed >= VAR_1->lines_per_field)
   VAR_1->field1_done = 1;
  else
   VAR_1->field1_done = 0;
 }

 if (VAR_0->USE_ISO)
  VAR_2 = VAR_0->video_mode.isoc_ctl.buf;
 else
  VAR_2 = VAR_0->video_mode.bulk_ctl.buf;

 if (VAR_2 == ((void*)0)) {

  FUNC_0(VAR_1, &VAR_2);

  VAR_1->pos = 0;
  VAR_1->field1_done = 0;
  VAR_1->current_field = -1;
 }


 VAR_1->bytes_left_in_line = VAR_0->width << 1;
 VAR_1->lines_completed = 0;
}
