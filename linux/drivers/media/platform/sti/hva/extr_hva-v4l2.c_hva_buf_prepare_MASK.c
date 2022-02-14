
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ field; int vb2_buf; } ;
struct vb2_buffer {int index; TYPE_1__* vb2_queue; } ;
struct hva_stream {int prepared; void* paddr; void* vaddr; int size; } ;
struct hva_frame {int prepared; void* paddr; void* vaddr; int info; } ;
struct hva_ctx {int name; int frameinfo; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,char*,int ,int ,scalar_t__,...) ;
 struct hva_frame* FUNC_2 (struct vb2_v4l2_buffer*) ;
 struct hva_stream* FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 void* FUNC_5 (int *,int ) ;
 struct hva_ctx* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct vb2_buffer *VAR_4)
{
 struct hva_ctx *VAR_5 = FUNC_6(VAR_4->vb2_queue);
 struct device *VAR_6 = FUNC_0(VAR_5);
 struct vb2_v4l2_buffer *VAR_7 = FUNC_4(VAR_4);

 if (VAR_4->vb2_queue->type == VAR_1) {
  struct hva_frame *VAR_8 = FUNC_2(VAR_7);

  if (VAR_7->field == VAR_2)
   VAR_7->field = VAR_3;
  if (VAR_7->field != VAR_3) {
   FUNC_1(VAR_6,
    "%s frame[%d] prepare: %d field not supported\n",
    VAR_5->name, VAR_4->index, VAR_7->field);
   return -VAR_0;
  }

  if (!VAR_8->prepared) {

   VAR_8->vaddr = FUNC_8(&VAR_7->vb2_buf, 0);
   VAR_8->paddr = FUNC_5(
     &VAR_7->vb2_buf, 0);
   VAR_8->info = VAR_5->frameinfo;
   VAR_8->prepared = 1;

   FUNC_1(VAR_6,
    "%s frame[%d] prepared; virt=%p, phy=%pad\n",
    VAR_5->name, VAR_4->index,
    VAR_8->vaddr, &VAR_8->paddr);
  }
 } else {
  struct hva_stream *VAR_9 = FUNC_3(VAR_7);

  if (!VAR_9->prepared) {

   VAR_9->vaddr = FUNC_8(&VAR_7->vb2_buf, 0);
   VAR_9->paddr = FUNC_5(
     &VAR_7->vb2_buf, 0);
   VAR_9->size = FUNC_7(&VAR_7->vb2_buf, 0);
   VAR_9->prepared = 1;

   FUNC_1(VAR_6,
    "%s stream[%d] prepared; virt=%p, phy=%pad\n",
    VAR_5->name, VAR_4->index,
    VAR_9->vaddr, &VAR_9->paddr);
  }
 }

 return 0;
}
