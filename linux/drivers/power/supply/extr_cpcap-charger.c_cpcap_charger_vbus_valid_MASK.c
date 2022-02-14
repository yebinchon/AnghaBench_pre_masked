
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_channel {int dummy; } ;
struct cpcap_charger_ddata {int dev; struct iio_channel** channels; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct iio_channel*,int*) ;

__attribute__((used)) static bool FUNC_2(struct cpcap_charger_ddata *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct iio_channel *VAR_4 =
  VAR_1->channels[VAR_0];

 VAR_2 = FUNC_1(VAR_4, &VAR_3);
 if (VAR_2 >= 0)
  return VAR_3 > 3900 ? 1 : 0;

 FUNC_0(VAR_1->dev, "error reading VBUS: %i\n", VAR_2);

 return 0;
}
