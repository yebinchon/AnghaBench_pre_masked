
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int va; } ;
struct venc_h264_inst {TYPE_1__ pps_buf; } ;
struct mtk_vcodec_mem {scalar_t__ va; } ;


 int FUNC_0 (struct venc_h264_inst*,TYPE_1__*,unsigned int*) ;
 int FUNC_1 (struct venc_h264_inst*,struct mtk_vcodec_mem*,unsigned int*) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct venc_h264_inst *VAR_0,
         struct mtk_vcodec_mem *VAR_1,
         unsigned int *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_0->pps_buf, &VAR_5);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_1->va + VAR_4, VAR_0->pps_buf.va, VAR_5);
 *VAR_2 = VAR_4 + VAR_5;

 return VAR_3;
}
