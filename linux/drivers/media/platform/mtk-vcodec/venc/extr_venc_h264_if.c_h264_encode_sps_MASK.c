
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_h264_inst {int vpu_inst; } ;
struct mtk_vcodec_mem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct venc_h264_inst*) ;
 unsigned int FUNC_1 (struct venc_h264_inst*,int ) ;
 int FUNC_2 (struct venc_h264_inst*,char*,unsigned int) ;
 int FUNC_3 (struct venc_h264_inst*) ;
 int FUNC_4 (struct venc_h264_inst*,char*,unsigned int) ;
 int FUNC_5 (int *,int ,int *,struct mtk_vcodec_mem*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct venc_h264_inst *VAR_4,
      struct mtk_vcodec_mem *VAR_5,
      unsigned int *VAR_6)
{
 int VAR_7 = 0;
 unsigned int VAR_8;

 FUNC_3(VAR_4);

 VAR_7 = FUNC_5(&VAR_4->vpu_inst, VAR_1, ((void*)0),
        VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8 != VAR_2) {
  FUNC_4(VAR_4, "expect irq status %d",
          VAR_2);
  return -VAR_0;
 }

 *VAR_6 = FUNC_1(VAR_4, VAR_3);
 FUNC_2(VAR_4, "bs size %d <-", *VAR_6);

 return VAR_7;
}
