
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct xlr_net_priv *VAR_10)
{


 FUNC_0(VAR_10->base_addr, VAR_7,
         ((1 << VAR_0) |
   (1 << VAR_2) |
   (1 << VAR_1) |
   (1 << VAR_3)), 0x0);


 FUNC_0(VAR_10->base_addr, VAR_9,
         ((1 << VAR_5) |
         (512 << VAR_6)), 0);


 FUNC_0(VAR_10->base_addr, VAR_8,
         1 << VAR_4, 0);
}
