
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_port_hwtstamp {int tstamp_config; } ;
struct mv88e6xxx_chip {TYPE_1__* info; struct mv88e6xxx_port_hwtstamp* port_hwtstamp; } ;
struct ifreq {int ifr_data; } ;
struct hwtstamp_config {int dummy; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
typedef int config ;
struct TYPE_2__ {int ptp_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hwtstamp_config*,int ,int) ;
 scalar_t__ FUNC_1 (int ,struct hwtstamp_config*,int) ;
 int FUNC_2 (int *,struct hwtstamp_config*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,struct hwtstamp_config*) ;

int FUNC_4(struct dsa_switch *VAR_2, int VAR_3,
    struct ifreq *VAR_4)
{
 struct mv88e6xxx_chip *VAR_5 = VAR_2->priv;
 struct mv88e6xxx_port_hwtstamp *VAR_6 = &VAR_5->port_hwtstamp[VAR_3];
 struct hwtstamp_config VAR_7;
 int VAR_8;

 if (!VAR_5->info->ptp_support)
  return -VAR_1;

 if (FUNC_0(&VAR_7, VAR_4->ifr_data, sizeof(VAR_7)))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_5, VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;


 FUNC_2(&VAR_6->tstamp_config, &VAR_7, sizeof(VAR_7));

 return FUNC_1(VAR_4->ifr_data, &VAR_7, sizeof(VAR_7)) ?
  -VAR_0 : 0;
}
