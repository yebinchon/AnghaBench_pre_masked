
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int type; int drv_priv; } ;
struct s5p_mfc_dev {struct device** mem_dev; } ;
struct s5p_mfc_ctx {scalar_t__ state; unsigned int pb_count; unsigned int luma_size; unsigned int chroma_size; unsigned int dec_src_buf_size; struct s5p_mfc_dev* dev; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct s5p_mfc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int,char*,unsigned int,unsigned int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_9,
   unsigned int *VAR_10,
   unsigned int *VAR_11, unsigned int VAR_12[],
   struct device *VAR_13[])
{
 struct s5p_mfc_ctx *VAR_14 = FUNC_1(VAR_9->drv_priv);
 struct s5p_mfc_dev *VAR_15 = VAR_14->dev;



 if (VAR_14->state == VAR_4 &&
     VAR_9->type == VAR_8) {

  *VAR_11 = 1;
  if (*VAR_10 < 1)
   *VAR_10 = 1;
  if (*VAR_10 > VAR_5)
   *VAR_10 = VAR_5;


 } else if (VAR_14->state == VAR_3 &&
     VAR_9->type == VAR_7) {

  *VAR_11 = 2;

  if (*VAR_10 < VAR_14->pb_count)
   *VAR_10 = VAR_14->pb_count;
  if (*VAR_10 > VAR_14->pb_count + VAR_6)
   *VAR_10 = VAR_14->pb_count + VAR_6;
  if (*VAR_10 > VAR_5)
   *VAR_10 = VAR_5;
 } else {
  FUNC_3("State seems invalid. State = %d, vq->type = %d\n",
       VAR_14->state, VAR_9->type);
  return -VAR_2;
 }
 FUNC_2(2, "Buffer count=%d, plane count=%d\n",
      *VAR_10, *VAR_11);
 if (VAR_14->state == VAR_3 &&
     VAR_9->type == VAR_7) {
  VAR_12[0] = VAR_14->luma_size;
  VAR_12[1] = VAR_14->chroma_size;

  if (FUNC_0(VAR_15))
   VAR_13[0] = VAR_14->dev->mem_dev[VAR_0];
  else
   VAR_13[0] = VAR_14->dev->mem_dev[VAR_1];
  VAR_13[1] = VAR_14->dev->mem_dev[VAR_0];
 } else if (VAR_9->type == VAR_8 &&
     VAR_14->state == VAR_4) {
  VAR_12[0] = VAR_14->dec_src_buf_size;
  VAR_13[0] = VAR_14->dev->mem_dev[VAR_0];
 } else {
  FUNC_3("This video node is dedicated to decoding. Decoding not initialized\n");
  return -VAR_2;
 }
 return 0;
}
