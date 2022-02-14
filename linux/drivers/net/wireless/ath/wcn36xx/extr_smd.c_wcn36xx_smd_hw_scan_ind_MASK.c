
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_hal_scan_offload_ind {int type; } ;
struct wcn36xx {int hw; int scan_lock; int scan_aborted; int * scan_req; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,struct cfg80211_scan_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct wcn36xx *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct wcn36xx_hal_scan_offload_ind *VAR_5 = VAR_3;
 struct cfg80211_scan_info VAR_6 = {};

 if (VAR_4 != sizeof(*VAR_5)) {
  FUNC_4("Corrupted delete scan indication\n");
  return -VAR_0;
 }

 FUNC_3(VAR_1, "scan indication (type %x)\n", VAR_5->type);

 switch (VAR_5->type) {
 case 132:
 case 133:
  VAR_6.aborted = 1;

 case 134:
  FUNC_1(&VAR_2->scan_lock);
  VAR_2->scan_req = ((void*)0);
  if (VAR_2->scan_aborted)
   VAR_6.aborted = 1;
  FUNC_2(&VAR_2->scan_lock);
  FUNC_0(VAR_2->hw, &VAR_6);
  break;
 case 128:
 case 131:
 case 130:
 case 129:
  break;
 default:
  FUNC_4("Unknown scan indication type %x\n", VAR_5->type);
 }

 return 0;
}
