
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct venc_vp8_vpu_buf {scalar_t__ size; int iova; int vpua; } ;
struct TYPE_5__ {int dev; } ;
struct venc_vp8_inst {TYPE_3__* work_bufs; TYPE_2__ vpu_inst; int ctx; TYPE_1__* vsi; } ;
struct TYPE_6__ {scalar_t__ size; int dma_addr; int va; } ;
struct TYPE_4__ {struct venc_vp8_vpu_buf* work_bufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,scalar_t__) ;
 int FUNC_1 (struct venc_vp8_inst*,char*,int,int ,int *,scalar_t__) ;
 int FUNC_2 (struct venc_vp8_inst*) ;
 int FUNC_3 (struct venc_vp8_inst*) ;
 int FUNC_4 (struct venc_vp8_inst*,char*,int) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (struct venc_vp8_inst*) ;
 void* FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct venc_vp8_inst *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 struct venc_vp8_vpu_buf *VAR_7 = VAR_4->vsi->work_bufs;

 FUNC_2(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_7[VAR_5].size == 0)
   continue;
  VAR_4->work_bufs[VAR_5].size = VAR_7[VAR_5].size;
  VAR_6 = FUNC_5(VAR_4->ctx, &VAR_4->work_bufs[VAR_5]);
  if (VAR_6) {
   FUNC_4(VAR_4,
           "cannot alloc work_bufs[%d]", VAR_5);
   goto err_alloc;
  }





  if (VAR_5 == VAR_1 ||
      VAR_5 == VAR_2 ||
      VAR_5 == VAR_3) {
   void *VAR_8;

   VAR_8 = FUNC_7(VAR_4->vpu_inst.dev,
           VAR_7[VAR_5].vpua);
   FUNC_0(VAR_4->work_bufs[VAR_5].va, VAR_8, VAR_7[VAR_5].size);
  }
  VAR_7[VAR_5].iova = VAR_4->work_bufs[VAR_5].dma_addr;

  FUNC_1(VAR_4,
     "work_bufs[%d] va=0x%p,iova=%pad,size=%zu",
     VAR_5, VAR_4->work_bufs[VAR_5].va,
     &VAR_4->work_bufs[VAR_5].dma_addr,
     VAR_4->work_bufs[VAR_5].size);
 }

 FUNC_3(VAR_4);

 return VAR_6;

err_alloc:
 FUNC_6(VAR_4);

 return VAR_6;
}
