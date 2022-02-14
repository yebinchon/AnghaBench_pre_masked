
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_ptp_ops {int rx_filters; int (* global_disable ) (struct mv88e6xxx_chip*) ;int (* port_disable ) (struct mv88e6xxx_chip*,int) ;int (* port_enable ) (struct mv88e6xxx_chip*,int) ;int (* global_enable ) (struct mv88e6xxx_chip*) ;} ;
struct mv88e6xxx_port_hwtstamp {int state; } ;
struct mv88e6xxx_chip {int enable_count; int dev; struct mv88e6xxx_port_hwtstamp* port_hwtstamp; TYPE_2__* info; } ;
struct hwtstamp_config {int tx_type; int rx_filter; scalar_t__ flags; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct mv88e6xxx_ptp_ops* ptp_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct mv88e6xxx_chip*) ;
 int FUNC_7 (struct mv88e6xxx_chip*,int) ;
 int FUNC_8 (struct mv88e6xxx_chip*,int) ;
 int FUNC_9 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_10(struct mv88e6xxx_chip *VAR_3, int VAR_4,
      struct hwtstamp_config *VAR_5)
{
 const struct mv88e6xxx_ptp_ops *VAR_6 = VAR_3->info->ops->ptp_ops;
 struct mv88e6xxx_port_hwtstamp *VAR_7 = &VAR_3->port_hwtstamp[VAR_4];
 bool VAR_8 = 0;




 FUNC_1(VAR_2, &VAR_7->state);


 if (VAR_5->flags)
  return -VAR_0;

 switch (VAR_5->tx_type) {
 case 129:
  VAR_8 = 0;
  break;
 case 128:
  VAR_8 = 1;
  break;
 default:
  return -VAR_1;
 }





 if (!(FUNC_0(VAR_5->rx_filter) & VAR_6->rx_filters)) {
  VAR_5->rx_filter = 139;
  FUNC_2(VAR_3->dev, "Unsupported rx_filter %d\n",
   VAR_5->rx_filter);
  return -VAR_1;
 }

 switch (VAR_5->rx_filter) {
 case 139:
  VAR_8 = 0;
  break;
 case 132:
 case 131:
 case 133:
 case 135:
 case 134:
 case 136:
 case 137:
 case 130:
 case 138:
  VAR_5->rx_filter = 137;
  break;
 case 140:
 default:
  VAR_5->rx_filter = 139;
  return -VAR_1;
 }

 FUNC_3(VAR_3);
 if (VAR_8) {
  VAR_3->enable_count += 1;
  if (VAR_3->enable_count == 1 && VAR_6->global_enable)
   VAR_6->global_enable(VAR_3);
  if (VAR_6->port_enable)
   VAR_6->port_enable(VAR_3, VAR_4);
 } else {
  if (VAR_6->port_disable)
   VAR_6->port_disable(VAR_3, VAR_4);
  VAR_3->enable_count -= 1;
  if (VAR_3->enable_count == 0 && VAR_6->global_disable)
   VAR_6->global_disable(VAR_3);
 }
 FUNC_4(VAR_3);




 if (VAR_8)
  FUNC_5(VAR_2, &VAR_7->state);

 return 0;
}
