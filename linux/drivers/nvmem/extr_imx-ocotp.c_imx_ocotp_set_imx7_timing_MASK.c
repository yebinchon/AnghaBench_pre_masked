
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct ocotp_priv {scalar_t__ base; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ocotp_priv *VAR_4)
{
 unsigned long VAR_5 = 0;
 u64 VAR_6, VAR_7;
 u32 VAR_8 = 0;




 VAR_5 = FUNC_2(VAR_4->clk);
 VAR_6 = FUNC_1((u64)VAR_5 * VAR_0,
       VAR_3) + 1;
 VAR_7 = FUNC_0((u64)VAR_5 * VAR_1,
         VAR_3) + 1;

 VAR_8 = VAR_7 & 0x00000FFF;
 VAR_8 |= (VAR_6 << 12) & 0x000FF000;

 FUNC_3(VAR_8, VAR_4->base + VAR_2);
}
