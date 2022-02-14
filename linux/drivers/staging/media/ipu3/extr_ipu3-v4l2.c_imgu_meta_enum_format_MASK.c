
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_fmtdesc {scalar_t__ type; scalar_t__ index; int pixelformat; int description; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct imgu_video_device {TYPE_1__ vbq; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int fourcc; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct imgu_video_device* FUNC_0 (struct file*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 struct imgu_video_device *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7 = VAR_5->type == VAR_1 ? 0 : 1;


 if (VAR_5->index > 0 || VAR_5->type != VAR_6->vbq.type)
  return -VAR_0;

 FUNC_1(VAR_5->description, VAR_2[VAR_7].name, sizeof(VAR_5->description));
 VAR_5->pixelformat = VAR_2[VAR_7].fourcc;

 return 0;
}
