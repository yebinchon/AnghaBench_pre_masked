
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hisi_sas_tmf_task {int tmf; } ;
struct hisi_hba {struct device* dev; } ;
struct domain_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct hisi_hba* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct domain_device*,int *,struct hisi_sas_tmf_task*) ;
 int FUNC_3 (struct hisi_hba*,struct domain_device*) ;
 int FUNC_4 (struct hisi_hba*,struct domain_device*,int ,int ) ;
 int FUNC_5 (struct hisi_hba*,struct domain_device*) ;

__attribute__((used)) static int FUNC_6(struct domain_device *VAR_4, u8 *VAR_5)
{
 struct hisi_hba *VAR_6 = FUNC_1(VAR_4);
 struct device *VAR_7 = VAR_6->dev;
 struct hisi_sas_tmf_task VAR_8;
 int VAR_9;

 VAR_9 = FUNC_4(VAR_6, VAR_4,
       VAR_0, 0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7, "abort task set: internal abort rc=%d\n", VAR_9);
  return VAR_3;
 }
 FUNC_3(VAR_6, VAR_4);

 VAR_8.tmf = VAR_1;
 VAR_9 = FUNC_2(VAR_4, VAR_5, &VAR_8);

 if (VAR_9 == VAR_2)
  FUNC_5(VAR_6, VAR_4);

 return VAR_9;
}
