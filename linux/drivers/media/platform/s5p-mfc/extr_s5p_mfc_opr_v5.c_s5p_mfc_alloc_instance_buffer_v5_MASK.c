
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct s5p_mfc_dev {int* dma_base; TYPE_2__* variant; } ;
struct TYPE_7__ {int ofs; int dma; int virt; int size; } ;
struct s5p_mfc_ctx {scalar_t__ codec_mode; TYPE_3__ shm; TYPE_3__ ctx; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf_size_v5 {int shm; int non_h264_ctx; int h264_ctx; } ;
struct TYPE_6__ {TYPE_1__* buf_size; } ;
struct TYPE_5__ {struct s5p_mfc_buf_size_v5* priv; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct s5p_mfc_dev*,size_t,TYPE_3__*) ;
 int FUNC_5 (struct s5p_mfc_dev*,TYPE_3__*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct s5p_mfc_ctx *VAR_4)
{
 struct s5p_mfc_dev *VAR_5 = VAR_4->dev;
 struct s5p_mfc_buf_size_v5 *VAR_6 = VAR_5->variant->buf_size->priv;
 int VAR_7;

 if (VAR_4->codec_mode == VAR_2 ||
  VAR_4->codec_mode == VAR_3)
  VAR_4->ctx.size = VAR_6->h264_ctx;
 else
  VAR_4->ctx.size = VAR_6->non_h264_ctx;

 VAR_7 = FUNC_4(VAR_5, VAR_0, &VAR_4->ctx);
 if (VAR_7) {
  FUNC_3("Failed to allocate instance buffer\n");
  return VAR_7;
 }
 VAR_4->ctx.ofs = FUNC_1(VAR_4->ctx.dma);


 FUNC_2(VAR_4->ctx.virt, 0, VAR_4->ctx.size);
 FUNC_6();


 VAR_4->shm.size = VAR_6->shm;
 VAR_7 = FUNC_4(VAR_5, VAR_0, &VAR_4->shm);
 if (VAR_7) {
  FUNC_3("Failed to allocate shared memory buffer\n");
  FUNC_5(VAR_5, &VAR_4->ctx);
  return VAR_7;
 }


 VAR_4->shm.ofs = VAR_4->shm.dma - VAR_5->dma_base[VAR_0];
 FUNC_0(VAR_4->shm.ofs & ((1 << VAR_1) - 1));

 FUNC_2(VAR_4->shm.virt, 0, VAR_6->shm);
 FUNC_6();
 return 0;
}
