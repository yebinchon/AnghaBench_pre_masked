
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct lp8788_charger {struct iio_channel** chan; } ;
struct iio_channel {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iio_channel*,int*) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_2,
    union power_supply_propval *VAR_3)
{
 struct iio_channel *VAR_4 = VAR_2->chan[VAR_1];
 int VAR_5;
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return -VAR_0;


 VAR_3->intval = VAR_5 * 10;

 return 0;
}
