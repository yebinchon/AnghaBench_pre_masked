
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_buffer {int state; } ;
struct viu_buf {struct videobuf_buffer vb; } ;
struct videobuf_queue {TYPE_1__* int_ops; } ;
struct TYPE_2__ {void* (* vaddr ) (struct videobuf_buffer*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 void* FUNC_2 (struct videobuf_buffer*) ;
 int FUNC_3 (struct videobuf_queue*,struct videobuf_buffer*) ;
 int FUNC_4 (struct videobuf_queue*,struct videobuf_buffer*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct videobuf_queue *VAR_1, struct viu_buf *VAR_2)
{
 struct videobuf_buffer *VAR_3 = &VAR_2->vb;
 void *VAR_4 = ((void*)0);

 FUNC_0(FUNC_1());

 FUNC_4(VAR_1, &VAR_2->vb, 0, 0);

 if (VAR_1->int_ops && VAR_1->int_ops->vaddr)
  VAR_4 = VAR_1->int_ops->vaddr(VAR_3);

 if (VAR_4)
  FUNC_3(VAR_1, &VAR_2->vb);

 VAR_2->vb.state = VAR_0;
}
