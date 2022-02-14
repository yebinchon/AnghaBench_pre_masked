
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; int field; int pixelformat; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct s2255_mode {scalar_t__ scale; int color; int restart; scalar_t__ format; } ;
struct TYPE_6__ {int capturemode; } ;
struct s2255_vc {scalar_t__ width; scalar_t__ height; int jpegqual; struct s2255_mode mode; struct s2255_fmt const* fmt; TYPE_3__ cap_parm; int field; int dev; struct vb2_queue vb_vidq; } ;
struct s2255_fmt {int fourcc; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;






 int FUNC_0 (int ,int,char*) ;
 struct s2255_fmt* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct s2255_vc*) ;
 scalar_t__ FUNC_3 (struct s2255_vc*) ;
 int FUNC_4 (struct s2255_vc*,struct s2255_mode*) ;
 scalar_t__ FUNC_5 (struct vb2_queue*) ;
 struct s2255_vc* FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*,struct s2255_vc*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_12, void *VAR_13,
       struct v4l2_format *VAR_14)
{
 struct s2255_vc *VAR_15 = FUNC_6(VAR_12);
 const struct s2255_fmt *VAR_16;
 struct vb2_queue *VAR_17 = &VAR_15->vb_vidq;
 struct s2255_mode VAR_18;
 int VAR_19;

 VAR_19 = FUNC_7(VAR_12, VAR_15, VAR_14);

 if (VAR_19 < 0)
  return VAR_19;

 VAR_16 = FUNC_1(VAR_14->fmt.pix.pixelformat);

 if (VAR_16 == ((void*)0))
  return -VAR_5;

 if (FUNC_5(VAR_17)) {
  FUNC_0(VAR_15->dev, 1, "queue busy\n");
  return -VAR_4;
 }

 VAR_18 = VAR_15->mode;
 VAR_15->fmt = VAR_16;
 VAR_15->width = VAR_14->fmt.pix.width;
 VAR_15->height = VAR_14->fmt.pix.height;
 VAR_15->field = VAR_14->fmt.pix.field;
 if (VAR_15->width > FUNC_3(VAR_15)) {
  if (VAR_15->height > FUNC_2(VAR_15)) {
   if (VAR_15->cap_parm.capturemode &
       VAR_11)
    VAR_18.scale = VAR_10;
   else
    VAR_18.scale = VAR_9;
  } else
   VAR_18.scale = VAR_8;

 } else {
  VAR_18.scale = VAR_7;
 }

 switch (VAR_15->fmt->fourcc) {
 case 133:
  VAR_18.color &= ~VAR_6;
  VAR_18.color |= VAR_1;
  break;
 case 132:
 case 131:
  VAR_18.color &= ~VAR_6;
  VAR_18.color |= VAR_0;
  VAR_18.color |= (VAR_15->jpegqual << 8);
  break;
 case 129:
  VAR_18.color &= ~VAR_6;
  VAR_18.color |= VAR_3;
  break;
 case 128:
 case 130:
 default:
  VAR_18.color &= ~VAR_6;
  VAR_18.color |= VAR_2;
  break;
 }
 if ((VAR_18.color & VAR_6) != (VAR_15->mode.color & VAR_6))
  VAR_18.restart = 1;
 else if (VAR_18.scale != VAR_15->mode.scale)
  VAR_18.restart = 1;
 else if (VAR_18.format != VAR_15->mode.format)
  VAR_18.restart = 1;
 VAR_15->mode = VAR_18;
 (void) FUNC_4(VAR_15, &VAR_18);
 return 0;
}
