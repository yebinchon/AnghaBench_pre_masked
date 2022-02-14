
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;
struct sci_port {long hscif_tot; long rx_fifo_timeout; int rx_fifo_timer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 struct uart_port* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,long*) ;
 int VAR_3 ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (int *,int ,int ) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6,
    size_t VAR_7)
{
 struct uart_port *VAR_8 = FUNC_0(VAR_4);
 struct sci_port *VAR_9 = FUNC_4(VAR_8);
 int VAR_10;
 long VAR_11;

 VAR_10 = FUNC_1(VAR_6, 0, &VAR_11);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->type == VAR_2) {
  if (VAR_11 < 0 || VAR_11 > 3)
   return -VAR_0;
  VAR_9->hscif_tot = VAR_11 << VAR_1;
 } else {
  VAR_9->rx_fifo_timeout = VAR_11;
  FUNC_2(VAR_8, 1);
  if (VAR_11 > 0)
   FUNC_3(&VAR_9->rx_fifo_timer, VAR_3, 0);
 }

 return VAR_7;
}
