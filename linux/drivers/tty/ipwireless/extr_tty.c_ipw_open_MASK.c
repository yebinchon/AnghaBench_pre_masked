
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipw_tty* driver_data; int index; } ;
struct TYPE_2__ {scalar_t__ count; int low_latency; struct tty_struct* tty; } ;
struct ipw_tty {scalar_t__ tty_type; int ipw_tty_mutex; int network; TYPE_1__ port; scalar_t__ tx_bytes_queued; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ipw_tty* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct ipw_tty *VAR_4 = FUNC_0(VAR_2->index);

 if (!VAR_4)
  return -VAR_0;

 FUNC_2(&VAR_4->ipw_tty_mutex);
 if (VAR_4->port.count == 0)
  VAR_4->tx_bytes_queued = 0;

 VAR_4->port.count++;

 VAR_4->port.tty = VAR_2;
 VAR_2->driver_data = VAR_4;
 VAR_4->port.low_latency = 1;

 if (VAR_4->tty_type == VAR_1)
  FUNC_1(VAR_4->network);

 FUNC_3(&VAR_4->ipw_tty_mutex);

 return 0;
}
