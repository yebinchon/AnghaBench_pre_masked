
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int eee_en; int eee_adv; } ;
struct ethtool_eee {int eee_enabled; int advertised; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct r8152*,int ) ;

__attribute__((used)) static int FUNC_2(struct r8152 *VAR_0, struct ethtool_eee *VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_1->advertised);

 VAR_0->eee_en = VAR_1->eee_enabled;
 VAR_0->eee_adv = VAR_2;

 FUNC_1(VAR_0, VAR_0->eee_en);

 return 0;
}
