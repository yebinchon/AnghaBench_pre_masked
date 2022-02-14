
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct uart_amba_port {TYPE_3__ port; } ;
struct TYPE_5__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct uart_amba_port*) ;
 int FUNC_2 (int,struct uart_amba_port*,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct uart_amba_port *VAR_3)
{
 int VAR_4;


 FUNC_2(0, VAR_3, VAR_1);
 FUNC_2(0xffff, VAR_3, VAR_0);

 if (!VAR_2.state) {
  VAR_4 = FUNC_4(&VAR_2);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3->port.dev,
    "Failed to register AMBA-PL011 driver\n");
   return VAR_4;
  }
 }

 VAR_4 = FUNC_3(&VAR_2, &VAR_3->port);
 if (VAR_4)
  FUNC_1(VAR_3);

 return VAR_4;
}
