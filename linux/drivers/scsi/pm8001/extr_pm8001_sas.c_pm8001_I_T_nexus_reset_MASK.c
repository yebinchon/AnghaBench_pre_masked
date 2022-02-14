
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy {int dummy; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_device {int device_id; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct domain_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pm8001_hba_info*,struct pm8001_device*,struct domain_device*,int,int ) ;
 struct pm8001_hba_info* FUNC_4 (struct domain_device*) ;
 int FUNC_5 (char*,int ,int) ;
 struct sas_phy* FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct sas_phy*,int) ;
 int FUNC_8 (struct sas_phy*) ;
 scalar_t__ FUNC_9 (struct sas_phy*) ;

int FUNC_10(struct domain_device *VAR_2)
{
 int VAR_3 = VAR_1;
 struct pm8001_device *VAR_4;
 struct pm8001_hba_info *VAR_5;
 struct sas_phy *VAR_6;

 if (!VAR_2 || !VAR_2->lldd_dev)
  return -VAR_0;

 VAR_4 = VAR_2->lldd_dev;
 VAR_5 = FUNC_4(VAR_2);
 VAR_6 = FUNC_6(VAR_2);

 if (FUNC_1(VAR_2)) {
  if (FUNC_9(VAR_6)) {
   VAR_3 = 0;
   goto out;
  }
  VAR_3 = FUNC_7(VAR_6, 1);
  if (VAR_3) {
   FUNC_0(VAR_5,
   FUNC_5("phy reset failed for device %x\n"
   "with rc %d\n", VAR_4->device_id, VAR_3));
   VAR_3 = VAR_1;
   goto out;
  }
  FUNC_2(2000);
  VAR_3 = FUNC_3(VAR_5, VAR_4 ,
   VAR_2, 1, 0);
  if (VAR_3) {
   FUNC_0(VAR_5,
   FUNC_5("task abort failed %x\n"
   "with rc %d\n", VAR_4->device_id, VAR_3));
   VAR_3 = VAR_1;
  }
 } else {
  VAR_3 = FUNC_7(VAR_6, 1);
  FUNC_2(2000);
 }
 FUNC_0(VAR_5, FUNC_5(" for device[%x]:rc=%d\n",
  VAR_4->device_id, VAR_3));
 out:
 FUNC_8(VAR_6);
 return VAR_3;
}
