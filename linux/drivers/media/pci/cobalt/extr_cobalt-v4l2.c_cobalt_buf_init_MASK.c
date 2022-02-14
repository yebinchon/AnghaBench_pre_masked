
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {size_t index; TYPE_1__* vb2_queue; } ;
struct sg_table {int nents; int sgl; } ;
struct sg_dma_desc_info {int * virt; int * dev; } ;
struct cobalt_stream {unsigned int stride; unsigned int height; int width; int bpp; int is_output; scalar_t__ is_audio; struct sg_dma_desc_info* dma_desc_info; struct cobalt* cobalt; } ;
struct cobalt {TYPE_2__* pci_dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct cobalt_stream* drv_priv; } ;


 int VAR_0 ;
 size_t const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int FUNC_1 (struct sg_dma_desc_info*,size_t const) ;
 int FUNC_2 (struct cobalt*,int ,int,int ,unsigned int,int,unsigned int,struct sg_dma_desc_info*) ;
 int FUNC_3 (struct sg_dma_desc_info*) ;
 struct sg_table* FUNC_4 (struct vb2_buffer*,int ) ;
 unsigned int FUNC_5 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_6)
{
 struct cobalt_stream *VAR_7 = VAR_6->vb2_queue->drv_priv;
 struct cobalt *VAR_8 = VAR_7->cobalt;
 const size_t VAR_9 =
  (VAR_2 * VAR_0) / VAR_5 + 2;
 const size_t VAR_10 =
  VAR_1 * VAR_9 * 0x20;
 const size_t VAR_11 = ((1920 * 4) / VAR_5 + 1) * 0x20;
 struct sg_dma_desc_info *VAR_12 = &VAR_7->dma_desc_info[VAR_6->index];
 struct sg_table *VAR_13 = FUNC_4(VAR_6, 0);
 unsigned VAR_14;
 int VAR_15;

 VAR_14 = VAR_7->stride * VAR_7->height;
 if (FUNC_5(VAR_6, 0) < VAR_14) {
  FUNC_0("data will not fit into plane (%lu < %u)\n",
     FUNC_5(VAR_6, 0), VAR_14);
  return -VAR_3;
 }

 if (VAR_12->virt == ((void*)0)) {
  VAR_12->dev = &VAR_8->pci_dev->dev;
  FUNC_1(VAR_12,
   VAR_7->is_audio ? VAR_11 : VAR_10);
  if (VAR_12->virt == ((void*)0))
   return -VAR_4;
 }
 VAR_15 = FUNC_2(VAR_8, VAR_13->sgl,
   !VAR_7->is_output, VAR_13->nents, VAR_14,
   VAR_7->width * VAR_7->bpp, VAR_7->stride, VAR_12);
 if (VAR_15)
  FUNC_3(VAR_12);
 return VAR_15;
}
