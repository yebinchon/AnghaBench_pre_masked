
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int flag; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct il_priv {TYPE_2__ _4965; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct il_priv *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_3->_4965.stats.flag);

 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_5 - VAR_6, "Statistics Flag(0x%X):\n", VAR_7);
 if (VAR_7 & VAR_0)
  VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_5 - VAR_6,
          "\tStatistics have been cleared\n");
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_5 - VAR_6, "\tOperational Frequency: %s\n",
         (VAR_7 & VAR_1) ? "2.4 GHz" :
         "5.2 GHz");
 VAR_6 += FUNC_1(VAR_4 + VAR_6, VAR_5 - VAR_6, "\tTGj Narrow Band: %s\n",
         (VAR_7 & VAR_2) ? "enabled" :
         "disabled");

 return VAR_6;
}
