
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int interfmode; } ;
struct b43legacy_wldev {TYPE_1__* wl; TYPE_2__ phy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int mutex; } ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct b43legacy_wldev* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
           struct device_attribute *VAR_4,
           char *VAR_5)
{
 struct b43legacy_wldev *VAR_6 = FUNC_2(VAR_3);
 ssize_t VAR_7 = 0;

 if (!FUNC_1(VAR_0))
  return -VAR_1;

 FUNC_3(&VAR_6->wl->mutex);

 switch (VAR_6->phy.interfmode) {
 case 129:
  VAR_7 = FUNC_5(VAR_5, VAR_2, "0 (No Interference"
     " Mitigation)\n");
  break;
 case 128:
  VAR_7 = FUNC_5(VAR_5, VAR_2, "1 (Non-WLAN Interference"
     " Mitigation)\n");
  break;
 case 130:
  VAR_7 = FUNC_5(VAR_5, VAR_2, "2 (WLAN Interference"
     " Mitigation)\n");
  break;
 default:
  FUNC_0(1);
 }

 FUNC_4(&VAR_6->wl->mutex);

 return VAR_7;
}
