
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct delta_streaminfo {int dpb; int field; int height; int width; int streamformat; } ;
struct delta_mjpeg_ctx {TYPE_1__* header; } ;
struct delta_ctx {int dummy; } ;
struct TYPE_2__ {int frame_height; int frame_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct delta_mjpeg_ctx* FUNC_0 (struct delta_ctx*) ;

__attribute__((used)) static int FUNC_1(struct delta_ctx *VAR_3,
          struct delta_streaminfo *VAR_4)
{
 struct delta_mjpeg_ctx *VAR_5 = FUNC_0(VAR_3);

 if (!VAR_5->header)
  goto nodata;

 VAR_4->streamformat = VAR_2;
 VAR_4->width = VAR_5->header->frame_width;
 VAR_4->height = VAR_5->header->frame_height;


 VAR_4->field = VAR_1;

 VAR_4->dpb = 1;

 return 0;

nodata:
 return -VAR_0;
}
