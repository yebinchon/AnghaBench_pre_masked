
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hva_h264_stereo_video_sei {int field_views_flag; int top_field_is_left_view_flag; int current_frame_is_left_view_flag; int next_frame_is_second_view_flag; int left_view_self_contained_flag; int right_view_self_contained_flag; } ;
struct hva_ctx {int name; } ;
struct device {int dummy; } ;
typedef int start ;
typedef int info ;
typedef enum hva_h264_sei_payload_type { ____Placeholder_hva_h264_sei_payload_type } hva_h264_sei_payload_type ;


 int VAR_0 ;
 int VAR_1 ;




 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (struct hva_h264_stereo_video_sei*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hva_ctx *VAR_2,
     enum hva_h264_sei_payload_type VAR_3,
     u8 *VAR_4, u32 *VAR_5)
{
 struct device *VAR_6 = FUNC_0(VAR_2);
 const u8 VAR_7[] = { 0x00, 0x00, 0x00, 0x01 };
 struct hva_h264_stereo_video_sei VAR_8;
 u8 VAR_9 = 7;
 u8 VAR_10 = 0;


 FUNC_2(VAR_4 + *VAR_5, VAR_7, sizeof(VAR_7));
 *VAR_5 += sizeof(VAR_7);


 VAR_4[*VAR_5] = VAR_1;
 *VAR_5 += 1;


 VAR_4[*VAR_5] = VAR_3;
 *VAR_5 += 1;

 switch (VAR_3) {
 case 128:
  FUNC_3(&VAR_8, 0, sizeof(VAR_8));


  VAR_8.field_views_flag = 1;
  VAR_8.top_field_is_left_view_flag = 1;


  VAR_4[*VAR_5] = 1;
  *VAR_5 += 1;


  VAR_10 = VAR_8.field_views_flag << VAR_9--;

  if (VAR_8.field_views_flag) {
   VAR_10 |= VAR_8.top_field_is_left_view_flag <<
          VAR_9--;
  } else {
   VAR_10 |= VAR_8.current_frame_is_left_view_flag <<
          VAR_9--;
   VAR_10 |= VAR_8.next_frame_is_second_view_flag <<
          VAR_9--;
  }
  VAR_10 |= VAR_8.left_view_self_contained_flag << VAR_9--;
  VAR_10 |= VAR_8.right_view_self_contained_flag << VAR_9--;

  VAR_4[*VAR_5] = VAR_10;
  *VAR_5 += 1;

  VAR_4[*VAR_5] = 0x80;
  *VAR_5 += 1;

  return 0;
 case 131:
 case 129:
 case 130:
 default:
  FUNC_1(VAR_6, "%s   sei nal type not supported %d\n",
   VAR_2->name, VAR_3);
  return -VAR_0;
 }
}
