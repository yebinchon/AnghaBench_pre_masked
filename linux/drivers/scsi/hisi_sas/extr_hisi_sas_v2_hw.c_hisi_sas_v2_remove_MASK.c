
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct hisi_hba* lldd_ha; } ;
struct platform_device {int dummy; } ;
struct hisi_hba {int dummy; } ;


 int FUNC_0 (struct hisi_hba*) ;
 int FUNC_1 (struct platform_device*) ;
 struct sas_ha_struct* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct sas_ha_struct *VAR_1 = FUNC_2(VAR_0);
 struct hisi_hba *VAR_2 = VAR_1->lldd_ha;

 FUNC_0(VAR_2);

 return FUNC_1(VAR_0);
}
