
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_plug_params {int fifo_len; int fifo_lo; int fifo_hi; int status_lo; int status_hi; } ;
struct TYPE_3__ {scalar_t__ console; } ;
struct fwtty_port {int device; int con_data; TYPE_2__* fwcon_ops; TYPE_1__ port; int lock; int max_payload; int tx_fifo; } ;
struct fwtty_peer {scalar_t__ guid; int unit; struct fwtty_port* port; int fifo_len; int max_payload; void* fifo_addr; void* status_addr; } ;
struct TYPE_4__ {int (* notify ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,unsigned long long,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct fwtty_peer*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct fwtty_peer *VAR_2,
     struct virt_plug_params *VAR_3)
{
 struct fwtty_port *VAR_4 = VAR_2->port;

 VAR_2->status_addr = FUNC_1(VAR_3->status_hi, VAR_3->status_lo);
 VAR_2->fifo_addr = FUNC_1(VAR_3->fifo_hi, VAR_3->fifo_lo);
 VAR_2->fifo_len = FUNC_0(VAR_3->fifo_len);
 FUNC_6(VAR_2, VAR_1);


 FUNC_7(&VAR_4->lock);
 VAR_4->max_payload = FUNC_5(VAR_2->max_payload, VAR_2->fifo_len);
 FUNC_3(&VAR_4->tx_fifo, VAR_4->max_payload);
 FUNC_8(&VAR_2->port->lock);

 if (VAR_4->port.console && VAR_4->fwcon_ops->notify)
  (*VAR_4->fwcon_ops->notify)(VAR_0, VAR_4->con_data);

 FUNC_4(&VAR_2->unit, "peer (guid:%016llx) connected on %s\n",
     (unsigned long long)VAR_2->guid, FUNC_2(VAR_4->device));
}
