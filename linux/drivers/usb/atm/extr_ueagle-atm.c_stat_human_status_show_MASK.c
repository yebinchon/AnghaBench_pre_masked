
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct uea_softc {TYPE_2__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct uea_softc*) ;
 struct uea_softc* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
   struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6 = -VAR_1;
 int VAR_7;
 struct uea_softc *VAR_8;

 FUNC_3(&VAR_2);
 VAR_8 = FUNC_2(VAR_3);
 if (!VAR_8)
  goto out;

 if (FUNC_1(VAR_8) == VAR_0) {
  switch (VAR_8->stats.phy.state) {
  case 0x0:
  case 0x1:
  case 0x3:
  case 0x4:
   VAR_7 = 0;
   break;
  case 0x5:
  case 0x6:
  case 0x9:
  case 0xa:
   VAR_7 = 1;
   break;
  case 0x7:
   VAR_7 = 2;
   break;
  case 0x2:
   VAR_7 = 3;
   break;
  default:
   VAR_7 = 4;
   break;
  }
 } else
  VAR_7 = FUNC_0(VAR_8->stats.phy.state);

 switch (VAR_7) {
 case 0:
  VAR_6 = FUNC_5(VAR_5, "Modem is booting\n");
  break;
 case 1:
  VAR_6 = FUNC_5(VAR_5, "Modem is initializing\n");
  break;
 case 2:
  VAR_6 = FUNC_5(VAR_5, "Modem is operational\n");
  break;
 case 3:
  VAR_6 = FUNC_5(VAR_5, "Modem synchronization failed\n");
  break;
 default:
  VAR_6 = FUNC_5(VAR_5, "Modem state is unknown\n");
  break;
 }
out:
 FUNC_4(&VAR_2);
 return VAR_6;
}
