
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct videobuf_queue {int dev; } ;
struct videobuf_dmabuf {int dummy; } ;
struct TYPE_5__ {int state; } ;
struct bttv_buffer {TYPE_2__ vb; int top; int bottom; } ;
struct TYPE_4__ {int pci; } ;
struct bttv {TYPE_1__ c; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct videobuf_dmabuf*) ;
 int FUNC_4 (int ,struct videobuf_dmabuf*) ;
 struct videobuf_dmabuf* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct videobuf_queue*,TYPE_2__*,int ,int ) ;

void
FUNC_7(struct videobuf_queue *VAR_1,struct bttv *VAR_2, struct bttv_buffer *VAR_3)
{
 struct videobuf_dmabuf *VAR_4=FUNC_5(&VAR_3->vb);

 FUNC_0(FUNC_2());
 FUNC_6(VAR_1, &VAR_3->vb, 0, 0);
 FUNC_4(VAR_1->dev, VAR_4);
 FUNC_3(VAR_4);
 FUNC_1(VAR_2->c.pci,&VAR_3->bottom);
 FUNC_1(VAR_2->c.pci,&VAR_3->top);
 VAR_3->vb.state = VAR_0;
}
