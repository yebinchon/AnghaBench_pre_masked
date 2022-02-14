
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {scalar_t__ type; int drv_priv; } ;
struct vb2_buffer {struct vb2_queue* vb2_queue; } ;
struct s5p_mfc_ctx {scalar_t__ enc_dst_buf_size; scalar_t__ luma_size; scalar_t__ chroma_size; int src_fmt; int dst_fmt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct vb2_buffer*) ;
 struct s5p_mfc_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_5(struct vb2_buffer *VAR_3)
{
 struct vb2_queue *VAR_4 = VAR_3->vb2_queue;
 struct s5p_mfc_ctx *VAR_5 = FUNC_1(VAR_4->drv_priv);
 int VAR_6;

 if (VAR_4->type == VAR_1) {
  VAR_6 = FUNC_0(VAR_5->dst_fmt, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_2(2, "plane size: %ld, dst size: %zu\n",
   FUNC_4(VAR_3, 0), VAR_5->enc_dst_buf_size);
  if (FUNC_4(VAR_3, 0) < VAR_5->enc_dst_buf_size) {
   FUNC_3("plane size is too small for capture\n");
   return -VAR_0;
  }
 } else if (VAR_4->type == VAR_2) {
  VAR_6 = FUNC_0(VAR_5->src_fmt, VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
  FUNC_2(2, "plane size: %ld, luma size: %d\n",
   FUNC_4(VAR_3, 0), VAR_5->luma_size);
  FUNC_2(2, "plane size: %ld, chroma size: %d\n",
   FUNC_4(VAR_3, 1), VAR_5->chroma_size);
  if (FUNC_4(VAR_3, 0) < VAR_5->luma_size ||
      FUNC_4(VAR_3, 1) < VAR_5->chroma_size) {
   FUNC_3("plane size is too small for output\n");
   return -VAR_0;
  }
 } else {
  FUNC_3("invalid queue type: %d\n", VAR_4->type);
  return -VAR_0;
 }
 return 0;
}
