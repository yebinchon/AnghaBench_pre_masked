
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; void* height; void* width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct ivtv_open_id {scalar_t__ type; } ;
struct file {int dummy; } ;
typedef void* s32 ;


 scalar_t__ VAR_0 ;
 struct ivtv_open_id* FUNC_0 (void*) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 void* FUNC_2 (void*,int) ;
 void* FUNC_3 (void*,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct ivtv_open_id *VAR_4 = FUNC_0(VAR_2);
 s32 VAR_5 = VAR_3->fmt.pix.width;
 s32 VAR_6 = VAR_3->fmt.pix.height;
 int VAR_7 = VAR_3->fmt.pix.field;
 int VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_3(VAR_5, 720);
 VAR_5 = FUNC_2(VAR_5, 2);
 VAR_6 = FUNC_3(VAR_6, 576);
 VAR_6 = FUNC_2(VAR_6, 2);
 if (VAR_4->type == VAR_0)
  VAR_3->fmt.pix.field = VAR_7;
 VAR_3->fmt.pix.width = VAR_5;
 VAR_3->fmt.pix.height = VAR_6;
 return VAR_8;
}
