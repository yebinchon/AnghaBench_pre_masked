
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct sja1105_regs {int port_control; } ;
struct sja1105_private {TYPE_1__* info; } ;
struct TYPE_2__ {struct sja1105_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sja1105_private const*,int ,int ,unsigned long*,int ) ;

int FUNC_1(const struct sja1105_private *VAR_3,
         unsigned long VAR_4, bool VAR_5)
{
 const struct sja1105_regs *VAR_6 = VAR_3->info->regs;
 u64 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_1, VAR_6->port_control,
      &VAR_7, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5)
  VAR_7 |= VAR_4;
 else
  VAR_7 &= ~VAR_4;

 return FUNC_0(VAR_3, VAR_2, VAR_6->port_control,
        &VAR_7, VAR_0);
}
