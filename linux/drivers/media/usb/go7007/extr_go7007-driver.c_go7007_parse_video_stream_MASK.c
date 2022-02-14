
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {TYPE_1__* planes; } ;
struct TYPE_6__ {TYPE_2__ vb2_buf; } ;
struct go7007_buffer {int frame_offset; int modet_active; TYPE_3__ vb; } ;
struct go7007 {int format; int state; int seen_frame; int parse_length; int modet_word; int active_map; int modet_enable; struct go7007_buffer* active_buf; int v4l2_dev; } ;
struct TYPE_4__ {int bytesused; } ;


 int VAR_0 ;
 int const VAR_1 ;



 struct go7007_buffer* FUNC_0 (struct go7007*,struct go7007_buffer*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct go7007_buffer*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct go7007*) ;

void FUNC_5(struct go7007 *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct go7007_buffer *VAR_5 = VAR_2->active_buf;
 int VAR_6, VAR_7 = -1, VAR_8 = -1, VAR_9 = -1;

 switch (VAR_2->format) {
 case 128:
  VAR_7 = 0xB0;
  VAR_8 = 0xB3;
  VAR_9 = 0xB6;
  break;
 case 130:
 case 129:
  VAR_7 = 0xB3;
  VAR_8 = 0xB8;
  VAR_9 = 0x00;
  break;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  if (VAR_5 && VAR_5->vb.vb2_buf.planes[0].bytesused >=
    VAR_0 - 3) {
   FUNC_3(&VAR_2->v4l2_dev, "dropping oversized frame\n");
   VAR_5->vb.vb2_buf.planes[0].bytesused = 0;
   VAR_5->frame_offset = 0;
   VAR_5->modet_active = 0;
   VAR_5 = VAR_2->active_buf = ((void*)0);
  }

  switch (VAR_2->state) {
  case 136:
   switch (VAR_3[VAR_6]) {
   case 0x00:
    VAR_2->state = 139;
    break;
   case 0xFF:
    VAR_2->state = 135;
    break;
   default:
    FUNC_2(VAR_5, VAR_3[VAR_6]);
    break;
   }
   break;
  case 139:
   switch (VAR_3[VAR_6]) {
   case 0x00:
    VAR_2->state = 138;
    break;
   case 0xFF:
    FUNC_2(VAR_5, 0x00);
    VAR_2->state = 135;
    break;
   default:
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, VAR_3[VAR_6]);
    VAR_2->state = 136;
    break;
   }
   break;
  case 138:
   switch (VAR_3[VAR_6]) {
   case 0x00:
    FUNC_2(VAR_5, 0x00);

    break;
   case 0x01:
    VAR_2->state = 137;
    break;
   case 0xFF:
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x00);
    VAR_2->state = 135;
    break;
   default:
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, VAR_3[VAR_6]);
    VAR_2->state = 136;
    break;
   }
   break;
  case 137:
   if (VAR_3[VAR_6] == 0xF8 && VAR_2->modet_enable == 0) {

    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x01);
    FUNC_2(VAR_5, 0xF8);
    VAR_2->state = 136;
    break;
   }


   if ((VAR_2->format == 130 ||
        VAR_2->format == 129 ||
        VAR_2->format == 128) &&
       (VAR_3[VAR_6] == VAR_7 ||
        VAR_3[VAR_6] == VAR_8 ||
        VAR_3[VAR_6] == VAR_9)) {
    if (VAR_5 == ((void*)0) || VAR_2->seen_frame)
     VAR_5 = FUNC_0(VAR_2, VAR_5);
    VAR_2->seen_frame = VAR_3[VAR_6] == VAR_9;
    if (VAR_5 && VAR_2->seen_frame)
     VAR_5->frame_offset =
     VAR_5->vb.vb2_buf.planes[0].bytesused;
   }


   switch (VAR_3[VAR_6]) {
   case 0xF5:
    VAR_2->parse_length = 12;
    VAR_2->state = 133;
    break;
   case 0xF6:
    VAR_2->state = 132;
    break;
   case 0xF8:
    VAR_2->parse_length = 0;
    FUNC_1(VAR_2->active_map, 0,
      sizeof(VAR_2->active_map));
    VAR_2->state = 134;
    break;
   case 0xFF:
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x01);
    VAR_2->state = 135;
    break;
   default:
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x00);
    FUNC_2(VAR_5, 0x01);
    FUNC_2(VAR_5, VAR_3[VAR_6]);
    VAR_2->state = 136;
    break;
   }
   break;
  case 135:
   switch (VAR_3[VAR_6]) {
   case 0x00:
    FUNC_2(VAR_5, 0xFF);
    VAR_2->state = 139;
    break;
   case 0xFF:
    FUNC_2(VAR_5, 0xFF);

    break;
   case 0xD8:
    if (VAR_2->format == VAR_1)
     VAR_5 = FUNC_0(VAR_2, VAR_5);

   default:
    FUNC_2(VAR_5, 0xFF);
    FUNC_2(VAR_5, VAR_3[VAR_6]);
    VAR_2->state = 136;
    break;
   }
   break;
  case 132:
   VAR_2->parse_length = VAR_3[VAR_6] << 8;
   VAR_2->state = 131;
   break;
  case 131:
   VAR_2->parse_length |= VAR_3[VAR_6];
   if (VAR_2->parse_length > 0)
    VAR_2->state = 133;
   else
    VAR_2->state = 136;
   break;
  case 134:
   if (VAR_2->parse_length < 204) {
    if (VAR_2->parse_length & 1) {
     VAR_2->modet_word |= VAR_3[VAR_6];
     FUNC_4(VAR_2);
    } else
     VAR_2->modet_word = VAR_3[VAR_6] << 8;
   } else if (VAR_2->parse_length == 207 && VAR_5) {
    VAR_5->modet_active = VAR_3[VAR_6];
   }
   if (++VAR_2->parse_length == 208)
    VAR_2->state = 136;
   break;
  case 133:
   if (--VAR_2->parse_length == 0)
    VAR_2->state = 136;
   break;
  }
 }
}
