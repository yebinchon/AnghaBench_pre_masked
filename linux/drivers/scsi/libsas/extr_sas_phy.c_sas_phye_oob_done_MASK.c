
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct asd_sas_phy {scalar_t__ error; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;


 struct asd_sas_event* FUNC_0 (struct work_struct*) ;

__attribute__((used)) static void FUNC_1(struct work_struct *VAR_0)
{
 struct asd_sas_event *VAR_1 = FUNC_0(VAR_0);
 struct asd_sas_phy *VAR_2 = VAR_1->phy;

 VAR_2->error = 0;
}
