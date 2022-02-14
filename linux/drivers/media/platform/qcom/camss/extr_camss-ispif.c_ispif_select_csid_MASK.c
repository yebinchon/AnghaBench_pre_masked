
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ispif_device {scalar_t__ base; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;





 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ispif_device *VAR_0, enum ispif_intf VAR_1,
         u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_0->base + FUNC_1(VAR_3));
 switch (VAR_1) {
 case 132:
  VAR_5 &= ~(FUNC_0(1) | FUNC_0(0));
  if (VAR_4)
   VAR_5 |= VAR_2;
  break;
 case 130:
  VAR_5 &= ~(FUNC_0(5) | FUNC_0(4));
  if (VAR_4)
   VAR_5 |= (VAR_2 << 4);
  break;
 case 131:
  VAR_5 &= ~(FUNC_0(9) | FUNC_0(8));
  if (VAR_4)
   VAR_5 |= (VAR_2 << 8);
  break;
 case 129:
  VAR_5 &= ~(FUNC_0(13) | FUNC_0(12));
  if (VAR_4)
   VAR_5 |= (VAR_2 << 12);
  break;
 case 128:
  VAR_5 &= ~(FUNC_0(21) | FUNC_0(20));
  if (VAR_4)
   VAR_5 |= (VAR_2 << 20);
  break;
 }

 FUNC_3(VAR_5, VAR_0->base + FUNC_1(VAR_3));
}
