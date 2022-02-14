
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fmtdesc {scalar_t__ type; int index; scalar_t__ pixelformat; } ;
struct file {int dummy; } ;
struct camss_video {scalar_t__ type; int nformats; TYPE_1__* formats; } ;
struct TYPE_2__ {scalar_t__ pixelformat; } ;


 int VAR_0 ;
 struct camss_video* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_fmtdesc *VAR_3)
{
 struct camss_video *VAR_4 = FUNC_0(VAR_1);
 int VAR_5, VAR_6, VAR_7;

 if (VAR_3->type != VAR_4->type)
  return -VAR_0;

 if (VAR_3->index >= VAR_4->nformats)
  return -VAR_0;


 VAR_7 = -1;
 for (VAR_5 = 0; VAR_5 < VAR_4->nformats; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   if (VAR_4->formats[VAR_5].pixelformat ==
     VAR_4->formats[VAR_6].pixelformat)
    break;
  }

  if (VAR_6 == VAR_5)
   VAR_7++;

  if (VAR_7 == VAR_3->index)
   break;
 }

 if (VAR_7 < VAR_3->index)
  return -VAR_0;

 VAR_3->pixelformat = VAR_4->formats[VAR_5].pixelformat;

 return 0;
}
