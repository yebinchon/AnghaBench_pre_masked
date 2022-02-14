
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee_pfc {int pfc_en; } ;
struct fm10k_intfc {int pfc_en; } ;


 int FUNC_0 (struct fm10k_intfc*) ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct ieee_pfc *VAR_1)
{
 struct fm10k_intfc *VAR_2 = FUNC_1(VAR_0);


 VAR_2->pfc_en = VAR_1->pfc_en;


 if (FUNC_2(VAR_0))
  FUNC_0(VAR_2);

 return 0;
}
