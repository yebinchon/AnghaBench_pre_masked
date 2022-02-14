
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ device_type; int sas_address; } ;
struct sas_rphy {TYPE_1__ identify; } ;
struct mptsas_portinfo {int num_phys; struct mptsas_phyinfo* phy_info; } ;
struct mptsas_phyinfo {int dummy; } ;
typedef int MPT_ADAPTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct mptsas_phyinfo*) ;
 int FUNC_1 (int *,struct mptsas_portinfo*,int) ;
 struct mptsas_portinfo* FUNC_2 (int *,int ) ;
 struct sas_rphy* FUNC_3 (struct mptsas_phyinfo*) ;

__attribute__((used)) static void
FUNC_4(MPT_ADAPTER *VAR_3, struct mptsas_portinfo
    *VAR_4, struct mptsas_portinfo *VAR_5)
{
 struct mptsas_phyinfo *VAR_6;
 struct mptsas_portinfo *VAR_7;
 struct sas_rphy *VAR_8;
 int VAR_9;

 VAR_6 = VAR_5->phy_info;
 for (VAR_9 = 0; VAR_9 < VAR_5->num_phys; VAR_9++, VAR_6++) {
  VAR_8 = FUNC_3(VAR_6);
  if (!VAR_8)
   continue;
  if (VAR_8->identify.device_type == VAR_2)
   FUNC_0(VAR_3, VAR_6);
 }

 VAR_6 = VAR_5->phy_info;
 for (VAR_9 = 0; VAR_9 < VAR_5->num_phys; VAR_9++, VAR_6++) {
  VAR_8 = FUNC_3(VAR_6);
  if (!VAR_8)
   continue;
  if (VAR_8->identify.device_type ==
      VAR_0 ||
      VAR_8->identify.device_type ==
      VAR_1) {
   VAR_7 = FUNC_2(VAR_3,
       VAR_8->identify.sas_address);
   if (!VAR_7)
    continue;
   if (VAR_7 == VAR_4)
    continue;




   FUNC_1(VAR_3, VAR_7, 1);
  }
 }
}
