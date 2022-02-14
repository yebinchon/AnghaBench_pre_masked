
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_packet {int dummy; } ;
struct TYPE_2__ {int (* rx ) (int ,struct htc_packet*) ;} ;
struct htc_endpoint {int target; TYPE_1__ ep_cb; int eid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,struct htc_packet*) ;
 int FUNC_1 (int ,struct htc_packet*) ;

__attribute__((used)) static void FUNC_2(struct htc_endpoint *VAR_1,
       struct htc_packet *VAR_2)
{
  FUNC_0(VAR_0,
      "htc rx complete ep %d packet 0x%p\n",
      VAR_1->eid, VAR_2);

  VAR_1->ep_cb.rx(VAR_1->target, VAR_2);
}
