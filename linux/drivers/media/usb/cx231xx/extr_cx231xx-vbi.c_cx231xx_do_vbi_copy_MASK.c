
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct cx231xx_dmaqueue {int bytes_left_in_line; int lines_completed; int current_field; int lines_per_field; } ;
struct cx231xx_buffer {int vb; } ;
struct TYPE_3__ {struct cx231xx_buffer* buf; } ;
struct TYPE_4__ {TYPE_1__ bulk_ctl; } ;
struct cx231xx {int width; TYPE_2__ vbi_mode; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int) ;
 int * FUNC_1 (int *) ;

int FUNC_2(struct cx231xx *VAR_1, struct cx231xx_dmaqueue *VAR_2,
   u8 *VAR_3, u32 VAR_4)
{
 u8 *VAR_5 = ((void*)0);
 u32 VAR_6 = 0;
 struct cx231xx_buffer *VAR_7;
 u32 VAR_8 = VAR_1->width << 1;
 void *VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = VAR_1->vbi_mode.bulk_ctl.buf;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_1(&VAR_7->vb);

 if (VAR_2->bytes_left_in_line != VAR_8) {
  VAR_6 =
      VAR_8 - VAR_2->bytes_left_in_line;
 }

 VAR_10 = (VAR_2->lines_completed * VAR_8) +
   VAR_6;

 if (VAR_2->current_field == 2) {

  VAR_10 += (VAR_1->width * 2 * VAR_2->lines_per_field);
 }


 VAR_9 = VAR_5 + VAR_10;

 VAR_11 = VAR_2->bytes_left_in_line > VAR_4 ?
    VAR_4 : VAR_2->bytes_left_in_line;

 FUNC_0(VAR_9, VAR_3, VAR_11);

 return 0;
}
