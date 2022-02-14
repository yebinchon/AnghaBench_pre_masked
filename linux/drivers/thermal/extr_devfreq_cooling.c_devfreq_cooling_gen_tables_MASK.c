
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct device {int dummy; } ;
struct devfreq_cooling_device {unsigned long* power_table; unsigned long* freq_table; int freq_table_size; TYPE_2__* power_ops; struct devfreq* devfreq; } ;
struct TYPE_3__ {struct device* parent; } ;
struct devfreq {TYPE_1__ dev; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_4__ {scalar_t__ get_real_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct device*,char*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 struct dev_pm_opp* FUNC_3 (struct device*,unsigned long*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct dev_pm_opp*) ;
 int FUNC_6 (struct dev_pm_opp*) ;
 unsigned long FUNC_7 (struct devfreq_cooling_device*,unsigned long,unsigned long) ;
 unsigned long FUNC_8 (struct devfreq_cooling_device*,unsigned long,unsigned long) ;
 unsigned long* FUNC_9 (int,int,int ) ;
 int FUNC_10 (unsigned long*) ;

__attribute__((used)) static int FUNC_11(struct devfreq_cooling_device *VAR_3)
{
 struct devfreq *VAR_4 = VAR_3->devfreq;
 struct device *VAR_5 = VAR_4->dev.parent;
 int VAR_6, VAR_7;
 unsigned long VAR_8;
 u32 *VAR_9 = ((void*)0);
 u32 *VAR_10;
 int VAR_11;

 VAR_7 = FUNC_4(VAR_5);

 if (VAR_3->power_ops) {
  VAR_9 = FUNC_9(VAR_7, sizeof(*VAR_9),
          VAR_1);
  if (!VAR_9)
   return -VAR_0;
 }

 VAR_10 = FUNC_9(VAR_7, sizeof(*VAR_10),
        VAR_1);
 if (!VAR_10) {
  VAR_6 = -VAR_0;
  goto free_power_table;
 }

 for (VAR_11 = 0, VAR_8 = VAR_2; VAR_11 < VAR_7; VAR_11++, VAR_8--) {
  unsigned long VAR_12, VAR_13;
  struct dev_pm_opp *VAR_14;

  VAR_14 = FUNC_3(VAR_5, &VAR_8);
  if (FUNC_0(VAR_14)) {
   VAR_6 = FUNC_1(VAR_14);
   goto free_tables;
  }

  VAR_13 = FUNC_5(VAR_14) / 1000;
  FUNC_6(VAR_14);

  if (VAR_3->power_ops) {
   if (VAR_3->power_ops->get_real_power)
    VAR_12 = FUNC_8(VAR_3, VAR_8, VAR_13);
   else
    VAR_12 = FUNC_7(VAR_3, VAR_8, VAR_13);

   FUNC_2(VAR_5, "Power table: %lu MHz @ %lu mV: %lu = %lu mW\n",
    VAR_8 / 1000000, VAR_13, VAR_12, VAR_12);

   VAR_9[VAR_11] = VAR_12;
  }

  VAR_10[VAR_11] = VAR_8;
 }

 if (VAR_3->power_ops)
  VAR_3->power_table = VAR_9;

 VAR_3->freq_table = VAR_10;
 VAR_3->freq_table_size = VAR_7;

 return 0;

free_tables:
 FUNC_10(VAR_10);
free_power_table:
 FUNC_10(VAR_9);

 return VAR_6;
}
