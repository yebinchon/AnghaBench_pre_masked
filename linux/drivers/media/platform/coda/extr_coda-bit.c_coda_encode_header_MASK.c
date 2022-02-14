
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct vb2_v4l2_buffer {struct vb2_buffer vb2_buf; } ;
struct v4l2_rect {int width; int height; } ;
struct coda_q_data {struct v4l2_rect rect; } ;
struct coda_dev {TYPE_2__* devtype; int v4l2_dev; } ;
struct coda_ctx {int reg_idx; TYPE_1__* codec; struct coda_dev* dev; } ;
struct TYPE_4__ {scalar_t__ product; } ;
struct TYPE_3__ {scalar_t__ dst_fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct coda_ctx*,int ) ;
 int FUNC_2 (struct coda_dev*,int ) ;
 int FUNC_3 (struct coda_dev*,int,int ) ;
 struct coda_q_data* FUNC_4 (struct coda_ctx*,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct vb2_buffer*,int ) ;
 size_t FUNC_10 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_11 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_12(struct coda_ctx *VAR_11, struct vb2_v4l2_buffer *VAR_12,
         int VAR_13, u8 *VAR_14, int *VAR_15)
{
 struct vb2_buffer *VAR_16 = &VAR_12->vb2_buf;
 struct coda_dev *VAR_17 = VAR_11->dev;
 struct coda_q_data *VAR_18;
 struct v4l2_rect *VAR_19;
 size_t VAR_20;
 int VAR_21;
 int VAR_22;

 if (VAR_17->devtype->product == VAR_3)
  FUNC_6(FUNC_11(VAR_16, 0), 0, 64);

 FUNC_3(VAR_17, FUNC_9(VAR_16, 0),
     VAR_5);
 VAR_20 = FUNC_10(VAR_16, 0);
 if (VAR_17->devtype->product == VAR_3)
  VAR_20 /= 1024;
 FUNC_3(VAR_17, VAR_20, VAR_4);
 if (VAR_17->devtype->product == VAR_3 &&
     VAR_11->codec->dst_fourcc == VAR_10 &&
     VAR_13 == VAR_8) {
  VAR_18 = FUNC_4(VAR_11, VAR_9);
  VAR_19 = &VAR_18->rect;

  if (VAR_19->width % 16 || VAR_19->height % 16) {
   u32 VAR_23 = FUNC_7(VAR_19->width, 16) - VAR_19->width;
   u32 VAR_24 = FUNC_7(VAR_19->height, 16) - VAR_19->height;

   FUNC_3(VAR_17, VAR_23,
       VAR_0);
   FUNC_3(VAR_17, VAR_24,
       VAR_1);
   VAR_13 |= VAR_2;
  }
 }
 FUNC_3(VAR_17, VAR_13, VAR_6);
 VAR_21 = FUNC_1(VAR_11, VAR_7);
 if (VAR_21 < 0) {
  FUNC_8(&VAR_17->v4l2_dev, "CODA_COMMAND_ENCODE_HEADER timeout\n");
  return VAR_21;
 }

 if (VAR_17->devtype->product == VAR_3) {
  for (VAR_22 = 63; VAR_22 > 0; VAR_22--)
   if (((char *)FUNC_11(VAR_16, 0))[VAR_22] != 0)
    break;
  *VAR_15 = VAR_22 + 1;
 } else {
  *VAR_15 = FUNC_2(VAR_17, FUNC_0(VAR_11->reg_idx)) -
   FUNC_2(VAR_17, VAR_5);
 }
 FUNC_5(VAR_14, FUNC_11(VAR_16, 0), *VAR_15);

 return 0;
}
