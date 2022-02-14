
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mv88e6xxx_port_hwtstamp {int state; } ;
struct mv88e6xxx_chip {TYPE_1__* info; struct mv88e6xxx_port_hwtstamp* port_hwtstamp; } ;
struct TYPE_2__ {int ptp_support; } ;


 int VAR_0 ;
 int * FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 *FUNC_2(struct mv88e6xxx_chip *VAR_1, int VAR_2,
       struct sk_buff *VAR_3, unsigned int VAR_4)
{
 struct mv88e6xxx_port_hwtstamp *VAR_5 = &VAR_1->port_hwtstamp[VAR_2];
 u8 *VAR_6;

 if (!VAR_1->info->ptp_support)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_6)
  return ((void*)0);

 if (!FUNC_1(VAR_0, &VAR_5->state))
  return ((void*)0);

 return VAR_6;
}
