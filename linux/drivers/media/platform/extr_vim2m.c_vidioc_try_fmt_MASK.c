
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vim2m_fmt {int depth; } ;
struct TYPE_3__ {int height; int width; int bytesperline; int sizeimage; int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_format *VAR_5, struct vim2m_fmt *VAR_6)
{
 int VAR_7, VAR_8;




 if (VAR_5->fmt.pix.height < VAR_2)
  VAR_5->fmt.pix.height = VAR_2;
 else if (VAR_5->fmt.pix.height > VAR_0)
  VAR_5->fmt.pix.height = VAR_0;

 if (VAR_5->fmt.pix.width < VAR_3)
  VAR_5->fmt.pix.width = VAR_3;
 else if (VAR_5->fmt.pix.width > VAR_1)
  VAR_5->fmt.pix.width = VAR_1;

 FUNC_0(VAR_5->fmt.pix.pixelformat, &VAR_7, &VAR_8);
 VAR_5->fmt.pix.width &= ~(VAR_7 - 1);
 VAR_5->fmt.pix.height &= ~(VAR_8 - 1);
 VAR_5->fmt.pix.bytesperline = (VAR_5->fmt.pix.width * VAR_6->depth) >> 3;
 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.field = VAR_4;

 return 0;
}
