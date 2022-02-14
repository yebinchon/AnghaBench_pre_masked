
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwtstamp_config {int dummy; } ;
struct mv88e6xxx_port_hwtstamp {struct hwtstamp_config tstamp_config; } ;
struct mv88e6xxx_chip {TYPE_1__* info; struct mv88e6xxx_port_hwtstamp* port_hwtstamp; } ;
struct ifreq {int ifr_data; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
struct TYPE_2__ {int ptp_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct hwtstamp_config*,int) ;

int FUNC_1(struct dsa_switch *VAR_2, int VAR_3,
    struct ifreq *VAR_4)
{
 struct mv88e6xxx_chip *VAR_5 = VAR_2->priv;
 struct mv88e6xxx_port_hwtstamp *VAR_6 = &VAR_5->port_hwtstamp[VAR_3];
 struct hwtstamp_config *VAR_7 = &VAR_6->tstamp_config;

 if (!VAR_5->info->ptp_support)
  return -VAR_1;

 return FUNC_0(VAR_4->ifr_data, VAR_7, sizeof(*VAR_7)) ?
  -VAR_0 : 0;
}
