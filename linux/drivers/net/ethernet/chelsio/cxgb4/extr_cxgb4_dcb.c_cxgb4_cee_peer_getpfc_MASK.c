
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pfc_num_tcs_supported; int pfcen; } ;
struct port_info {TYPE_1__ dcb; } ;
struct net_device {int dummy; } ;
struct cee_pfc {int tcs_supported; int pfc_en; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ,int *) ;
 struct port_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct cee_pfc *VAR_2)
{
 struct port_info *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, VAR_0, &(VAR_2->tcs_supported));





 VAR_2->pfc_en = FUNC_0(VAR_3->dcb.pfcen);

 VAR_2->tcs_supported = VAR_3->dcb.pfc_num_tcs_supported;

 return 0;
}
