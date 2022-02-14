
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct ocotp_priv {scalar_t__ base; int clk; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (unsigned long,int) ;
 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ocotp_priv *VAR_4)
{
 unsigned long VAR_5 = 0;
 unsigned long VAR_6, VAR_7, VAR_8;
 u32 VAR_9 = 0;
 VAR_5 = FUNC_2(VAR_4->clk);

 VAR_7 = FUNC_1(VAR_5 * VAR_1, 1000000000) - 1;
 VAR_6 = FUNC_1(VAR_5 * VAR_3,
       1000000000);
 VAR_6 += 2 * (VAR_7 + 1) - 1;
 VAR_8 = FUNC_0(VAR_5 * VAR_2,
     1000000);
 VAR_8 += 2 * (VAR_7 + 1) - 1;

 VAR_9 = FUNC_3(VAR_4->base + VAR_0) & 0x0FC00000;
 VAR_9 |= VAR_8 & 0x00000FFF;
 VAR_9 |= (VAR_7 << 12) & 0x0000F000;
 VAR_9 |= (VAR_6 << 16) & 0x003F0000;

 FUNC_4(VAR_9, VAR_4->base + VAR_0);
}
