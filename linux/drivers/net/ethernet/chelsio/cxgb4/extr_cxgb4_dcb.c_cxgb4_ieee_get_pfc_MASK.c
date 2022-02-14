
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_dcb_info {int msgs; int pfcen; int pfc_num_tcs_supported; } ;
struct port_info {struct port_dcb_info dcb; } ;
struct net_device {int dummy; } ;
struct ieee_pfc {int pfc_en; int pfc_cap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee_pfc*,int ,int) ;
 struct port_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ieee_pfc *VAR_2)
{
 struct port_info *VAR_3 = FUNC_2(VAR_1);
 struct port_dcb_info *VAR_4 = &VAR_3->dcb;

 FUNC_1(VAR_2, 0, sizeof(struct ieee_pfc));

 if (!(VAR_4->msgs & VAR_0))
  return 0;

 VAR_2->pfc_cap = VAR_4->pfc_num_tcs_supported;
 VAR_2->pfc_en = FUNC_0(VAR_4->pfcen);

 return 0;
}
