
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igb_adapter {TYPE_1__* vf_data; } ;
struct TYPE_2__ {scalar_t__ pf_qos; scalar_t__ pf_vlan; } ;


 int FUNC_0 (struct igb_adapter*,scalar_t__,int,int) ;
 int FUNC_1 (struct igb_adapter*,int,int) ;
 int FUNC_2 (struct igb_adapter*,int,int) ;
 int FUNC_3 (struct igb_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct igb_adapter *VAR_0, int VAR_1)
{

 FUNC_0(VAR_0, 0, 1, VAR_1);

 FUNC_3(VAR_0, 0, VAR_1);
 FUNC_2(VAR_0, VAR_1, 1);


 if (VAR_0->vf_data[VAR_1].pf_vlan)
  FUNC_0(VAR_0, VAR_0->vf_data[VAR_1].pf_vlan,
    0, VAR_1);

 VAR_0->vf_data[VAR_1].pf_vlan = 0;
 VAR_0->vf_data[VAR_1].pf_qos = 0;
 FUNC_1(VAR_0, VAR_1, 0);

 return 0;
}
