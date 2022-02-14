
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_ptp_ops {int (* port_disable ) (struct mv88e6xxx_chip*,int) ;} ;
struct mv88e6xxx_port_hwtstamp {int port_id; int rx_queue2; int rx_queue; } ;
struct mv88e6xxx_chip {struct mv88e6xxx_port_hwtstamp* port_hwtstamp; TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct mv88e6xxx_ptp_ops* ptp_ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_0, int VAR_1)
{
 const struct mv88e6xxx_ptp_ops *VAR_2 = VAR_0->info->ops->ptp_ops;
 struct mv88e6xxx_port_hwtstamp *VAR_3 = &VAR_0->port_hwtstamp[VAR_1];

 VAR_3->port_id = VAR_1;

 FUNC_0(&VAR_3->rx_queue);
 FUNC_0(&VAR_3->rx_queue2);

 if (VAR_2->port_disable)
  return VAR_2->port_disable(VAR_0, VAR_1);

 return 0;
}
