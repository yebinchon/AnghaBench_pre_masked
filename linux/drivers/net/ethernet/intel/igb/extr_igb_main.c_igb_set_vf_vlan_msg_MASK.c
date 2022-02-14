
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct igb_adapter {TYPE_1__* vf_data; } ;
struct TYPE_2__ {scalar_t__ pf_vlan; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct igb_adapter*,int,int,size_t) ;
 int FUNC_1 (struct igb_adapter*,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct igb_adapter *VAR_3, u32 *VAR_4, u32 VAR_5)
{
 int VAR_6 = (VAR_4[0] & VAR_1) >> VAR_2;
 int VAR_7 = (VAR_4[1] & VAR_0);
 int VAR_8;

 if (VAR_3->vf_data[VAR_5].pf_vlan)
  return -1;


 if (!VAR_7 && !VAR_6)
  return 0;

 VAR_8 = FUNC_0(VAR_3, VAR_7, !!VAR_6, VAR_5);
 if (!VAR_8)
  FUNC_1(VAR_3, VAR_5, !!VAR_7);
 return VAR_8;
}
