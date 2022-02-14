
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_device {scalar_t__ dev_type; struct domain_device* sas_device; } ;
struct hisi_hba {struct hisi_sas_device* devices; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hisi_hba*,struct domain_device*) ;

void FUNC_1(struct hisi_hba *VAR_2)
{
 struct hisi_sas_device *VAR_3;
 struct domain_device *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = &VAR_2->devices[VAR_5];
  VAR_4 = VAR_3->sas_device;

  if ((VAR_3->dev_type == VAR_1) ||
      !VAR_4)
   continue;

  FUNC_0(VAR_2, VAR_4);
 }
}
