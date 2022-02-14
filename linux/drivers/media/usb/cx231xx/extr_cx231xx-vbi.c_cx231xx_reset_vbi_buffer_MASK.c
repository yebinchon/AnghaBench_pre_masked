
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cx231xx_dmaqueue {int current_field; int bytes_left_in_line; scalar_t__ lines_completed; scalar_t__ pos; } ;
struct cx231xx_buffer {int dummy; } ;
struct TYPE_3__ {struct cx231xx_buffer* buf; } ;
struct TYPE_4__ {TYPE_1__ bulk_ctl; } ;
struct cx231xx {int width; TYPE_2__ vbi_mode; } ;


 int FUNC_0 (struct cx231xx_dmaqueue*,struct cx231xx_buffer**) ;

void FUNC_1(struct cx231xx *VAR_0,
         struct cx231xx_dmaqueue *VAR_1)
{
 struct cx231xx_buffer *VAR_2;

 VAR_2 = VAR_0->vbi_mode.bulk_ctl.buf;

 if (VAR_2 == ((void*)0)) {

  FUNC_0(VAR_1, &VAR_2);

  VAR_1->pos = 0;
  VAR_1->current_field = -1;
 }

 VAR_1->bytes_left_in_line = VAR_0->width << 1;
 VAR_1->lines_completed = 0;
}
