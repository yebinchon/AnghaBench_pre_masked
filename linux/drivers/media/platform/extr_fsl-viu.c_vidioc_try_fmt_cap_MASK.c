
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct viu_fmt {int depth; } ;
struct TYPE_3__ {int height; int width; int bytesperline; int sizeimage; int colorspace; int field; int pixelformat; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 struct viu_fmt* FUNC_1 (int ) ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct viu_fmt *VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_5->fmt.pix.pixelformat);
 if (!VAR_6) {
  FUNC_0(1, "Fourcc format (0x%08x) invalid.",
   VAR_5->fmt.pix.pixelformat);
  return -VAR_0;
 }

 VAR_7 = FUNC_3();
 VAR_8 = FUNC_2();

 VAR_5->fmt.pix.field = VAR_2;
 if (VAR_5->fmt.pix.height < 32)
  VAR_5->fmt.pix.height = 32;
 if (VAR_5->fmt.pix.height > VAR_8)
  VAR_5->fmt.pix.height = VAR_8;
 if (VAR_5->fmt.pix.width < 48)
  VAR_5->fmt.pix.width = 48;
 if (VAR_5->fmt.pix.width > VAR_7)
  VAR_5->fmt.pix.width = VAR_7;
 VAR_5->fmt.pix.width &= ~0x03;
 VAR_5->fmt.pix.bytesperline =
  (VAR_5->fmt.pix.width * VAR_6->depth) >> 3;
 VAR_5->fmt.pix.sizeimage = VAR_5->fmt.pix.height * VAR_5->fmt.pix.bytesperline;
 VAR_5->fmt.pix.colorspace = VAR_1;

 return 0;
}
