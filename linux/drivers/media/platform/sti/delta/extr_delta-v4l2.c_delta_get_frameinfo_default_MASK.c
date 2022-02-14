
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_streaminfo {int flags; int field; int pixelaspect; int crop; int height; int width; } ;
struct delta_frameinfo {int field; int pixelaspect; int flags; int crop; int pixelformat; void* aligned_height; void* aligned_width; int size; int height; int width; } ;
struct delta_ctx {struct delta_streaminfo streaminfo; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (struct delta_frameinfo*,int ,int) ;

int FUNC_3(struct delta_ctx *VAR_7,
    struct delta_frameinfo *VAR_8)
{
 struct delta_streaminfo *VAR_9 = &VAR_7->streaminfo;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->pixelformat = VAR_6;
 VAR_8->width = VAR_9->width;
 VAR_8->height = VAR_9->height;
 VAR_8->aligned_width = FUNC_0(VAR_9->width,
      VAR_5);
 VAR_8->aligned_height = FUNC_0(VAR_9->height,
       VAR_2);
 VAR_8->size = FUNC_1(VAR_8->aligned_width,
         VAR_8->aligned_height,
         VAR_8->pixelformat);
 if (VAR_9->flags & VAR_3) {
  VAR_8->flags |= VAR_0;
  VAR_8->crop = VAR_9->crop;
 }
 if (VAR_9->flags & VAR_4) {
  VAR_8->flags |= VAR_1;
  VAR_8->pixelaspect = VAR_9->pixelaspect;
 }
 VAR_8->field = VAR_9->field;

 return 0;
}
