
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_charger {struct iio_channel** chan; } ;
struct iio_channel {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct iio_channel*,int*) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_2, int *VAR_3)
{
 struct iio_channel *VAR_4 = VAR_2->chan[VAR_1];

 if (!VAR_4)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3);
}
