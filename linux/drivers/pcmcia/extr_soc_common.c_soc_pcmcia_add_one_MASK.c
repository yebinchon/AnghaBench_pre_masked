
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_15__ {int start; } ;
struct TYPE_17__ {int parent; } ;
struct TYPE_16__ {int features; unsigned long io_offset; TYPE_9__ dev; int map_size; scalar_t__ irq_mask; int * resource_ops; int * ops; } ;
struct TYPE_14__ {scalar_t__ expires; } ;
struct TYPE_12__ {int notifier_call; } ;
struct soc_pcmcia_socket {TYPE_3__ res_skt; TYPE_3__ res_io; TYPE_3__ res_mem; TYPE_3__ res_attr; int * virt_io; TYPE_6__ socket; TYPE_2__ poll_timer; TYPE_11__ cpufreq_nb; TYPE_1__* ops; int status; int cs_state; } ;
struct TYPE_13__ {scalar_t__ frequency_change; int (* set_timing ) (struct soc_pcmcia_socket*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_11__*,int ) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_9__*,int *) ;
 TYPE_3__ VAR_8 ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct soc_pcmcia_socket*) ;
 int FUNC_11 (struct soc_pcmcia_socket*) ;
 int FUNC_12 (struct soc_pcmcia_socket*) ;
 int FUNC_13 (struct soc_pcmcia_socket*) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;

int FUNC_15(struct soc_pcmcia_socket *VAR_14)
{
 int VAR_15;

 VAR_14->cs_state = VAR_6;

 FUNC_14(&VAR_14->poll_timer, VAR_13, 0);
 VAR_14->poll_timer.expires = VAR_9 + VAR_3;

 VAR_15 = FUNC_9(&VAR_8, &VAR_14->res_skt);
 if (VAR_15)
  goto out_err_1;

 VAR_15 = FUNC_9(&VAR_14->res_skt, &VAR_14->res_io);
 if (VAR_15)
  goto out_err_2;

 VAR_15 = FUNC_9(&VAR_14->res_skt, &VAR_14->res_mem);
 if (VAR_15)
  goto out_err_3;

 VAR_15 = FUNC_9(&VAR_14->res_skt, &VAR_14->res_attr);
 if (VAR_15)
  goto out_err_4;

 VAR_14->virt_io = FUNC_4(VAR_14->res_io.start, 0x10000);
 if (VAR_14->virt_io == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto out_err_5;
 }






 VAR_14->ops->set_timing(VAR_14);

 VAR_15 = FUNC_11(VAR_14);
 if (VAR_15)
  goto out_err_6;

 VAR_14->socket.ops = &VAR_12;
 VAR_14->socket.features = VAR_5|VAR_4;
 VAR_14->socket.resource_ops = &VAR_10;
 VAR_14->socket.irq_mask = 0;
 VAR_14->socket.map_size = VAR_2;
 VAR_14->socket.io_offset = (unsigned long)VAR_14->virt_io;

 VAR_14->status = FUNC_10(VAR_14);
 VAR_15 = FUNC_6(&VAR_14->socket);
 if (VAR_15)
  goto out_err_7;

 VAR_15 = FUNC_3(&VAR_14->socket.dev, &VAR_7);
 if (VAR_15)
  goto out_err_8;

 return VAR_15;

 out_err_8:
 FUNC_1(&VAR_14->poll_timer);
 FUNC_7(&VAR_14->socket);

 out_err_7:
 FUNC_12(VAR_14);
 out_err_6:
 FUNC_5(VAR_14->virt_io);
 out_err_5:
 FUNC_8(&VAR_14->res_attr);
 out_err_4:
 FUNC_8(&VAR_14->res_mem);
 out_err_3:
 FUNC_8(&VAR_14->res_io);
 out_err_2:
 FUNC_8(&VAR_14->res_skt);
 out_err_1:

 return VAR_15;
}
