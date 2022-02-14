
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_h264_inst {int pps_buf; int ctx; int * work_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct venc_h264_inst*) ;
 int FUNC_1 (struct venc_h264_inst*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct venc_h264_inst *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2);




 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_3 != VAR_1)
   FUNC_2(VAR_2->ctx, &VAR_2->work_bufs[VAR_3]);
 }

 FUNC_2(VAR_2->ctx, &VAR_2->pps_buf);

 FUNC_1(VAR_2);
}
