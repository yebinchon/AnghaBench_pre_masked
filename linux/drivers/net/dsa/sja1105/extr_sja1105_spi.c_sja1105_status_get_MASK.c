
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sja1105_status {int dummy; } ;
struct sja1105_regs {int status; } ;
struct sja1105_private {TYPE_1__* info; } ;
struct TYPE_2__ {struct sja1105_regs* regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct sja1105_private*,int ,int ,int *,int) ;
 int FUNC_1 (int *,struct sja1105_status*) ;

__attribute__((used)) static int FUNC_2(struct sja1105_private *VAR_1,
         struct sja1105_status *VAR_2)
{
 const struct sja1105_regs *VAR_3 = VAR_1->info->regs;
 u8 VAR_4[4];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0,
      VAR_3->status,
      VAR_4, 4);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_4, VAR_2);

 return 0;
}
