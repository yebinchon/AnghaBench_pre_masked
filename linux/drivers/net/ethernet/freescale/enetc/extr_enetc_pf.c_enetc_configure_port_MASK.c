
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct enetc_pf {int vlan_promisc_simap; TYPE_1__* si; } ;
struct enetc_hw {int dummy; } ;
struct TYPE_4__ {struct enetc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct enetc_hw*) ;
 int FUNC_1 (struct enetc_hw*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct enetc_hw*,int ,int ) ;
 int FUNC_6 (struct enetc_hw*,int *) ;
 int FUNC_7 (struct enetc_hw*,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(struct enetc_pf *VAR_5)
{
 u8 VAR_6[VAR_3];
 struct enetc_hw *VAR_7 = &VAR_5->si->hw;

 FUNC_1(VAR_7);

 FUNC_0(VAR_7);

 FUNC_4(VAR_5->si);


 FUNC_8(VAR_6, VAR_3);
 FUNC_6(VAR_7, VAR_6);


 FUNC_2(VAR_5->si);


 FUNC_3(VAR_5->si);


 VAR_5->vlan_promisc_simap = VAR_4;
 FUNC_7(VAR_7, VAR_5->vlan_promisc_simap);

 FUNC_5(VAR_7, VAR_2, 0);


 FUNC_5(VAR_7, VAR_0, VAR_1);
}
