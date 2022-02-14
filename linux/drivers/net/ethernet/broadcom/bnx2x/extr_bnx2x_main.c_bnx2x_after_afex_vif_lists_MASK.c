
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ echo; int func_bit_map; } ;
struct TYPE_6__ {TYPE_1__ vif_list_event; } ;
struct TYPE_5__ {TYPE_3__ data; } ;
union event_ring_elem {TYPE_2__ message; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_5,
           union event_ring_elem *VAR_6)
{
 if (VAR_6->message.data.vif_list_event.echo == VAR_3) {
  FUNC_0(VAR_0,
     "afex: ramrod completed VIF LIST_GET, addrs 0x%x\n",
     VAR_6->message.data.vif_list_event.func_bit_map);
  FUNC_1(VAR_5, VAR_1,
   VAR_6->message.data.vif_list_event.func_bit_map);
 } else if (VAR_6->message.data.vif_list_event.echo ==
     VAR_4) {
  FUNC_0(VAR_0, "afex: ramrod completed VIF LIST_SET\n");
  FUNC_1(VAR_5, VAR_2, 0);
 }
}
