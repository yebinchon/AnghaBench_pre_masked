
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipw_tty* driver_data; } ;
struct TYPE_2__ {int count; } ;
struct ipw_tty {int tx_bytes_queued; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_3)
{
 struct ipw_tty *VAR_4 = VAR_3->driver_data;
 int VAR_5;


 if (!VAR_4)
  return -VAR_1;

 if (!VAR_4->port.count)
  return -VAR_0;

 VAR_5 = VAR_2 - VAR_4->tx_bytes_queued;
 if (VAR_5 < 0)
  VAR_5 = 0;

 return VAR_5;
}
