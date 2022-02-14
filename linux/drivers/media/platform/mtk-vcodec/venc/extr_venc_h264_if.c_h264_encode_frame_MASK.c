
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; unsigned int bs_size; int is_key_frm; } ;
struct venc_h264_inst {TYPE_2__ vpu_inst; int frm_cnt; TYPE_1__* work_bufs; } ;
struct venc_frm_buf {int dummy; } ;
struct mtk_vcodec_mem {int va; } ;
struct TYPE_3__ {int va; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (struct venc_h264_inst*) ;
 unsigned int FUNC_1 (struct venc_h264_inst*,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (struct venc_h264_inst*,char*,int ,unsigned int,int ) ;
 int FUNC_4 (struct venc_h264_inst*) ;
 int FUNC_5 (struct venc_h264_inst*,char*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,int ,struct venc_frm_buf*,struct mtk_vcodec_mem*,unsigned int*) ;

__attribute__((used)) static int FUNC_7(struct venc_h264_inst *VAR_6,
        struct venc_frm_buf *VAR_7,
        struct mtk_vcodec_mem *VAR_8,
        unsigned int *VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11;

 FUNC_4(VAR_6);

 VAR_10 = FUNC_6(&VAR_6->vpu_inst, VAR_1, VAR_7,
        VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;





 if (VAR_6->vpu_inst.state == VAR_5) {
  *VAR_9 = VAR_6->vpu_inst.bs_size;
  FUNC_2(VAR_8->va,
         VAR_6->work_bufs[VAR_3].va,
         *VAR_9);
  ++VAR_6->frm_cnt;
  return VAR_10;
 }

 VAR_11 = FUNC_0(VAR_6);
 if (VAR_11 != VAR_2) {
  FUNC_5(VAR_6, "irq_status=%d failed", VAR_11);
  return -VAR_0;
 }

 *VAR_9 = FUNC_1(VAR_6, VAR_4);

 ++VAR_6->frm_cnt;
 FUNC_3(VAR_6, "frm %d bs_size %d key_frm %d <-",
    VAR_6->frm_cnt, *VAR_9, VAR_6->vpu_inst.is_key_frm);

 return VAR_10;
}
