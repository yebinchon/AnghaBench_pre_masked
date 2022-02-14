
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; } ;
struct vb2_v4l2_buffer {int flags; TYPE_1__ vb2_buf; } ;
struct vb2_queue {int dummy; } ;
struct vb2_buffer {int index; struct vb2_queue* vb2_queue; } ;
struct delta_frame {int prepared; int flags; int paddr; int vaddr; int info; int index; } ;
struct delta_dev {int dev; } ;
struct delta_ctx {int name; int frameinfo; struct delta_dev* dev; } ;


 int FUNC_0 (struct delta_ctx*,struct delta_frame*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int *) ;
 int FUNC_2 (int ,char*,int ,int) ;
 struct delta_frame* FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct delta_ctx* FUNC_6 (struct vb2_queue*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct vb2_buffer *VAR_0)
{
 struct vb2_queue *VAR_1 = VAR_0->vb2_queue;
 struct delta_ctx *VAR_2 = FUNC_6(VAR_1);
 struct delta_dev *VAR_3 = VAR_2->dev;
 struct vb2_v4l2_buffer *VAR_4 = FUNC_4(VAR_0);
 struct delta_frame *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;

 if (!VAR_5->prepared) {
  VAR_5->index = VAR_4->vb2_buf.index;
  VAR_5->vaddr = FUNC_7(&VAR_4->vb2_buf, 0);
  VAR_5->paddr = FUNC_5(&VAR_4->vb2_buf, 0);
  VAR_5->info = VAR_2->frameinfo;

  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (VAR_6) {
   FUNC_2(VAR_3->dev,
    "%s setup_frame() failed (%d)\n",
    VAR_2->name, VAR_6);
   return VAR_6;
  }
  VAR_5->prepared = 1;
  FUNC_1(VAR_3->dev,
   "%s frame[%d] prepared; virt=0x%p, phy=0x%pad\n",
   VAR_2->name, VAR_0->index, VAR_5->vaddr,
   &VAR_5->paddr);
 }

 VAR_5->flags = VAR_4->flags;

 return 0;
}
