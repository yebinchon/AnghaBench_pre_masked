
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sja1105_regs {int ptptsclk; } ;
struct sja1105_private {TYPE_2__* ds; TYPE_1__* info; } ;
struct cyclecounter {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct sja1105_regs* regs; } ;


 int VAR_0 ;
 struct sja1105_private* FUNC_0 (struct cyclecounter const*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct sja1105_private*,int ,int ,int *,int) ;

__attribute__((used)) static u64 FUNC_3(const struct cyclecounter *VAR_1)
{
 struct sja1105_private *VAR_2 = FUNC_0(VAR_1);
 const struct sja1105_regs *VAR_3 = VAR_2->info->regs;
 u64 VAR_4 = 0;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_3->ptptsclk,
      &VAR_4, 8);
 if (VAR_5 < 0)
  FUNC_1(VAR_2->ds->dev,
        "failed to read ptp cycle counter: %d\n",
        VAR_5);
 return VAR_4;
}
