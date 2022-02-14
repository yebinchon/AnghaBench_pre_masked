
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ams369fg06 {int dummy; } ;
struct TYPE_2__ {int * gamma_22_table; } ;


 int FUNC_0 (struct ams369fg06*,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct ams369fg06 *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;

 if ((VAR_2 >= 0) && (VAR_2 <= 50))
  VAR_4 = 0;
 else if ((VAR_2 > 50) && (VAR_2 <= 100))
  VAR_4 = 1;
 else if ((VAR_2 > 100) && (VAR_2 <= 150))
  VAR_4 = 2;
 else if ((VAR_2 > 150) && (VAR_2 <= 200))
  VAR_4 = 3;
 else if ((VAR_2 > 200) && (VAR_2 <= 255))
  VAR_4 = 4;

 VAR_3 = FUNC_0(VAR_1, VAR_0.gamma_22_table[VAR_4]);

 return VAR_3;
}
