
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {scalar_t__ field; } ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {int index; struct vb2_queue* vb2_queue; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; struct delta_dev* dev; } ;
struct TYPE_2__ {int vb2_buf; } ;
struct delta_au {int prepared; int paddr; int vaddr; TYPE_1__ vbuf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int *) ;
 struct delta_au* FUNC_1 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_2 (struct vb2_buffer*) ;
 int FUNC_3 (int *,int ) ;
 struct delta_ctx* FUNC_4 (struct vb2_queue*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct vb2_buffer *VAR_2)
{
 struct vb2_queue *VAR_3 = VAR_2->vb2_queue;
 struct delta_ctx *VAR_4 = FUNC_4(VAR_3);
 struct delta_dev *VAR_5 = VAR_4->dev;
 struct vb2_v4l2_buffer *VAR_6 = FUNC_2(VAR_2);
 struct delta_au *VAR_7 = FUNC_1(VAR_6);

 if (!VAR_7->prepared) {

  VAR_7->vaddr = FUNC_5(&VAR_7->vbuf.vb2_buf, 0);
  VAR_7->paddr = FUNC_3
    (&VAR_7->vbuf.vb2_buf, 0);
  VAR_7->prepared = 1;
  FUNC_0(VAR_5->dev, "%s au[%d] prepared; virt=0x%p, phy=0x%pad\n",
   VAR_4->name, VAR_2->index, VAR_7->vaddr, &VAR_7->paddr);
 }

 if (VAR_6->field == VAR_0)
  VAR_6->field = VAR_1;

 return 0;
}
