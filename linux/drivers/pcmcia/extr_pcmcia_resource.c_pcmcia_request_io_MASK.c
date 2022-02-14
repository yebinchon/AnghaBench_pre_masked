
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; int flags; scalar_t__ end; } ;
struct pcmcia_socket {int state; int ops_mutex; } ;
struct pcmcia_device {int _io; int dev; int io_lines; TYPE_1__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_2__ {int state; struct resource* io; } ;
typedef TYPE_1__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcmcia_socket*,struct resource*,int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcmcia_socket*,struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;

int FUNC_6(struct pcmcia_device *VAR_4)
{
 struct pcmcia_socket *VAR_5 = VAR_4->socket;
 config_t *VAR_6 = VAR_4->function_config;
 int VAR_7 = -VAR_2;

 FUNC_2(&VAR_5->ops_mutex);
 FUNC_1(&VAR_4->dev, "pcmcia_request_io: %pR , %pR",
  &VAR_6->io[0], &VAR_6->io[1]);

 if (!(VAR_5->state & VAR_3)) {
  FUNC_1(&VAR_4->dev, "pcmcia_request_io: No card present\n");
  goto out;
 }

 if (VAR_6->state & VAR_1) {
  FUNC_1(&VAR_4->dev, "Configuration is locked\n");
  goto out;
 }
 if (VAR_6->state & VAR_0) {
  FUNC_1(&VAR_4->dev, "IO already configured\n");
  goto out;
 }

 VAR_7 = FUNC_0(VAR_5, &VAR_6->io[0], VAR_4->io_lines);
 if (VAR_7)
  goto out;

 if (VAR_6->io[1].end) {
  VAR_7 = FUNC_0(VAR_5, &VAR_6->io[1], VAR_4->io_lines);
  if (VAR_7) {
   struct resource VAR_8 = VAR_6->io[0];

   FUNC_4(VAR_5, &VAR_6->io[0]);

   VAR_6->io[0].end = FUNC_5(&VAR_8);
   VAR_6->io[0].start = VAR_8.start;
   VAR_6->io[0].flags = VAR_8.flags;
   goto out;
  }
 } else
  VAR_6->io[1].start = 0;

 VAR_6->state |= VAR_0;
 VAR_4->_io = 1;

 FUNC_1(&VAR_4->dev, "pcmcia_request_io succeeded: %pR , %pR",
  &VAR_6->io[0], &VAR_6->io[1]);
out:
 FUNC_3(&VAR_5->ops_mutex);

 return VAR_7;
}
