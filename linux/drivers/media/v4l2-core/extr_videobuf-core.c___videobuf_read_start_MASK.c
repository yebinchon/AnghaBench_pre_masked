
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct videobuf_queue {int reading; int irqlock; TYPE_2__** bufs; TYPE_1__* ops; int stream; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_5__ {int stream; } ;
struct TYPE_4__ {int (* buf_prepare ) (struct videobuf_queue*,TYPE_2__*,int) ;int (* buf_queue ) (struct videobuf_queue*,TYPE_2__*) ;int (* buf_setup ) (struct videobuf_queue*,unsigned int*,unsigned int*) ;} ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct videobuf_queue*,unsigned int,unsigned int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct videobuf_queue*,unsigned int*,unsigned int*) ;
 int FUNC_6 (struct videobuf_queue*,TYPE_2__*,int) ;
 int FUNC_7 (struct videobuf_queue*,TYPE_2__*) ;
 int FUNC_8 (struct videobuf_queue*) ;

__attribute__((used)) static int FUNC_9(struct videobuf_queue *VAR_2)
{
 enum v4l2_field VAR_3;
 unsigned long VAR_4 = 0;
 unsigned int VAR_5 = 0, VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_2->ops->buf_setup(VAR_2, &VAR_5, &VAR_6);
 if (VAR_5 < 2)
  VAR_5 = 2;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 VAR_6 = FUNC_0(VAR_6);

 VAR_7 = FUNC_1(VAR_2, VAR_5, VAR_6, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_3 = FUNC_8(VAR_2);
  VAR_7 = VAR_2->ops->buf_prepare(VAR_2, VAR_2->bufs[VAR_8], VAR_3);
  if (VAR_7)
   return VAR_7;
  FUNC_2(&VAR_2->bufs[VAR_8]->stream, &VAR_2->stream);
 }
 FUNC_3(VAR_2->irqlock, VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  VAR_2->ops->buf_queue(VAR_2, VAR_2->bufs[VAR_8]);
 FUNC_4(VAR_2->irqlock, VAR_4);
 VAR_2->reading = 1;
 return 0;
}
