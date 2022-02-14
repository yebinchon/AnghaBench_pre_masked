
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {scalar_t__ instance_id; scalar_t__ e_tmv_buffer1; scalar_t__ e_tmv_buffer0; scalar_t__ e_scratch_buffer_size; scalar_t__ e_scratch_buffer_addr; scalar_t__ e_me_buffer; scalar_t__ e_chroma_dpb; scalar_t__ e_luma_dpb; } ;
struct s5p_mfc_dev {int mfc_cmds; struct s5p_mfc_regs* mfc_regs; } ;
struct TYPE_2__ {size_t dma; int size; } ;
struct s5p_mfc_ctx {int pb_count; size_t scratch_buf_size; int tmv_buffer_size; size_t inst_no; scalar_t__ me_buffer_size; scalar_t__ chroma_dpb_size; scalar_t__ luma_dpb_size; TYPE_1__ bank1; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,struct s5p_mfc_dev*,int ,int *) ;
 int FUNC_5 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct s5p_mfc_ctx *VAR_3)
{
 struct s5p_mfc_dev *VAR_4 = VAR_3->dev;
 const struct s5p_mfc_regs *VAR_5 = VAR_4->mfc_regs;
 size_t VAR_6;
 int VAR_7, VAR_8;

 FUNC_2();

 VAR_6 = VAR_3->bank1.dma;
 VAR_8 = VAR_3->bank1.size;

 FUNC_1(2, "Buf1: %p (%d)\n", (void *)VAR_6, VAR_8);

 if (FUNC_0(VAR_4)) {

  for (VAR_7 = 0; VAR_7 < VAR_3->pb_count; VAR_7++) {
   FUNC_5(VAR_6, VAR_5->e_luma_dpb + (4 * VAR_7));
   VAR_6 += VAR_3->luma_dpb_size;
   VAR_8 -= VAR_3->luma_dpb_size;
  }
  for (VAR_7 = 0; VAR_7 < VAR_3->pb_count; VAR_7++) {
   FUNC_5(VAR_6, VAR_5->e_chroma_dpb + (4 * VAR_7));
   VAR_6 += VAR_3->chroma_dpb_size;
   VAR_8 -= VAR_3->chroma_dpb_size;
  }
  for (VAR_7 = 0; VAR_7 < VAR_3->pb_count; VAR_7++) {
   FUNC_5(VAR_6, VAR_5->e_me_buffer + (4 * VAR_7));
   VAR_6 += VAR_3->me_buffer_size;
   VAR_8 -= VAR_3->me_buffer_size;
  }
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_3->pb_count; VAR_7++) {
   FUNC_5(VAR_6, VAR_5->e_luma_dpb + (4 * VAR_7));
   VAR_6 += VAR_3->luma_dpb_size;
   FUNC_5(VAR_6, VAR_5->e_chroma_dpb + (4 * VAR_7));
   VAR_6 += VAR_3->chroma_dpb_size;
   FUNC_5(VAR_6, VAR_5->e_me_buffer + (4 * VAR_7));
   VAR_6 += VAR_3->me_buffer_size;
   VAR_8 -= (VAR_3->luma_dpb_size + VAR_3->chroma_dpb_size
     + VAR_3->me_buffer_size);
  }
 }

 FUNC_5(VAR_6, VAR_5->e_scratch_buffer_addr);
 FUNC_5(VAR_3->scratch_buf_size, VAR_5->e_scratch_buffer_size);
 VAR_6 += VAR_3->scratch_buf_size;
 VAR_8 -= VAR_3->scratch_buf_size;

 FUNC_5(VAR_6, VAR_5->e_tmv_buffer0);
 VAR_6 += VAR_3->tmv_buffer_size >> 1;
 FUNC_5(VAR_6, VAR_5->e_tmv_buffer1);
 VAR_6 += VAR_3->tmv_buffer_size >> 1;
 VAR_8 -= VAR_3->tmv_buffer_size;

 FUNC_1(2, "Buf1: %zu, buf_size1: %d (ref frames %d)\n",
   VAR_6, VAR_8, VAR_3->pb_count);
 if (VAR_8 < 0) {
  FUNC_1(2, "Not enough memory has been allocated.\n");
  return -VAR_0;
 }

 FUNC_5(VAR_3->inst_no, VAR_5->instance_id);
 FUNC_4(VAR_4->mfc_cmds, VAR_2, VAR_4,
   VAR_1, ((void*)0));

 FUNC_3();

 return 0;
}
