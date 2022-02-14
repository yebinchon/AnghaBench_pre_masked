
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ispif_device {scalar_t__ base_clk_mux; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ispif_device *VAR_2,
     enum ispif_intf VAR_3, u8 VAR_4,
     u8 VAR_5, u8 VAR_6)
{
 u32 VAR_7;

 switch (VAR_3) {
 case 132:
  VAR_7 = FUNC_1(VAR_2->base_clk_mux + VAR_0);
  VAR_7 &= ~(0xf << (VAR_5 * 8));
  if (VAR_6)
   VAR_7 |= (VAR_4 << (VAR_5 * 8));
  FUNC_2(VAR_7, VAR_2->base_clk_mux + VAR_0);
  break;

 case 130:
  VAR_7 = FUNC_1(VAR_2->base_clk_mux + VAR_1);
  VAR_7 &= ~(0xf << (VAR_5 * 12));
  if (VAR_6)
   VAR_7 |= (VAR_4 << (VAR_5 * 12));
  FUNC_2(VAR_7, VAR_2->base_clk_mux + VAR_1);
  break;

 case 131:
  VAR_7 = FUNC_1(VAR_2->base_clk_mux + VAR_0);
  VAR_7 &= ~(0xf << (4 + (VAR_5 * 8)));
  if (VAR_6)
   VAR_7 |= (VAR_4 << (4 + (VAR_5 * 8)));
  FUNC_2(VAR_7, VAR_2->base_clk_mux + VAR_0);
  break;

 case 129:
  VAR_7 = FUNC_1(VAR_2->base_clk_mux + VAR_1);
  VAR_7 &= ~(0xf << (4 + (VAR_5 * 12)));
  if (VAR_6)
   VAR_7 |= (VAR_4 << (4 + (VAR_5 * 12)));
  FUNC_2(VAR_7, VAR_2->base_clk_mux + VAR_1);
  break;

 case 128:
  VAR_7 = FUNC_1(VAR_2->base_clk_mux + VAR_1);
  VAR_7 &= ~(0xf << (8 + (VAR_5 * 12)));
  if (VAR_6)
   VAR_7 |= (VAR_4 << (8 + (VAR_5 * 12)));
  FUNC_2(VAR_7, VAR_2->base_clk_mux + VAR_1);
  break;
 }

 FUNC_0();
}
