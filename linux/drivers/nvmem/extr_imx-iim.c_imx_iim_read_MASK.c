
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iim_priv {int clk; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_0, unsigned int VAR_1,
     void *VAR_2, size_t VAR_3)
{
 struct iim_priv *VAR_4 = VAR_0;
 int VAR_5, VAR_6;
 u8 *VAR_7 = VAR_2;

 VAR_6 = FUNC_2(VAR_4->clk);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_3; VAR_5++) {
  int VAR_8 = VAR_5 >> 5;
  int VAR_9 = VAR_5 & 0x1f;

  *VAR_7++ = FUNC_3(VAR_4->base + FUNC_0(VAR_8) + VAR_9 * 4);
 }

 FUNC_1(VAR_4->clk);

 return 0;
}
