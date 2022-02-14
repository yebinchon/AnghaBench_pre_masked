
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct most_interface {TYPE_1__* p; } ;
struct TYPE_6__ {scalar_t__ num_buffers; struct core_component* comp; scalar_t__ refs; } ;
struct TYPE_5__ {scalar_t__ num_buffers; struct core_component* comp; scalar_t__ refs; } ;
struct most_channel {int fifo_lock; int fifo; TYPE_3__ pipe1; TYPE_2__ pipe0; } ;
struct core_component {int dummy; } ;
struct TYPE_4__ {struct most_channel** channel; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct most_interface *VAR_1, int VAR_2,
      struct core_component *VAR_3)
{
 struct most_channel *VAR_4 = VAR_1->p->channel[VAR_2];
 unsigned long VAR_5;
 int VAR_6;

 if (FUNC_3(!VAR_4))
  return -VAR_0;

 if (VAR_4->pipe0.refs && VAR_4->pipe1.refs &&
     ((VAR_3 == VAR_4->pipe0.comp && VAR_4->pipe0.num_buffers <= 0) ||
      (VAR_3 == VAR_4->pipe1.comp && VAR_4->pipe1.num_buffers <= 0)))
  return 0;

 FUNC_1(&VAR_4->fifo_lock, VAR_5);
 VAR_6 = FUNC_0(&VAR_4->fifo);
 FUNC_2(&VAR_4->fifo_lock, VAR_5);
 return !VAR_6;
}
