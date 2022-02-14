
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port_id; } ;
struct TYPE_4__ {TYPE_1__ ids; } ;
struct fcoe_rport {TYPE_2__ rdata; } ;
struct fcoe_ctlr {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fcoe_ctlr*,char*,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fcoe_ctlr*,struct fcoe_rport*) ;

__attribute__((used)) static void FUNC_3(struct fcoe_ctlr *VAR_2,
        struct fcoe_rport *VAR_3)
{
 FUNC_0(VAR_2, "claim resp from from rport %x - state %s\n",
   VAR_3->rdata.ids.port_id, FUNC_1(VAR_2->state));
 if (VAR_2->state == VAR_1 || VAR_2->state == VAR_0)
  FUNC_2(VAR_2, VAR_3);
}
