
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_9__ {int lword; } ;
struct TYPE_10__ {TYPE_1__ rcv_xmt_reg; } ;
typedef int PI_UINT32 ;
typedef TYPE_2__ DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3)
{
 DFX_board_t *VAR_4 = FUNC_5(VAR_3);
 PI_UINT32 VAR_5;



 if(FUNC_4(VAR_4))
  FUNC_6(VAR_3);



 FUNC_3(VAR_4);
 FUNC_2(VAR_4, VAR_1, VAR_4->rcv_xmt_reg.lword);



 FUNC_1(VAR_4, VAR_0, &VAR_5);



 if (VAR_5 & VAR_2)
  FUNC_0(VAR_4);
 }
