
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_net_priv {int base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xlr_net_priv*) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct xlr_net_priv *VAR_4)
{
 u32 VAR_5;


 FUNC_1(VAR_4->base_addr, VAR_0, 0x01);


 FUNC_1(VAR_4->base_addr, VAR_3,
       ((0x7f << 8) | (1 << 1)));



 FUNC_1(VAR_4->base_addr, VAR_1,
       (9 << 20) | (1 << 19) | (1 << 18) | (0x01 << 16) |
       (0x0800 << 0));
 FUNC_1(VAR_4->base_addr, VAR_1 + 1,
       (9 << 25) | (1 << 21) | (12 << 14) | (4 << 10) |
       (16 << 4) | 4);


 FUNC_1(VAR_4->base_addr, VAR_2, 6);
 FUNC_1(VAR_4->base_addr, VAR_2 + 2, 17);
 VAR_5 = ((0 << 21) | (2 << 17) | (2 << 11) | (2 << 7));
 FUNC_1(VAR_4->base_addr, VAR_2 + 1, VAR_5);
 FUNC_1(VAR_4->base_addr, VAR_2 + 3, VAR_5);

 FUNC_0(VAR_4);
}
