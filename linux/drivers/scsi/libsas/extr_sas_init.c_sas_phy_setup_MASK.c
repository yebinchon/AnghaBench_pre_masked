
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_phy_data {struct sas_phy* phy; int enable_work; int reset_work; int event_lock; } ;
struct sas_phy {struct sas_phy_data* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct sas_phy_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct sas_phy *VAR_4)
{
 struct sas_phy_data *VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);

 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->event_lock);
 FUNC_0(&VAR_5->reset_work, VAR_3);
 FUNC_0(&VAR_5->enable_work, VAR_2);
 VAR_5->phy = VAR_4;
 VAR_4->hostdata = VAR_5;

 return 0;
}
