
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int width; unsigned int height; unsigned int bytesperline; unsigned int sizeimage; int field; int colorspace; int pixelformat; } ;
struct TYPE_6__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {scalar_t__ interlaced_fieldmode; scalar_t__ progressive; } ;
struct em28xx_fmt {unsigned int depth; int fourcc; } ;
struct TYPE_4__ {scalar_t__ is_em2800; } ;
struct em28xx {TYPE_1__ board; struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 struct em28xx_fmt* VAR_4 ;
 struct em28xx_fmt* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct em28xx*) ;
 unsigned int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (struct em28xx*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct em28xx*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_6 (unsigned int*,int,unsigned int,int,unsigned int*,int,unsigned int,int,int ) ;
 struct em28xx* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, void *VAR_6,
      struct v4l2_format *VAR_7)
{
 struct em28xx *VAR_8 = FUNC_7(VAR_5);
 struct em28xx_v4l2 *VAR_9 = VAR_8->v4l2;
 unsigned int VAR_10 = VAR_7->fmt.pix.width;
 unsigned int VAR_11 = VAR_7->fmt.pix.height;
 unsigned int VAR_12 = FUNC_3(VAR_8);
 unsigned int VAR_13 = FUNC_2(VAR_8);
 unsigned int VAR_14, VAR_15;
 struct em28xx_fmt *VAR_16;

 VAR_16 = FUNC_1(VAR_7->fmt.pix.pixelformat);
 if (!VAR_16) {
  VAR_16 = &VAR_4[0];
  FUNC_0("Fourcc format (%08x) invalid. Using default (%08x).\n",
    VAR_7->fmt.pix.pixelformat, VAR_16->fourcc);
 }

 if (VAR_8->board.is_em2800) {

  VAR_11 = VAR_11 > (3 * VAR_13 / 4) ? VAR_13 : VAR_13 / 2;
  VAR_10 = VAR_10 > (3 * VAR_12 / 4) ? VAR_12 : VAR_12 / 2;





  if (VAR_10 == VAR_12 && VAR_11 == VAR_13)
   VAR_10 /= 2;
 } else {




  FUNC_6(&VAR_10, 48, VAR_12, 1, &VAR_11, 32, VAR_13,
          1, 0);
 }

 if (VAR_10 < 1)
  VAR_10 = 1;
 if (VAR_11 < 1)
  VAR_11 = 1;

 FUNC_5(VAR_8, VAR_10, VAR_11, &VAR_14, &VAR_15);
 FUNC_4(VAR_8, VAR_14, VAR_15, &VAR_10, &VAR_11);

 VAR_7->fmt.pix.width = VAR_10;
 VAR_7->fmt.pix.height = VAR_11;
 VAR_7->fmt.pix.pixelformat = VAR_16->fourcc;
 VAR_7->fmt.pix.bytesperline = (VAR_10 * VAR_16->depth + 7) >> 3;
 VAR_7->fmt.pix.sizeimage = VAR_7->fmt.pix.bytesperline * VAR_11;
 VAR_7->fmt.pix.colorspace = VAR_0;
 if (VAR_9->progressive)
  VAR_7->fmt.pix.field = VAR_2;
 else
  VAR_7->fmt.pix.field = VAR_9->interlaced_fieldmode ?
      VAR_1 : VAR_3;

 return 0;
}
