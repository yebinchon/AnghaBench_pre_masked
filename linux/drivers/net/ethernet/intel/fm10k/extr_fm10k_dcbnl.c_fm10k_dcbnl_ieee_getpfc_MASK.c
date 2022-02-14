
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee_pfc {int pfc_en; int pfc_cap; } ;
struct fm10k_intfc {int pfc_en; } ;


 int VAR_0 ;
 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, struct ieee_pfc *VAR_2)
{
 struct fm10k_intfc *VAR_3 = FUNC_0(VAR_1);


 VAR_2->pfc_cap = VAR_0;
 VAR_2->pfc_en = VAR_3->pfc_en;

 return 0;
}
