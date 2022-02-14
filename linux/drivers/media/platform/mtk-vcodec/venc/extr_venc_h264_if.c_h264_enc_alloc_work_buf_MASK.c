
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct venc_h264_vpu_buf {int size; scalar_t__ iova; int vpua; } ;
struct TYPE_6__ {int size; scalar_t__ dma_addr; void* va; } ;
struct TYPE_5__ {int dev; } ;
struct venc_h264_inst {TYPE_3__ pps_buf; int ctx; TYPE_3__* work_bufs; TYPE_2__ vpu_inst; TYPE_1__* vsi; } ;
struct TYPE_4__ {struct venc_h264_vpu_buf* work_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct venc_h264_inst*) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (struct venc_h264_inst*,char*,int,void*,scalar_t__*,int) ;
 int FUNC_3 (struct venc_h264_inst*) ;
 int FUNC_4 (struct venc_h264_inst*) ;
 int FUNC_5 (struct venc_h264_inst*,char*,...) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 void* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct venc_h264_inst *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct venc_h264_vpu_buf *VAR_6 = VAR_3->vsi->work_bufs;

 FUNC_3(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->work_bufs[VAR_4].size = VAR_6[VAR_4].size;
  if (VAR_4 == VAR_2) {
   VAR_3->work_bufs[VAR_4].va = FUNC_7(
    VAR_3->vpu_inst.dev, VAR_6[VAR_4].vpua);
   VAR_3->work_bufs[VAR_4].dma_addr = 0;
  } else {
   VAR_5 = FUNC_6(VAR_3->ctx,
         &VAR_3->work_bufs[VAR_4]);
   if (VAR_5) {
    FUNC_5(VAR_3,
            "cannot allocate buf %d", VAR_4);
    goto err_alloc;
   }






   if (VAR_4 == VAR_1) {
    void *VAR_7;

    VAR_7 = FUNC_7(VAR_3->vpu_inst.dev,
            VAR_6[VAR_4].vpua);
    FUNC_1(VAR_3->work_bufs[VAR_4].va, VAR_7,
           VAR_6[VAR_4].size);
   }
  }
  VAR_6[VAR_4].iova = VAR_3->work_bufs[VAR_4].dma_addr;

  FUNC_2(VAR_3,
     "work_buf[%d] va=0x%p iova=%pad size=%zu",
     VAR_4, VAR_3->work_bufs[VAR_4].va,
     &VAR_3->work_bufs[VAR_4].dma_addr,
     VAR_3->work_bufs[VAR_4].size);
 }


 VAR_3->pps_buf.size = 128;
 VAR_5 = FUNC_6(VAR_3->ctx, &VAR_3->pps_buf);
 if (VAR_5) {
  FUNC_5(VAR_3, "cannot allocate pps_buf");
  goto err_alloc;
 }

 FUNC_4(VAR_3);

 return VAR_5;

err_alloc:
 FUNC_0(VAR_3);

 return VAR_5;
}
