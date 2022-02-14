
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {int device_count; int ops_mutex; scalar_t__ pcmcia_pfc; } ;
struct pcmcia_driver {int name; int (* probe ) (struct pcmcia_device*) ;int owner; } ;
struct pcmcia_device {int vpp; int config_index; int irq; int* resource; scalar_t__ device_no; struct pcmcia_socket* socket; scalar_t__ config_regs; scalar_t__ config_base; int func; int function_config; } ;
struct device {int driver; } ;
struct TYPE_3__ {scalar_t__* rmask; scalar_t__ base; } ;
typedef TYPE_1__ cistpl_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pcmcia_socket*,int ,int ,TYPE_1__*) ;
 int FUNC_7 (struct pcmcia_socket*,int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct pcmcia_device*) ;
 struct pcmcia_device* FUNC_10 (struct device*) ;
 struct pcmcia_driver* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_4)
{
 struct pcmcia_device *VAR_5;
 struct pcmcia_driver *VAR_6;
 struct pcmcia_socket *VAR_7;
 cistpl_config_t VAR_8;
 int VAR_9 = 0;

 VAR_4 = FUNC_2(VAR_4);
 if (!VAR_4)
  return -VAR_2;

 VAR_5 = FUNC_10(VAR_4);
 VAR_6 = FUNC_11(VAR_4->driver);
 VAR_7 = VAR_5->socket;

 FUNC_0(VAR_4, "trying to bind to %s\n", VAR_6->name);

 if ((!VAR_6->probe) || (!VAR_5->function_config) ||
     (!FUNC_12(VAR_6->owner))) {
  VAR_9 = -VAR_1;
  goto put_dev;
 }


 VAR_9 = FUNC_6(VAR_5->socket, VAR_5->func, VAR_0,
    &VAR_8);
 if (!VAR_9) {
  VAR_5->config_base = VAR_8.base;
  VAR_5->config_regs = VAR_8.rmask[0];
  FUNC_0(VAR_4, "base %x, regs %x", VAR_5->config_base,
   VAR_5->config_regs);
 } else {
  FUNC_1(VAR_4,
    "pcmcia: could not parse base and rmask0 of CIS\n");
  VAR_5->config_base = 0;
  VAR_5->config_regs = 0;
 }

 VAR_9 = VAR_6->probe(VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_4, "binding to %s failed with %d\n",
      VAR_6->name, VAR_9);
  goto put_module;
 }
 FUNC_0(VAR_4, "%s bound: Vpp %d.%d, idx %x, IRQ %d", VAR_6->name,
  VAR_5->vpp/10, VAR_5->vpp%10, VAR_5->config_index, VAR_5->irq);
 FUNC_0(VAR_4, "resources: ioport %pR %pR iomem %pR %pR %pR",
  VAR_5->resource[0], VAR_5->resource[1], VAR_5->resource[2],
  VAR_5->resource[3], VAR_5->resource[4]);

 FUNC_4(&VAR_7->ops_mutex);
 if ((VAR_7->pcmcia_pfc) &&
     (VAR_5->socket->device_count == 1) && (VAR_5->device_no == 0))
  FUNC_7(VAR_7, VAR_3);
 FUNC_5(&VAR_7->ops_mutex);

put_module:
 if (VAR_9)
  FUNC_3(VAR_6->owner);
put_dev:
 if (VAR_9)
  FUNC_8(VAR_4);
 return VAR_9;
}
