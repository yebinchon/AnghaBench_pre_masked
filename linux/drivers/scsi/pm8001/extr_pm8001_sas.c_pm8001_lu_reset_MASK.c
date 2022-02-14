
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sas_phy {int dummy; } ;
struct pm8001_tmf_task {int tmf; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_device {int device_id; int * setds_completion; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;
struct TYPE_2__ {int (* set_dev_state_req ) (struct pm8001_hba_info*,struct pm8001_device*,int) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct pm8001_hba_info*,struct pm8001_device*,struct domain_device*,int,int ) ;
 struct pm8001_hba_info* FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct domain_device*,int *,struct pm8001_tmf_task*) ;
 int FUNC_6 (char*,int ,int) ;
 struct sas_phy* FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct sas_phy*,int) ;
 int FUNC_9 (struct sas_phy*) ;
 int FUNC_10 (struct pm8001_hba_info*,struct pm8001_device*,int) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct domain_device *VAR_4, u8 *VAR_5)
{
 int VAR_6 = VAR_2;
 struct pm8001_tmf_task VAR_7;
 struct pm8001_device *VAR_8 = VAR_4->lldd_dev;
 struct pm8001_hba_info *VAR_9 = FUNC_4(VAR_4);
 FUNC_0(VAR_3);
 if (FUNC_2(VAR_4)) {
  struct sas_phy *VAR_10 = FUNC_7(VAR_4);
  VAR_6 = FUNC_3(VAR_9, VAR_8 ,
   VAR_4, 1, 0);
  VAR_6 = FUNC_8(VAR_10, 1);
  FUNC_9(VAR_10);
  VAR_8->setds_completion = &VAR_3;
  VAR_6 = VAR_0->set_dev_state_req(VAR_9,
   VAR_8, 0x01);
  FUNC_11(&VAR_3);
 } else {
  VAR_7.tmf = VAR_1;
  VAR_6 = FUNC_5(VAR_4, VAR_5, &VAR_7);
 }

 FUNC_1(VAR_9, FUNC_6("for device[%x]:rc=%d\n",
  VAR_8->device_id, VAR_6));
 return VAR_6;
}
