
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_slave {int mac_sl; int * phy; int slave_num; } ;
struct cpsw_common {int ale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct cpsw_slave *VAR_2, struct cpsw_common *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2->slave_num);

 if (!VAR_2->phy)
  return;
 FUNC_5(VAR_2->phy);
 FUNC_4(VAR_2->phy);
 VAR_2->phy = ((void*)0);
 FUNC_0(VAR_3->ale, VAR_4,
        VAR_0, VAR_1);
 FUNC_3(VAR_2->mac_sl, 100);
 FUNC_2(VAR_2->mac_sl);
}
