
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_info {int dummy; } ;
struct mv88e6xxx_port_hwtstamp {int state; } ;
struct mv88e6xxx_chip {struct mv88e6xxx_port_hwtstamp* port_hwtstamp; struct dsa_switch* ds; } ;
struct dsa_switch {int num_ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mv88e6xxx_port_hwtstamp*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,struct mv88e6xxx_port_hwtstamp*) ;
 struct mv88e6xxx_chip* FUNC_3 (struct ptp_clock_info*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

long FUNC_5(struct ptp_clock_info *VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = FUNC_3(VAR_1);
 struct dsa_switch *VAR_3 = VAR_2->ds;
 struct mv88e6xxx_port_hwtstamp *VAR_4;
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_ports; VAR_5++) {
  if (!FUNC_0(VAR_3, VAR_5))
   continue;

  VAR_4 = &VAR_2->port_hwtstamp[VAR_5];
  if (FUNC_4(VAR_0, &VAR_4->state))
   VAR_6 |= FUNC_2(VAR_2, VAR_4);

  FUNC_1(VAR_2, VAR_4);
 }

 return VAR_6 ? 1 : -1;
}
