
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stmmac_safety_stats {int dummy; } ;
struct TYPE_5__ {TYPE_1__* desc; } ;
struct TYPE_4__ {char* desc; int valid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_1(struct stmmac_safety_stats *VAR_2,
   int VAR_3, unsigned long *VAR_4, const char **VAR_5)
{
 int VAR_6 = VAR_3 / 32, VAR_7 = VAR_3 % 32;
 unsigned long *VAR_8 = (unsigned long *)VAR_2;

 if (VAR_6 >= FUNC_0(VAR_1))
  return -VAR_0;
 if (!VAR_1[VAR_6].desc[VAR_7].valid)
  return -VAR_0;
 if (VAR_4)
  *VAR_4 = *(VAR_8 + VAR_3);
 if (VAR_5)
  *VAR_5 = VAR_1[VAR_6].desc[VAR_7].desc;
 return 0;
}
