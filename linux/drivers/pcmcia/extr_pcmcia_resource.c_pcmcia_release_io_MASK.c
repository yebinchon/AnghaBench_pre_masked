
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_socket {int ops_mutex; } ;
struct pcmcia_device {scalar_t__ _io; TYPE_1__* function_config; struct pcmcia_socket* socket; } ;
struct TYPE_3__ {int state; TYPE_2__* io; } ;
typedef TYPE_1__ config_t ;
struct TYPE_4__ {scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pcmcia_socket*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_2)
{
 struct pcmcia_socket *VAR_3 = VAR_2->socket;
 int VAR_4 = -VAR_1;
 config_t *VAR_5;

 FUNC_0(&VAR_3->ops_mutex);
 if (!VAR_2->_io)
  goto out;

 VAR_5 = VAR_2->function_config;

 FUNC_2(VAR_3, &VAR_5->io[0]);

 if (VAR_5->io[1].end)
  FUNC_2(VAR_3, &VAR_5->io[1]);

 VAR_2->_io = 0;
 VAR_5->state &= ~VAR_0;

out:
 FUNC_1(&VAR_3->ops_mutex);

 return VAR_4;
}
