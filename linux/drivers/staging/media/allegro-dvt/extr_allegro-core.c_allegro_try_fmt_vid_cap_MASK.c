
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* height; void* width; int sizeimage; scalar_t__ bytesperline; int pixelformat; int field; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,void*,int ,int ) ;
 int FUNC_1 (void*,void*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_7, void *VAR_8,
       struct v4l2_format *VAR_9)
{
 VAR_9->fmt.pix.field = VAR_4;

 VAR_9->fmt.pix.width = FUNC_0(VAR_6, VAR_9->fmt.pix.width,
       VAR_3, VAR_2);
 VAR_9->fmt.pix.height = FUNC_0(VAR_6, VAR_9->fmt.pix.height,
        VAR_1, VAR_0);

 VAR_9->fmt.pix.pixelformat = VAR_5;
 VAR_9->fmt.pix.bytesperline = 0;
 VAR_9->fmt.pix.sizeimage =
  FUNC_1(VAR_9->fmt.pix.width, VAR_9->fmt.pix.height);

 return 0;
}
