
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc_evt_beacon {int wBeaconInfoLength; scalar_t__ BeaconInfo; } ;
struct uwb_ie_hdr {int dummy; } ;
struct uwb_dev {int dummy; } ;
struct uwb_beca_e {int mutex; struct uwb_rc_evt_beacon* be; } ;
struct uwb_beacon_frame {scalar_t__ IEData; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uwb_ie_hdr*,int,char*,size_t) ;

ssize_t FUNC_3(struct uwb_dev *VAR_0, struct uwb_beca_e *VAR_1,
     char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4 = 0;
 struct uwb_rc_evt_beacon *VAR_5;
 struct uwb_beacon_frame *VAR_6;
 int VAR_7;
 struct uwb_ie_hdr *VAR_8;

 FUNC_0(&VAR_1->mutex);

 VAR_5 = VAR_1->be;
 if (VAR_5) {
  VAR_6 = (struct uwb_beacon_frame *)VAR_1->be->BeaconInfo;
  VAR_7 = VAR_5->wBeaconInfoLength - sizeof(struct uwb_beacon_frame);
  VAR_8 = (struct uwb_ie_hdr *)VAR_6->IEData;

  VAR_4 = FUNC_2(VAR_8, VAR_7, VAR_2, VAR_3);
 }

 FUNC_1(&VAR_1->mutex);

 return VAR_4;
}
