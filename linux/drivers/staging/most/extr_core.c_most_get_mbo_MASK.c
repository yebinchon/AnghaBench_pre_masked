
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct most_interface {TYPE_1__* p; } ;
struct TYPE_8__ {int buffer_size; } ;
struct TYPE_7__ {scalar_t__ num_buffers; struct core_component* comp; scalar_t__ refs; } ;
struct TYPE_6__ {scalar_t__ num_buffers; struct core_component* comp; scalar_t__ refs; } ;
struct most_channel {TYPE_4__ cfg; int fifo_lock; int fifo; TYPE_3__ pipe1; TYPE_2__ pipe0; } ;
struct mbo {int* num_buffers_ptr; int buffer_length; } ;
struct core_component {int dummy; } ;
struct TYPE_5__ {struct most_channel** channel; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mbo* FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

struct mbo *FUNC_5(struct most_interface *VAR_1, int VAR_2,
    struct core_component *VAR_3)
{
 struct mbo *VAR_4;
 struct most_channel *VAR_5;
 unsigned long VAR_6;
 int *VAR_7;

 VAR_5 = VAR_1->p->channel[VAR_2];
 if (FUNC_4(!VAR_5))
  return ((void*)0);

 if (VAR_5->pipe0.refs && VAR_5->pipe1.refs &&
     ((VAR_3 == VAR_5->pipe0.comp && VAR_5->pipe0.num_buffers <= 0) ||
      (VAR_3 == VAR_5->pipe1.comp && VAR_5->pipe1.num_buffers <= 0)))
  return ((void*)0);

 if (VAR_3 == VAR_5->pipe0.comp)
  VAR_7 = &VAR_5->pipe0.num_buffers;
 else if (VAR_3 == VAR_5->pipe1.comp)
  VAR_7 = &VAR_5->pipe1.num_buffers;
 else
  VAR_7 = &VAR_0;

 FUNC_2(&VAR_5->fifo_lock, VAR_6);
 if (FUNC_0(&VAR_5->fifo)) {
  FUNC_3(&VAR_5->fifo_lock, VAR_6);
  return ((void*)0);
 }
 VAR_4 = FUNC_1(&VAR_5->fifo);
 --*VAR_7;
 FUNC_3(&VAR_5->fifo_lock, VAR_6);

 VAR_4->num_buffers_ptr = VAR_7;
 VAR_4->buffer_length = VAR_5->cfg.buffer_size;
 return VAR_4;
}
