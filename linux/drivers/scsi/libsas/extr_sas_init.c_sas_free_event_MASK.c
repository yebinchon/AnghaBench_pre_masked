
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_sas_phy {int event_nr; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct asd_sas_event*) ;
 int VAR_0 ;

void FUNC_2(struct asd_sas_event *VAR_1)
{
 struct asd_sas_phy *VAR_2 = VAR_1->phy;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(&VAR_2->event_nr);
}
