
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_h264_inst {scalar_t__ work_buf_allocated; int vpu_inst; } ;


 int FUNC_0 (struct venc_h264_inst*) ;
 int FUNC_1 (struct venc_h264_inst*) ;
 int FUNC_2 (struct venc_h264_inst*) ;
 int FUNC_3 (struct venc_h264_inst*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 int VAR_1 = 0;
 struct venc_h264_inst *VAR_2 = (struct venc_h264_inst *)VAR_0;

 FUNC_2(VAR_2);

 VAR_1 = FUNC_4(&VAR_2->vpu_inst);

 if (VAR_2->work_buf_allocated)
  FUNC_0(VAR_2);

 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 return VAR_1;
}
