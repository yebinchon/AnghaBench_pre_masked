
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_6__ {TYPE_1__* adapter; } ;
struct TYPE_5__ {int kref; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0->adapter->kref);
 VAR_3 = FUNC_2(VAR_0);

 if (VAR_3) {
  FUNC_1(&VAR_0->adapter->kref, VAR_1);
  FUNC_3(VAR_0, "STARTUP_ERROR", 0);
  return VAR_3;
 }

 return 0;
}
