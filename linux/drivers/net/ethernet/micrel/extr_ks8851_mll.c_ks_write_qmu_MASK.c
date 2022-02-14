
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__* txw; } ;
struct ks_net {int rc_rxqcr; TYPE_1__ txh; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ks_net*,scalar_t__*,int) ;
 int FUNC_3 (struct ks_net*,int ) ;
 int FUNC_4 (struct ks_net*,int ,int) ;
 int FUNC_5 (struct ks_net*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ks_net *VAR_4, u8 *VAR_5, u16 VAR_6)
{

 VAR_4->txh.txw[0] = 0;
 VAR_4->txh.txw[1] = FUNC_1(VAR_6);


 FUNC_5(VAR_4, VAR_0, (VAR_4->rc_rxqcr | VAR_2) & 0xff);

 FUNC_2(VAR_4, VAR_4->txh.txw, 4);

 FUNC_2(VAR_4, (u16 *)VAR_5, FUNC_0(VAR_6, 4));

 FUNC_5(VAR_4, VAR_0, VAR_4->rc_rxqcr);

 FUNC_4(VAR_4, VAR_1, VAR_3);

 while (FUNC_3(VAR_4, VAR_1) & VAR_3)
  ;
}
