
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct s5p_mfc_dev {struct device** mem_dev; } ;
struct s5p_mfc_ctx {scalar_t__ state; unsigned int enc_dst_buf_size; unsigned int luma_size; unsigned int chroma_size; struct s5p_mfc_dev* dev; TYPE_2__* src_fmt; TYPE_1__* dst_fmt; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int num_planes; } ;
struct TYPE_3__ {unsigned int num_planes; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct s5p_mfc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_9,
   unsigned int *VAR_10, unsigned int *VAR_11,
   unsigned int VAR_12[], struct device *VAR_13[])
{
 struct s5p_mfc_ctx *VAR_14 = FUNC_1(VAR_9->drv_priv);
 struct s5p_mfc_dev *VAR_15 = VAR_14->dev;

 if (VAR_9->type == VAR_7) {
  if (VAR_14->state != VAR_3) {
   FUNC_2("invalid state: %d\n", VAR_14->state);
   return -VAR_2;
  }

  if (VAR_14->dst_fmt)
   *VAR_11 = VAR_14->dst_fmt->num_planes;
  else
   *VAR_11 = VAR_4;
  if (*VAR_10 < 1)
   *VAR_10 = 1;
  if (*VAR_10 > VAR_6)
   *VAR_10 = VAR_6;
  VAR_12[0] = VAR_14->enc_dst_buf_size;
  VAR_13[0] = VAR_14->dev->mem_dev[VAR_0];
 } else if (VAR_9->type == VAR_8) {
  if (VAR_14->src_fmt)
   *VAR_11 = VAR_14->src_fmt->num_planes;
  else
   *VAR_11 = VAR_5;

  if (*VAR_10 < 1)
   *VAR_10 = 1;
  if (*VAR_10 > VAR_6)
   *VAR_10 = VAR_6;

  VAR_12[0] = VAR_14->luma_size;
  VAR_12[1] = VAR_14->chroma_size;

  if (FUNC_0(VAR_15)) {
   VAR_13[0] = VAR_14->dev->mem_dev[VAR_0];
   VAR_13[1] = VAR_14->dev->mem_dev[VAR_0];
  } else {
   VAR_13[0] = VAR_14->dev->mem_dev[VAR_1];
   VAR_13[1] = VAR_14->dev->mem_dev[VAR_1];
  }
 } else {
  FUNC_2("invalid queue type: %d\n", VAR_9->type);
  return -VAR_2;
 }
 return 0;
}
