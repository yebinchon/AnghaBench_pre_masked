
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int tuple_t ;
struct pcmcia_device {unsigned int config_flags; int vpp; int io_lines; TYPE_7__** resource; int config_index; int dev; int card_addr; TYPE_3__* socket; } ;
struct TYPE_22__ {scalar_t__ nwin; TYPE_1__* win; } ;
struct TYPE_23__ {int nwin; int flags; TYPE_6__* win; } ;
struct TYPE_19__ {int present; int* param; } ;
struct TYPE_18__ {int present; int* param; } ;
struct TYPE_13__ {int flags; TYPE_8__ mem; TYPE_9__ io; TYPE_5__ vpp1; TYPE_4__ vcc; int index; } ;
struct pcmcia_cfg_mem {int (* conf_check ) (struct pcmcia_device*,int ) ;int priv_data; TYPE_10__ dflt; struct pcmcia_device* p_dev; } ;
typedef TYPE_8__ cistpl_mem_t ;
typedef TYPE_9__ cistpl_io_t ;
typedef TYPE_10__ cistpl_cftable_entry_t ;
struct TYPE_14__ {TYPE_10__ cftable_entry; } ;
typedef TYPE_11__ cisparse_t ;
struct TYPE_21__ {int start; int end; int flags; } ;
struct TYPE_20__ {scalar_t__ len; scalar_t__ base; } ;
struct TYPE_16__ {unsigned int Vcc; } ;
struct TYPE_17__ {TYPE_2__ socket; } ;
struct TYPE_15__ {scalar_t__ host_addr; scalar_t__ len; int card_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pcmcia_device*,int ) ;

__attribute__((used)) static int FUNC_3(tuple_t *VAR_12, cisparse_t *VAR_13, void *VAR_14)
{
 struct pcmcia_cfg_mem *VAR_15 = VAR_14;
 struct pcmcia_device *VAR_16 = VAR_15->p_dev;
 cistpl_cftable_entry_t *VAR_17 = &VAR_13->cftable_entry;
 cistpl_cftable_entry_t *VAR_18 = &VAR_15->dflt;
 unsigned int VAR_19 = VAR_16->config_flags;
 unsigned int VAR_20 = VAR_16->socket->socket.Vcc;

 FUNC_0(&VAR_16->dev, "testing configuration %x, autoconf %x\n",
  VAR_17->index, VAR_19);


 VAR_15->p_dev->config_index = VAR_17->index;
 if (VAR_17->flags & VAR_1)
  VAR_15->dflt = *VAR_17;


 if (VAR_19 & VAR_5) {
  if (VAR_17->vcc.present & (1 << VAR_3)) {
   if (VAR_20 != VAR_17->vcc.param[VAR_3] / 10000)
    return -VAR_10;
  } else if (VAR_18->vcc.present & (1 << VAR_3)) {
   if (VAR_20 != VAR_18->vcc.param[VAR_3] / 10000)
    return -VAR_10;
  }
 }


 if (VAR_19 & VAR_8) {
  if (VAR_17->vpp1.present & (1 << VAR_3))
   VAR_16->vpp = VAR_17->vpp1.param[VAR_3] / 10000;
  else if (VAR_18->vpp1.present & (1 << VAR_3))
   VAR_16->vpp =
    VAR_18->vpp1.param[VAR_3] / 10000;
 }


 if ((VAR_19 & VAR_4) && (VAR_17->flags & VAR_0))
  VAR_16->config_flags |= VAR_9;



 if (VAR_19 & VAR_6) {
  cistpl_io_t *VAR_21 = (VAR_17->io.nwin) ? &VAR_17->io : &VAR_18->io;
  int VAR_22 = 0;

  VAR_16->resource[0]->start = VAR_16->resource[0]->end = 0;
  VAR_16->resource[1]->start = VAR_16->resource[1]->end = 0;
  if (VAR_21->nwin == 0)
   return -VAR_10;

  VAR_16->resource[0]->flags &= ~VAR_11;
  VAR_16->resource[0]->flags |=
     FUNC_1(VAR_21->flags);
  if (VAR_21->nwin > 1) {



   VAR_22 = (VAR_21->win[1].len > VAR_21->win[0].len);
   VAR_16->resource[1]->flags = VAR_16->resource[0]->flags;
   VAR_16->resource[1]->start = VAR_21->win[1-VAR_22].base;
   VAR_16->resource[1]->end = VAR_21->win[1-VAR_22].len;
  }
  VAR_16->resource[0]->start = VAR_21->win[VAR_22].base;
  VAR_16->resource[0]->end = VAR_21->win[VAR_22].len;
  VAR_16->io_lines = VAR_21->flags & VAR_2;
 }


 if (VAR_19 & VAR_7) {

  cistpl_mem_t *VAR_23 = (VAR_17->mem.nwin) ? &VAR_17->mem : &VAR_18->mem;

  VAR_16->resource[2]->start = VAR_16->resource[2]->end = 0;
  if (VAR_23->nwin == 0)
   return -VAR_10;

  VAR_16->resource[2]->start = VAR_23->win[0].host_addr;
  VAR_16->resource[2]->end = VAR_23->win[0].len;
  if (VAR_16->resource[2]->end < 0x1000)
   VAR_16->resource[2]->end = 0x1000;
  VAR_16->card_addr = VAR_23->win[0].card_addr;
 }

 FUNC_0(&VAR_16->dev,
  "checking configuration %x: %pr %pr %pr (%d lines)\n",
  VAR_16->config_index, VAR_16->resource[0], VAR_16->resource[1],
  VAR_16->resource[2], VAR_16->io_lines);

 return VAR_15->conf_check(VAR_16, VAR_15->priv_data);
}
