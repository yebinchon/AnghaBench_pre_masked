
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct goldfish_pipe_dev {int irq_tasklet; int lock; TYPE_2__* buffers; scalar_t__ base; int * magic; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* signalled_pipe_buffers; } ;
struct TYPE_3__ {int flags; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct goldfish_pipe_dev*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 unsigned long VAR_9;
 struct goldfish_pipe_dev *VAR_10 = VAR_6;

 if (VAR_10->magic != &VAR_4)
  return VAR_1;


 FUNC_2(&VAR_10->lock, VAR_9);

 VAR_7 = FUNC_0(VAR_10->base + VAR_3);
 if (VAR_7 == 0) {
  FUNC_3(&VAR_10->lock, VAR_9);
  return VAR_1;
 }
 if (VAR_7 > VAR_2)
  VAR_7 = VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
  FUNC_1(VAR_10,
   VAR_10->buffers->signalled_pipe_buffers[VAR_8].id,
   VAR_10->buffers->signalled_pipe_buffers[VAR_8].flags);

 FUNC_3(&VAR_10->lock, VAR_9);

 FUNC_4(&VAR_10->irq_tasklet);
 return VAR_0;
}
