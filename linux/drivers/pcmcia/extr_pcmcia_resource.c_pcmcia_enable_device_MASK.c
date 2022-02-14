
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef unsigned char u16 ;
struct TYPE_15__ {int flags; scalar_t__ io_irq; int Vpp; } ;
struct pcmcia_socket {int state; int functions; int ops_mutex; TYPE_2__* io; TYPE_3__* ops; int lock_count; TYPE_7__ socket; scalar_t__ pcmcia_irq; } ;
struct pcmcia_device {unsigned int config_flags; int config_regs; unsigned int config_base; unsigned char config_index; int _locked; int dev; int vpp; scalar_t__ _io; TYPE_5__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_13__ {int map; int stop; int start; int flags; int speed; } ;
typedef TYPE_4__ pccard_io_map ;
struct TYPE_14__ {int state; TYPE_9__* io; } ;
typedef TYPE_5__ config_t ;
struct TYPE_16__ {int start; } ;
struct TYPE_12__ {int (* set_io_map ) (struct pcmcia_socket*,TYPE_4__*) ;scalar_t__ (* set_socket ) (struct pcmcia_socket*,TYPE_7__*) ;} ;
struct TYPE_11__ {int Config; TYPE_1__* res; } ;
struct TYPE_10__ {int flags; int end; int start; } ;


 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned char VAR_26 ;
 int VAR_27 ;


 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int VAR_43 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pcmcia_socket*,int,unsigned int,int,unsigned char*) ;
 unsigned char FUNC_6 (TYPE_9__*) ;
 scalar_t__ FUNC_7 (struct pcmcia_socket*,TYPE_7__*) ;
 scalar_t__ FUNC_8 (struct pcmcia_socket*,TYPE_7__*) ;
 int FUNC_9 (struct pcmcia_socket*,TYPE_4__*) ;

int FUNC_10(struct pcmcia_device *VAR_44)
{
 int VAR_45;
 unsigned int VAR_46;
 struct pcmcia_socket *VAR_47 = VAR_44->socket;
 config_t *VAR_48;
 pccard_io_map VAR_49;
 unsigned char VAR_50 = 0;
 unsigned char VAR_51 = 0;
 unsigned char VAR_52 = 0;
 unsigned int VAR_53 = VAR_44->config_flags;

 if (!(VAR_47->state & VAR_39))
  return -VAR_25;

 FUNC_3(&VAR_47->ops_mutex);
 VAR_48 = VAR_44->function_config;
 if (VAR_48->state & VAR_10) {
  FUNC_4(&VAR_47->ops_mutex);
  FUNC_0(&VAR_44->dev, "Configuration is locked\n");
  return -VAR_23;
 }


 VAR_47->socket.Vpp = VAR_44->vpp;
 if (VAR_47->ops->set_socket(VAR_47, &VAR_47->socket)) {
  FUNC_4(&VAR_47->ops_mutex);
  FUNC_1(&VAR_44->dev, "Unable to set socket state\n");
  return -VAR_24;
 }


 if (VAR_44->_io || VAR_53 & VAR_13)
  VAR_53 |= VAR_12;
 if (VAR_53 & VAR_12)
  VAR_47->socket.flags |= VAR_40;
 if (VAR_53 & VAR_16)
  VAR_47->socket.flags |= VAR_42 | VAR_40;
 if (VAR_53 & VAR_15) {
  VAR_47->socket.flags |= VAR_41;
  VAR_50 = VAR_0;
  if (!(VAR_44->config_regs & VAR_38))
   FUNC_1(&VAR_44->dev, "speaker requested, but "
           "PRESENT_STATUS not set!\n");
 }
 if (VAR_53 & VAR_13)
  VAR_47->socket.io_irq = VAR_47->pcmcia_irq;
 else
  VAR_47->socket.io_irq = 0;
 if (VAR_53 & VAR_11) {
  VAR_44->config_regs |= VAR_33;
  VAR_51 = VAR_26;
 }
 VAR_47->ops->set_socket(VAR_47, &VAR_47->socket);
 VAR_47->lock_count++;

 FUNC_0(&VAR_44->dev,
  "enable_device: V %d, flags %x, base %x, regs %x, idx %x\n",
  VAR_44->vpp, VAR_53, VAR_44->config_base, VAR_44->config_regs,
  VAR_44->config_index);


 VAR_46 = VAR_44->config_base;
 if (VAR_44->config_regs & VAR_32) {
  u16 VAR_54 = 0;
  FUNC_0(&VAR_44->dev, "clearing CISREG_SCR\n");
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_8)>>1, 1, &VAR_54);
 }
 if (VAR_44->config_regs & VAR_37) {
  u16 VAR_55 = 0;
  FUNC_0(&VAR_44->dev, "clearing CISREG_PRR\n");
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_7)>>1, 1, &VAR_55);
 }
 if (VAR_44->config_regs & VAR_36) {
  if (VAR_47->functions == 1) {
   VAR_52 = VAR_44->config_index & VAR_18;
  } else {
   VAR_52 = VAR_44->config_index & VAR_22;
   VAR_52 |= VAR_19|VAR_20;
   if (VAR_44->config_regs & VAR_34)
    VAR_52 |= VAR_17;
  }
  if ((VAR_53 & VAR_13) &&
   !(VAR_53 & VAR_14))
   VAR_52 |= VAR_21;
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_2)>>1, 1, &VAR_52);
  FUNC_2(40);
 }
 if (VAR_44->config_regs & VAR_38)
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_1)>>1, 1, &VAR_50);

 if (VAR_44->config_regs & VAR_33)
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_3)>>1, 1,
     &VAR_51);

 if (VAR_44->config_regs & VAR_34) {
  u8 VAR_56 = VAR_48->io[0].start & 0xff;
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_4)>>1, 1, &VAR_56);
  VAR_56 = (VAR_48->io[0].start >> 8) & 0xff;
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_5)>>1, 1, &VAR_56);
 }
 if (VAR_44->config_regs & VAR_35) {
  u8 VAR_57 = FUNC_6(&VAR_48->io[0]) + FUNC_6(&VAR_48->io[1]) - 1;
  FUNC_5(VAR_47, 1, (VAR_46 + VAR_6)>>1, 1, &VAR_57);
 }


 if (VAR_48->state & VAR_9) {
  VAR_49.speed = VAR_43;
  for (VAR_45 = 0; VAR_45 < VAR_31; VAR_45++)
   if (VAR_47->io[VAR_45].res) {
    VAR_49.map = VAR_45;
    VAR_49.flags = VAR_29;
    switch (VAR_47->io[VAR_45].res->flags & VAR_27) {
    case 129:
     VAR_49.flags |= VAR_28; break;
    case 128:
     VAR_49.flags |= VAR_30; break;
    default:
     break;
    }
    VAR_49.start = VAR_47->io[VAR_45].res->start;
    VAR_49.stop = VAR_47->io[VAR_45].res->end;
    VAR_47->ops->set_io_map(VAR_47, &VAR_49);
    VAR_47->io[VAR_45].Config++;
   }
 }

 VAR_48->state |= VAR_10;
 VAR_44->_locked = 1;
 FUNC_4(&VAR_47->ops_mutex);
 return 0;
}
