
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct power_supply {TYPE_1__* desc; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {TYPE_2__* batteries; scalar_t__ individual_addressing; } ;
struct TYPE_5__ {unsigned long charge_stop; unsigned long charge_start; int stop_support; int start_support; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 TYPE_3__ VAR_3 ;
 int FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (char*,int) ;
 struct power_supply* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const,int,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_5(int VAR_4,
        struct device *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct power_supply *VAR_8 = FUNC_2(VAR_5);
 unsigned long VAR_9;
 int VAR_10, VAR_11;
 if (VAR_3.individual_addressing)

  VAR_10 = FUNC_3(VAR_8->desc->name);
 else
  VAR_10 = VAR_0;

 VAR_11 = FUNC_0(VAR_6, 10, &VAR_9);
 if (VAR_11)
  return VAR_11;

 switch (VAR_4) {
 case 129:
  if (!VAR_3.batteries[VAR_10].start_support)
   return -VAR_2;

  if (VAR_9 < 0 || VAR_9 > 99)
   return -VAR_1;
  if (VAR_9 > VAR_3.batteries[VAR_10].charge_stop)
   return -VAR_1;
  if (FUNC_4(129, VAR_10, VAR_9))
   return -VAR_2;
  VAR_3.batteries[VAR_10].charge_start = VAR_9;
  return VAR_7;

 case 128:
  if (!VAR_3.batteries[VAR_10].stop_support)
   return -VAR_2;

  if (VAR_9 < 1 || VAR_9 > 100)
   return -VAR_1;
  if (VAR_9 < VAR_3.batteries[VAR_10].charge_start)
   return -VAR_1;
  VAR_3.batteries[VAR_10].charge_stop = VAR_9;





  if (VAR_9 == 100)
   VAR_9 = 0;
  if (FUNC_4(128, VAR_10, VAR_9))
   return -VAR_1;
  return VAR_7;
 default:
  FUNC_1("Wrong parameter: %d", VAR_4);
  return -VAR_1;
 }
 return VAR_7;
}
