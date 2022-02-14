
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct devfreq_cooling_device {int freq_table_size; unsigned int* freq_table; TYPE_2__* devfreq; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (struct device*,unsigned int) ;
 int FUNC_3 (struct device*,unsigned int) ;
 struct dev_pm_opp* FUNC_4 (struct device*,unsigned int,int) ;
 int FUNC_5 (struct dev_pm_opp*) ;

__attribute__((used)) static int FUNC_6(struct devfreq_cooling_device *VAR_1,
     unsigned long VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_1->devfreq->dev.parent;

 for (VAR_3 = 0; VAR_3 < VAR_1->freq_table_size; VAR_3++) {
  struct dev_pm_opp *VAR_5;
  int VAR_6 = 0;
  unsigned int VAR_7 = VAR_1->freq_table[VAR_3];
  bool VAR_8 = VAR_3 >= VAR_2 ? 1 : 0;

  VAR_5 = FUNC_4(VAR_4, VAR_7, !VAR_8);

  if (FUNC_1(VAR_5) == -VAR_0)
   continue;
  else if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);

  FUNC_5(VAR_5);

  if (VAR_8)
   VAR_6 = FUNC_3(VAR_4, VAR_7);
  else
   VAR_6 = FUNC_2(VAR_4, VAR_7);

  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
