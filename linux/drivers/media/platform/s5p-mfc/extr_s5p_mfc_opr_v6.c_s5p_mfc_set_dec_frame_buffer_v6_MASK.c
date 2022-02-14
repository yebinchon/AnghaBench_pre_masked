
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s5p_mfc_regs {scalar_t__ instance_id; scalar_t__ d_static_buffer_size; scalar_t__ d_static_buffer_addr; scalar_t__ d_mv_buffer; scalar_t__ d_second_plane_dpb; scalar_t__ d_first_plane_dpb; scalar_t__ d_num_mv; scalar_t__ d_mv_buffer_size; scalar_t__ d_second_plane_dpb_stride_size; scalar_t__ d_first_plane_dpb_stride_size; scalar_t__ d_scratch_buffer_size; scalar_t__ d_scratch_buffer_addr; scalar_t__ d_second_plane_dpb_size; scalar_t__ d_first_plane_dpb_size; scalar_t__ d_num_dpb; } ;
struct s5p_mfc_dev {int mfc_cmds; struct s5p_mfc_regs* mfc_regs; } ;
struct TYPE_5__ {size_t dma; int size; } ;
struct s5p_mfc_ctx {size_t total_dpb_count; size_t luma_size; size_t chroma_size; size_t scratch_buf_size; size_t img_width; scalar_t__ codec_mode; size_t mv_size; size_t mv_count; size_t inst_no; TYPE_4__* dst_bufs; int display_delay; TYPE_1__ bank1; struct s5p_mfc_dev* dev; } ;
struct TYPE_6__ {size_t luma; size_t chroma; } ;
struct TYPE_7__ {TYPE_2__ raw; } ;
struct TYPE_8__ {TYPE_3__ cookie; } ;


 size_t FUNC_0 (size_t,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct s5p_mfc_dev*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int ,struct s5p_mfc_dev*,int ,int *) ;
 int FUNC_4 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct s5p_mfc_ctx *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15;
 struct s5p_mfc_dev *VAR_16 = VAR_11->dev;
 const struct s5p_mfc_regs *VAR_17 = VAR_16->mfc_regs;
 size_t VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_18 = VAR_11->bank1.dma;
 VAR_19 = VAR_11->bank1.size;

 FUNC_2(2, "Buf1: %p (%d)\n", (void *)VAR_18, VAR_19);
 FUNC_2(2, "Total DPB COUNT: %d\n", VAR_11->total_dpb_count);
 FUNC_2(2, "Setting display delay to %d\n", VAR_11->display_delay);

 FUNC_4(VAR_11->total_dpb_count, VAR_17->d_num_dpb);
 FUNC_4(VAR_11->luma_size, VAR_17->d_first_plane_dpb_size);
 FUNC_4(VAR_11->chroma_size, VAR_17->d_second_plane_dpb_size);

 FUNC_4(VAR_18, VAR_17->d_scratch_buffer_addr);
 FUNC_4(VAR_11->scratch_buf_size, VAR_17->d_scratch_buffer_size);

 if (FUNC_1(VAR_16)) {
  FUNC_4(VAR_11->img_width,
   VAR_17->d_first_plane_dpb_stride_size);
  FUNC_4(VAR_11->img_width,
   VAR_17->d_second_plane_dpb_stride_size);
 }

 VAR_18 += VAR_11->scratch_buf_size;
 VAR_19 -= VAR_11->scratch_buf_size;

 if (VAR_11->codec_mode == VAR_3 ||
   VAR_11->codec_mode == VAR_4 ||
   VAR_11->codec_mode == VAR_5) {
  FUNC_4(VAR_11->mv_size, VAR_17->d_mv_buffer_size);
  FUNC_4(VAR_11->mv_count, VAR_17->d_num_mv);
 }

 VAR_12 = VAR_11->luma_size;
 VAR_14 = VAR_11->chroma_size;
 VAR_15 = VAR_11->mv_size;
 FUNC_2(2, "Frame size: %d ch: %d mv: %d\n",
   VAR_12, VAR_14, VAR_15);

 for (VAR_13 = 0; VAR_13 < VAR_11->total_dpb_count; VAR_13++) {

  FUNC_2(2, "Luma %d: %zx\n", VAR_13,
     VAR_11->dst_bufs[VAR_13].cookie.raw.luma);
  FUNC_4(VAR_11->dst_bufs[VAR_13].cookie.raw.luma,
    VAR_17->d_first_plane_dpb + VAR_13 * 4);
  FUNC_2(2, "\tChroma %d: %zx\n", VAR_13,
     VAR_11->dst_bufs[VAR_13].cookie.raw.chroma);
  FUNC_4(VAR_11->dst_bufs[VAR_13].cookie.raw.chroma,
    VAR_17->d_second_plane_dpb + VAR_13 * 4);
 }
 if (VAR_11->codec_mode == VAR_7 ||
   VAR_11->codec_mode == VAR_8 ||
   VAR_11->codec_mode == VAR_9) {
  for (VAR_13 = 0; VAR_13 < VAR_11->mv_count; VAR_13++) {

   VAR_20 = VAR_18;
   VAR_18 = FUNC_0(VAR_18, 16);
   VAR_20 = VAR_18 - VAR_20;
   VAR_19 -= VAR_20;

   FUNC_2(2, "\tBuf1: %zx, size: %d\n",
     VAR_18, VAR_19);
   FUNC_4(VAR_18, VAR_17->d_mv_buffer + VAR_13 * 4);
   VAR_18 += VAR_15;
   VAR_19 -= VAR_15;
  }
 }
 if (VAR_11->codec_mode == VAR_6) {
  FUNC_4(VAR_18, VAR_17->d_static_buffer_addr);
  FUNC_4(VAR_0,
    VAR_17->d_static_buffer_size);
  VAR_18 += VAR_0;
  VAR_19 -= VAR_0;
 }

 FUNC_2(2, "Buf1: %zx, buf_size1: %d (frames %d)\n",
   VAR_18, VAR_19, VAR_11->total_dpb_count);
 if (VAR_19 < 0) {
  FUNC_2(2, "Not enough memory has been allocated.\n");
  return -VAR_1;
 }

 FUNC_4(VAR_11->inst_no, VAR_17->instance_id);
 FUNC_3(VAR_16->mfc_cmds, VAR_10, VAR_16,
   VAR_2, ((void*)0));

 FUNC_2(2, "After setting buffers.\n");
 return 0;
}
