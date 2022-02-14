
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device* parent; } ;
struct rtc_device {int id; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rtc_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct rtc_device**) ;
 struct rtc_device** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct rtc_device**) ;
 int FUNC_5 (int *,int) ;
 struct rtc_device* FUNC_6 () ;
 int FUNC_7 (struct device*) ;
 int VAR_3 ;

struct rtc_device *FUNC_8(struct device *VAR_4)
{
 struct rtc_device **VAR_5, *VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7 < 0)
  return FUNC_0(VAR_7);

 VAR_5 = FUNC_3(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto exit_ida;
 }

 VAR_6 = FUNC_6();
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto exit_devres;
 }

 *VAR_5 = VAR_6;
 FUNC_2(VAR_4, VAR_5);

 VAR_6->id = VAR_7;
 VAR_6->dev.parent = VAR_4;
 FUNC_1(&VAR_6->dev, "rtc%d", VAR_7);

 return VAR_6;

exit_devres:
 FUNC_4(VAR_5);
exit_ida:
 FUNC_5(&VAR_3, VAR_7);
 return FUNC_0(VAR_8);
}
