
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct asd_sas_phy {scalar_t__ suspended; scalar_t__ error; TYPE_1__* phy; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct asd_sas_phy*,int) ;
 struct asd_sas_event* FUNC_2 (struct work_struct*) ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_0)
{
 struct asd_sas_event *VAR_1 = FUNC_2(VAR_0);
 struct asd_sas_phy *VAR_2 = VAR_1->phy;


 if (!VAR_2->suspended) {
  FUNC_0(&VAR_2->phy->dev, "resume timeout cancelled\n");
  return;
 }

 VAR_2->error = 0;
 VAR_2->suspended = 0;
 FUNC_1(VAR_2, 1);
}
