
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_l2_policing_entry {int sharindx; int smax; scalar_t__ partition; scalar_t__ maxlen; int rate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline void
FUNC_1(struct sja1105_l2_policing_entry *VAR_3,
        int VAR_4)
{
 VAR_3[VAR_4].sharindx = VAR_4;
 VAR_3[VAR_4].smax = 65535;
 VAR_3[VAR_4].rate = FUNC_0(1000);
 VAR_3[VAR_4].maxlen = VAR_1 + VAR_2 + VAR_0;
 VAR_3[VAR_4].partition = 0;
}
