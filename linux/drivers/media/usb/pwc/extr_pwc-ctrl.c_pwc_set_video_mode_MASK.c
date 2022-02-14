
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int height; int width; scalar_t__ frame_trailer_size; scalar_t__ frame_header_size; scalar_t__ frame_size; scalar_t__ frame_total_size; int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ,int,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct pwc_device*,int,int) ;
 int FUNC_7 (struct pwc_device*,int,int,int,int*,int) ;
 int FUNC_8 (struct pwc_device*,int,int,int,int*,int) ;
 int FUNC_9 (struct pwc_device*,int,int,int,int*,int) ;
 int * VAR_0 ;

int FUNC_10(struct pwc_device *VAR_1, int VAR_2, int VAR_3,
 int VAR_4, int VAR_5, int *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_2("set_video_mode(%dx%d @ %d, pixfmt %08x).\n",
         VAR_2, VAR_3, VAR_5, VAR_4);
 VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3);
 FUNC_5("decode_size = %d.\n", VAR_9);

 if (FUNC_0(VAR_1->type)) {
  VAR_8 = FUNC_8(VAR_1, VAR_9, VAR_4, VAR_5,
       VAR_6, VAR_7);
 } else if (FUNC_1(VAR_1->type)) {
  VAR_8 = FUNC_7(VAR_1, VAR_9, VAR_4, VAR_5,
        VAR_6, VAR_7);
 } else {
  VAR_8 = FUNC_9(VAR_1, VAR_9, VAR_4, VAR_5,
        VAR_6, VAR_7);
 }
 if (VAR_8 < 0) {
  FUNC_4("Failed to set video mode %s@%d fps; return code = %d\n", VAR_0[VAR_9], VAR_5, VAR_8);
  return VAR_8;
 }
 VAR_1->frame_total_size = VAR_1->frame_size + VAR_1->frame_header_size + VAR_1->frame_trailer_size;
 FUNC_3("Set resolution to %dx%d\n", VAR_1->width, VAR_1->height);
 return 0;
}
