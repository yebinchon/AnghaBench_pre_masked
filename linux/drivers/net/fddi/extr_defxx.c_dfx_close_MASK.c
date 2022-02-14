
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct net_device {int irq; } ;
struct TYPE_10__ {scalar_t__ lword; } ;
struct TYPE_12__ {scalar_t__ lword; } ;
struct TYPE_11__ {scalar_t__ lword; } ;
struct TYPE_13__ {int cons_block_virt; TYPE_1__ rcv_xmt_reg; TYPE_3__ cmd_rsp_reg; TYPE_2__ cmd_req_reg; } ;
typedef int PI_CONSUMER_BLOCK ;
typedef TYPE_4__ DFX_board_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_4__* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_3)
{
 DFX_board_t *VAR_4 = FUNC_7(VAR_3);

 FUNC_0("In dfx_close...\n");



 FUNC_2(VAR_4, VAR_2, VAR_0);



 (void) FUNC_1(VAR_4, VAR_1);
 FUNC_4(VAR_4);
 VAR_4->cmd_req_reg.lword = 0;
 VAR_4->cmd_rsp_reg.lword = 0;
 VAR_4->rcv_xmt_reg.lword = 0;



 FUNC_6(VAR_4->cons_block_virt, 0, sizeof(PI_CONSUMER_BLOCK));



 FUNC_3(VAR_4);



 FUNC_8(VAR_3);



 FUNC_5(VAR_3->irq, VAR_3);

 return 0;
}
