
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct hisi_sas_phy {TYPE_1__ timer; } ;
struct hisi_hba {struct device* dev; struct hisi_sas_phy* phy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(struct hisi_hba *VAR_3, int VAR_4)
{
 struct hisi_sas_phy *VAR_5 = &VAR_3->phy[VAR_4];
 struct device *VAR_6 = VAR_3->dev;

 if (!FUNC_2(&VAR_5->timer)) {
  FUNC_1(VAR_6, "phy%d OOB ready\n", VAR_4);
  VAR_5->timer.expires = VAR_2 + VAR_0 * VAR_1;
  FUNC_0(&VAR_5->timer);
 }
}
