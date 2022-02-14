
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int field; int height; int width; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct sta2x11_vip {int slock; int v4l2_dev; TYPE_2__ format; int vb_vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct sta2x11_vip*,int ,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct sta2x11_vip* FUNC_5 (struct file*) ;
 int FUNC_6 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_7, void *VAR_8,
    struct v4l2_format *VAR_9)
{
 struct sta2x11_vip *VAR_10 = FUNC_5(VAR_7);
 unsigned int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_6(VAR_7, VAR_8, VAR_9);
 if (VAR_14)
  return VAR_14;

 if (FUNC_4(&VAR_10->vb_vidq)) {

  FUNC_3(&VAR_10->v4l2_dev, "device busy\n");
  return -VAR_5;
 }
 VAR_10->format = VAR_9->fmt.pix;
 switch (VAR_10->format.field) {
 case 129:
  VAR_11 = ((VAR_10->format.height / 2 - 1) << 16) |
    (2 * VAR_10->format.width - 1);
  VAR_12 = VAR_11;
  VAR_13 = 4 * VAR_10->format.width;
  break;
 case 128:
  VAR_11 = ((VAR_10->format.height - 1) << 16) |
    (2 * VAR_10->format.width - 1);
  VAR_12 = (0 << 16) | (2 * VAR_10->format.width - 1);
  VAR_13 = 2 * VAR_10->format.width;
  break;
 case 130:
  VAR_11 = (0 << 16) | (2 * VAR_10->format.width - 1);
  VAR_12 = (VAR_10->format.height << 16) |
    (2 * VAR_10->format.width - 1);
  VAR_13 = 2 * VAR_10->format.width;
  break;
 default:
  FUNC_3(&VAR_10->v4l2_dev, "unknown field format\n");
  return -VAR_6;
 }

 FUNC_1(&VAR_10->slock);

 FUNC_0(VAR_10, VAR_2, 0);

 FUNC_0(VAR_10, VAR_0, 0);

 FUNC_0(VAR_10, VAR_3, VAR_11);

 FUNC_0(VAR_10, VAR_1, VAR_12);

 FUNC_0(VAR_10, VAR_4, VAR_13);
 FUNC_2(&VAR_10->slock);

 return 0;
}
