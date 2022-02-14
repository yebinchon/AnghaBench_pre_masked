
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct v4l2_fmtdesc {int type; size_t index; int pixelformat; scalar_t__* description; int flags; } ;
struct uvc_streaming {int type; size_t nformats; struct uvc_format* format; } ;
struct uvc_format {int flags; int fcc; int name; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_fmtdesc*,int ,int) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct uvc_streaming *VAR_3,
         struct v4l2_fmtdesc *VAR_4)
{
 struct uvc_format *VAR_5;
 enum v4l2_buf_type VAR_6 = VAR_4->type;
 u32 VAR_7 = VAR_4->index;

 if (VAR_4->type != VAR_3->type || VAR_4->index >= VAR_3->nformats)
  return -VAR_0;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->index = VAR_7;
 VAR_4->type = VAR_6;

 VAR_5 = &VAR_3->format[VAR_4->index];
 VAR_4->flags = 0;
 if (VAR_5->flags & VAR_1)
  VAR_4->flags |= VAR_2;
 FUNC_1(VAR_4->description, VAR_5->name, sizeof(VAR_4->description));
 VAR_4->description[sizeof(VAR_4->description) - 1] = 0;
 VAR_4->pixelformat = VAR_5->fcc;
 return 0;
}
