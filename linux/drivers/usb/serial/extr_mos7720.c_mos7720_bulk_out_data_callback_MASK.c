
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; TYPE_2__* dev; struct moschip_port* context; } ;
struct moschip_port {TYPE_1__* port; scalar_t__ open; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int port; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct moschip_port *VAR_1;
 int VAR_2 = VAR_0->status;

 if (VAR_2) {
  FUNC_0(&VAR_0->dev->dev, "nonzero write bulk status received:%d\n", VAR_2);
  return;
 }

 VAR_1 = VAR_0->context;
 if (!VAR_1) {
  FUNC_0(&VAR_0->dev->dev, "NULL mos7720_port pointer\n");
  return ;
 }

 if (VAR_1->open)
  FUNC_1(&VAR_1->port->port);
}
