
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue_ops {int buf_release; int buf_queue; int buf_prepare; int buf_setup; } ;
struct videobuf_queue {int type; int field; unsigned int msize; int stream; int wait; int vb_lock; struct videobuf_qtype_ops* int_ops; struct videobuf_queue_ops const* ops; void* priv_data; struct device* dev; struct mutex* ext_lock; int * irqlock; } ;
struct videobuf_qtype_ops {int dummy; } ;
struct mutex {int dummy; } ;
struct device {int dummy; } ;
typedef int spinlock_t ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct videobuf_queue*,int ,int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct videobuf_queue *VAR_0,
    const struct videobuf_queue_ops *VAR_1,
    struct device *VAR_2,
    spinlock_t *VAR_3,
    enum v4l2_buf_type VAR_4,
    enum v4l2_field VAR_5,
    unsigned int VAR_6,
    void *VAR_7,
    struct videobuf_qtype_ops *VAR_8,
    struct mutex *VAR_9)
{
 FUNC_0(!VAR_0);
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->irqlock = VAR_3;
 VAR_0->ext_lock = VAR_9;
 VAR_0->dev = VAR_2;
 VAR_0->type = VAR_4;
 VAR_0->field = VAR_5;
 VAR_0->msize = VAR_6;
 VAR_0->ops = VAR_1;
 VAR_0->priv_data = VAR_7;
 VAR_0->int_ops = VAR_8;


 FUNC_0(!VAR_0->ops->buf_setup);
 FUNC_0(!VAR_0->ops->buf_prepare);
 FUNC_0(!VAR_0->ops->buf_queue);
 FUNC_0(!VAR_0->ops->buf_release);


 FUNC_0(!VAR_3);


 FUNC_0(!VAR_0->int_ops);

 FUNC_4(&VAR_0->vb_lock);
 FUNC_2(&VAR_0->wait);
 FUNC_1(&VAR_0->stream);
}
