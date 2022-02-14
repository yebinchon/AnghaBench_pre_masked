
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int match_flags; int dst_addr; int src_addr; int vlan_tci; } ;
struct igb_nfc_filter {int action; TYPE_1__ filter; int etype_reg_index; } ;
struct igb_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct igb_adapter*,int ) ;
 int FUNC_1 (struct igb_adapter*,int ) ;
 int FUNC_2 (struct igb_adapter*,int ,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct igb_adapter *VAR_5, struct igb_nfc_filter *VAR_6)
{
 if (VAR_6->filter.match_flags & VAR_1)
  FUNC_0(VAR_5,
         VAR_6->etype_reg_index);

 if (VAR_6->filter.match_flags & VAR_3)
  FUNC_1(VAR_5,
        FUNC_3(VAR_6->filter.vlan_tci));

 if (VAR_6->filter.match_flags & VAR_2)
  FUNC_2(VAR_5, VAR_6->filter.src_addr,
         VAR_6->action,
         VAR_4);

 if (VAR_6->filter.match_flags & VAR_0)
  FUNC_2(VAR_5, VAR_6->filter.dst_addr,
         VAR_6->action, 0);

 return 0;
}
