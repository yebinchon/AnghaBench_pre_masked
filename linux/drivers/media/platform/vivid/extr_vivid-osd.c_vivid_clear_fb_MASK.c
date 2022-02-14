
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ green; } ;
struct vivid_dev {unsigned int display_height; unsigned int display_width; int display_byte_stride; TYPE_2__ fb_defined; void* video_vbase; } ;


 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_0(struct vivid_dev *VAR_2)
{
 void *VAR_3 = VAR_2->video_vbase;
 const u16 *VAR_4 = VAR_0;
 unsigned VAR_5, VAR_6;

 if (VAR_2->fb_defined.green.length == 6)
  VAR_4 = VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_2->display_height; VAR_6++) {
  u16 *VAR_7 = VAR_3;

  for (VAR_5 = 0; VAR_5 < VAR_2->display_width; VAR_5++)
   VAR_7[VAR_5] = VAR_4[(VAR_6 / 16 + VAR_5 / 16) % 16];
  VAR_3 += VAR_2->display_byte_stride;
 }
}
