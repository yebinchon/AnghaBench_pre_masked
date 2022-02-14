
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xlr_net_priv {int base_addr; TYPE_1__* nd; } ;
struct TYPE_2__ {scalar_t__ phy_interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct xlr_net_priv *VAR_12)
{
 u32 VAR_13 = (FUNC_0() & 0xf000);


 if ((VAR_13 == 0x8000 || VAR_13 == 0x4000 || VAR_13 == 0xc000) &&
     VAR_12->nd->phy_interface == VAR_8)
  FUNC_1(VAR_12->base_addr, VAR_10,
          (1 << VAR_4),
          (1 << VAR_4));


 FUNC_1(VAR_12->base_addr, VAR_9,
         ((1 << VAR_0) |
   (1 << VAR_2) |
   (1 << VAR_1) |
   (1 << VAR_3)),
         ((1 << VAR_0) |
   (1 << VAR_2) |
   (1 << VAR_1) |
   (1 << VAR_3)));


 FUNC_1(VAR_12->base_addr, VAR_11,
         ((1 << VAR_6) |
         (512 << VAR_7)), 0x3fff);


 FUNC_1(VAR_12->base_addr, VAR_10,
         1 << VAR_5,
         1 << VAR_5);
}
