
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx_dmaqueue {int bytes_left_in_line; int current_field; int lines_completed; } ;
struct TYPE_8__ {int size; } ;
struct cx231xx_buffer {TYPE_4__ vb; } ;
struct TYPE_6__ {struct cx231xx_buffer* buf; } ;
struct TYPE_5__ {struct cx231xx_buffer* buf; } ;
struct TYPE_7__ {TYPE_2__ bulk_ctl; TYPE_1__ isoc_ctl; } ;
struct cx231xx {int width; TYPE_3__ video_mode; scalar_t__ USE_ISO; } ;


 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (TYPE_4__*) ;

int FUNC_2(struct cx231xx *VAR_0, struct cx231xx_dmaqueue *VAR_1,
      u8 *VAR_2, u32 VAR_3)
{
 u8 *VAR_4 = ((void*)0);
 u32 VAR_5 = 0;
 struct cx231xx_buffer *VAR_6;
 u32 VAR_7 = VAR_0->width << 1;
 void *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_0->USE_ISO)
  VAR_6 = VAR_0->video_mode.isoc_ctl.buf;
 else
  VAR_6 = VAR_0->video_mode.bulk_ctl.buf;

 if (VAR_6 == ((void*)0))
  return -1;

 VAR_4 = FUNC_1(&VAR_6->vb);

 VAR_5 = VAR_7 - VAR_1->bytes_left_in_line;


 VAR_9 = (VAR_1->current_field == 1) ? 0 : VAR_7;


 VAR_8 = VAR_4 + VAR_9;


 VAR_8 += (VAR_1->lines_completed * VAR_7 * 2);


 VAR_8 += VAR_5;

 VAR_10 = VAR_1->bytes_left_in_line > VAR_3 ?
    VAR_3 : VAR_1->bytes_left_in_line;

 if ((u8 *)(VAR_8 + VAR_10) > (u8 *)(VAR_4 + VAR_6->vb.size))
  return 0;


 FUNC_0((u16 *) VAR_2, (u16 *) VAR_8, (u16) VAR_10);

 return 0;
}
