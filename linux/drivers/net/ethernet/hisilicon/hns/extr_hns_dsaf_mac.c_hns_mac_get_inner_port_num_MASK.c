
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct hns_mac_cb {int mac_id; TYPE_3__* dsaf_dev; int dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {int dsaf_mode; TYPE_2__ ae_dev; TYPE_1__** rcb_common; } ;
struct TYPE_4__ {int max_vfn; int max_q_per_vf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int,...) ;

int FUNC_1(struct hns_mac_cb *VAR_5, u8 VAR_6, u8 *VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11;

 if (VAR_5->dsaf_dev->dsaf_mode <= VAR_2) {
  if (VAR_5->mac_id != VAR_1) {
   FUNC_0(VAR_5->dev,
    "input invalid, %s mac%d vmid%d !\n",
    VAR_5->dsaf_dev->ae_dev.name,
    VAR_5->mac_id, VAR_6);
   return -VAR_4;
  }
 } else if (VAR_5->dsaf_dev->dsaf_mode < VAR_3) {
  if (VAR_5->mac_id >= VAR_1) {
   FUNC_0(VAR_5->dev,
    "input invalid, %s mac%d vmid%d!\n",
    VAR_5->dsaf_dev->ae_dev.name,
    VAR_5->mac_id, VAR_6);
   return -VAR_4;
  }
 } else {
  FUNC_0(VAR_5->dev, "dsaf mode invalid, %s mac%d!\n",
   VAR_5->dsaf_dev->ae_dev.name, VAR_5->mac_id);
  return -VAR_4;
 }

 if (VAR_6 >= VAR_5->dsaf_dev->rcb_common[0]->max_vfn) {
  FUNC_0(VAR_5->dev, "input invalid, %s mac%d vmid%d !\n",
   VAR_5->dsaf_dev->ae_dev.name, VAR_5->mac_id, VAR_6);
  return -VAR_4;
 }

 VAR_8 = VAR_5->dsaf_dev->rcb_common[0]->max_q_per_vf;
 VAR_9 = VAR_5->dsaf_dev->rcb_common[0]->max_vfn;

 VAR_10 = VAR_6 * VAR_8 +
   VAR_9 * VAR_8 * VAR_5->mac_id;

 switch (VAR_5->dsaf_dev->dsaf_mode) {
 case 128:
  VAR_11 = 0;
  break;
 case 134:
  VAR_11 = 0;
  break;
 case 133:
 case 129:
 case 131:
 case 130:
 case 132:
 case 139:
 case 141:
 case 140:
 case 138:
 case 136:
 case 135:
 case 137:
  VAR_11 = VAR_10;
  break;
 default:
  FUNC_0(VAR_5->dev, "dsaf mode invalid, %s mac%d!\n",
   VAR_5->dsaf_dev->ae_dev.name, VAR_5->mac_id);
  return -VAR_4;
 }
 VAR_11 += VAR_0;

 *VAR_7 = VAR_11;

 return 0;
}
