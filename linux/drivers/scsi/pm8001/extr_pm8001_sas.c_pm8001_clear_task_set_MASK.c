
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm8001_tmf_task {int tmf; } ;
struct pm8001_hba_info {int dummy; } ;
struct pm8001_device {int device_id; } ;
struct domain_device {struct pm8001_device* lldd_dev; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_0 ;
 struct pm8001_hba_info* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct domain_device*,int *,struct pm8001_tmf_task*) ;
 int FUNC_3 (char*,int ) ;

int FUNC_4(struct domain_device *VAR_1, u8 *VAR_2)
{
 struct pm8001_tmf_task VAR_3;
 struct pm8001_device *VAR_4 = VAR_1->lldd_dev;
 struct pm8001_hba_info *VAR_5 = FUNC_1(VAR_1);

 FUNC_0(VAR_5,
  FUNC_3("I_T_L_Q clear task set[%x]\n",
  VAR_4->device_id));
 VAR_3.tmf = VAR_0;
 return FUNC_2(VAR_1, VAR_2, &VAR_3);
}
