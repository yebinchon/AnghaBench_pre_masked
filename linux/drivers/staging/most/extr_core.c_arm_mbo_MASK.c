
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* comp; scalar_t__ refs; } ;
struct TYPE_6__ {TYPE_1__* comp; scalar_t__ refs; } ;
struct most_channel {int channel_id; int iface; TYPE_4__ pipe1; TYPE_2__ pipe0; int fifo_lock; int fifo; scalar_t__ is_poisoned; } ;
struct mbo {int list; int * num_buffers_ptr; struct most_channel* context; } ;
struct TYPE_7__ {int (* tx_completion ) (int ,int ) ;} ;
struct TYPE_5__ {int (* tx_completion ) (int ,int ) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mbo*) ;

__attribute__((used)) static void FUNC_6(struct mbo *VAR_0)
{
 unsigned long VAR_1;
 struct most_channel *VAR_2;

 VAR_2 = VAR_0->context;

 if (VAR_2->is_poisoned) {
  FUNC_5(VAR_0);
  return;
 }

 FUNC_1(&VAR_2->fifo_lock, VAR_1);
 ++*VAR_0->num_buffers_ptr;
 FUNC_0(&VAR_0->list, &VAR_2->fifo);
 FUNC_2(&VAR_2->fifo_lock, VAR_1);

 if (VAR_2->pipe0.refs && VAR_2->pipe0.comp->tx_completion)
  VAR_2->pipe0.comp->tx_completion(VAR_2->iface, VAR_2->channel_id);

 if (VAR_2->pipe1.refs && VAR_2->pipe1.comp->tx_completion)
  VAR_2->pipe1.comp->tx_completion(VAR_2->iface, VAR_2->channel_id);
}
