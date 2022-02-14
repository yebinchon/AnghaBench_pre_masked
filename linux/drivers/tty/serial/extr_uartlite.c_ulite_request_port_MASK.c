
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uartlite_data {int * reg_ops; } ;
struct uart_port {scalar_t__ mapbase; int dev; int membase; struct uartlite_data* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,struct uart_port*,unsigned long long) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ,char*) ;
 int FUNC_5 (int ,struct uart_port*) ;
 int FUNC_6 (int ,int ,struct uart_port*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_8)
{
 struct uartlite_data *VAR_9 = VAR_8->private_data;
 int VAR_10;

 FUNC_2("ulite console: port=%p; port->mapbase=%llx\n",
   VAR_8, (unsigned long long) VAR_8->mapbase);

 if (!FUNC_4(VAR_8->mapbase, VAR_3, "uartlite")) {
  FUNC_0(VAR_8->dev, "Memory region busy\n");
  return -VAR_0;
 }

 VAR_8->membase = FUNC_1(VAR_8->mapbase, VAR_3);
 if (!VAR_8->membase) {
  FUNC_0(VAR_8->dev, "Unable to map registers\n");
  FUNC_3(VAR_8->mapbase, VAR_3);
  return -VAR_0;
 }

 VAR_9->reg_ops = &VAR_6;
 VAR_10 = FUNC_5(VAR_1, VAR_8);
 FUNC_6(VAR_2, VAR_1, VAR_8);
 VAR_10 = FUNC_5(VAR_4, VAR_8);

 if ((VAR_10 & VAR_5) != VAR_5)
  VAR_9->reg_ops = &VAR_7;

 return 0;
}
