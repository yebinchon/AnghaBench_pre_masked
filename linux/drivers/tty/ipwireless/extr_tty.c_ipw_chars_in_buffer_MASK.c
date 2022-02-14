
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipw_tty* driver_data; } ;
struct TYPE_2__ {int count; } ;
struct ipw_tty {int tx_bytes_queued; TYPE_1__ port; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0)
{
 struct ipw_tty *VAR_1 = VAR_0->driver_data;

 if (!VAR_1)
  return 0;

 if (!VAR_1->port.count)
  return 0;

 return VAR_1->tx_bytes_queued;
}
