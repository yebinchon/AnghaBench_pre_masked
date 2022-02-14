
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct max2165_priv {int bb_filter_8mhz_cfg; int bb_filter_7mhz_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct max2165_priv*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct max2165_priv *VAR_1, u32 VAR_2)
{
 u8 VAR_3;

 if (VAR_2 == 8000000)
  VAR_3 = VAR_1->bb_filter_8mhz_cfg;
 else
  VAR_3 = VAR_1->bb_filter_7mhz_cfg;

 FUNC_0(VAR_1, VAR_0, 0xF0, VAR_3 << 4);

 return 0;
}
