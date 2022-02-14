
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rockchip_efuse_chip {int clk; scalar_t__ base; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(void *VAR_8, unsigned int VAR_9,
          void *VAR_10, size_t VAR_11)
{
 struct rockchip_efuse_chip *VAR_12 = VAR_8;
 u8 *VAR_13 = VAR_10;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_12->clk);
 if (VAR_14 < 0) {
  FUNC_2(VAR_12->dev, "failed to prepare/enable efuse clk\n");
  return VAR_14;
 }

 FUNC_6(VAR_5 | VAR_6, VAR_12->base + VAR_0);
 FUNC_5(1);
 while (VAR_11--) {
  FUNC_6(FUNC_4(VAR_12->base + VAR_0) &
        (~(VAR_2 << VAR_3)),
        VAR_12->base + VAR_0);
  FUNC_6(FUNC_4(VAR_12->base + VAR_0) |
        ((VAR_9++ & VAR_2) << VAR_3),
        VAR_12->base + VAR_0);
  FUNC_5(1);
  FUNC_6(FUNC_4(VAR_12->base + VAR_0) |
        VAR_7, VAR_12->base + VAR_0);
  FUNC_5(1);
  *VAR_13++ = FUNC_3(VAR_12->base + VAR_1);
  FUNC_6(FUNC_4(VAR_12->base + VAR_0) &
         (~VAR_7), VAR_12->base + VAR_0);
  FUNC_5(1);
 }


 FUNC_6(VAR_6 | VAR_4, VAR_12->base + VAR_0);

 FUNC_0(VAR_12->clk);

 return 0;
}
