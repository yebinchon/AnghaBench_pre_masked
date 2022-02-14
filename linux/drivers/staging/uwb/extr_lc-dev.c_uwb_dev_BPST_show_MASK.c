
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct uwb_dev {struct uwb_beca_e* bce; } ;
struct uwb_beca_e {int mutex; TYPE_1__* be; } ;
struct uwb_beacon_frame {int Beacon_Slot_Number; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int wBPSTOffset; scalar_t__ BeaconInfo; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 struct uwb_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct uwb_dev *VAR_4 = FUNC_3(VAR_1);
 struct uwb_beca_e *VAR_5;
 struct uwb_beacon_frame *VAR_6;
 u16 VAR_7;

 VAR_5 = VAR_4->bce;
 FUNC_0(&VAR_5->mutex);
 VAR_6 = (struct uwb_beacon_frame *)VAR_5->be->BeaconInfo;
 VAR_7 = VAR_5->be->wBPSTOffset
  - (u16)(VAR_6->Beacon_Slot_Number * VAR_0);
 FUNC_1(&VAR_5->mutex);

 return FUNC_2(VAR_3, "%d\n", VAR_7);
}
