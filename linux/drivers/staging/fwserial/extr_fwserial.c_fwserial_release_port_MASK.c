
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ console; } ;
struct fwtty_port {int con_data; TYPE_2__* fwcon_ops; TYPE_1__ port; int lock; int peer; int max_payload; int tx_fifo; } ;
struct TYPE_4__ {int (* notify ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fwtty_port*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct fwtty_port *VAR_2, bool VAR_3)
{

 if (VAR_3)
  FUNC_2(VAR_2, 0);

 FUNC_4(&VAR_2->lock);


 VAR_2->max_payload = FUNC_3(VAR_1);
 FUNC_1(&VAR_2->tx_fifo, VAR_2->max_payload);

 FUNC_0(VAR_2->peer, ((void*)0));
 FUNC_5(&VAR_2->lock);

 if (VAR_2->port.console && VAR_2->fwcon_ops->notify)
  (*VAR_2->fwcon_ops->notify)(VAR_0, VAR_2->con_data);
}
