
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ispif_device {int base; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;





 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct ispif_device *VAR_0, enum ispif_intf VAR_1,
        u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5 = 1 << VAR_2;
 u32 VAR_6 = 0;
 u32 VAR_7;

 switch (VAR_1) {
 case 132:
  VAR_6 = FUNC_0(VAR_3, 0);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_3, 0);
  break;
 case 131:
  VAR_6 = FUNC_0(VAR_3, 1);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_3, 1);
  break;
 case 128:
  VAR_6 = FUNC_1(VAR_3, 2);
  break;
 }

 VAR_7 = FUNC_2(VAR_0->base + VAR_6);
 if (VAR_4)
  VAR_7 |= VAR_5;
 else
  VAR_7 &= ~VAR_5;

 FUNC_3(VAR_7, VAR_0->base + VAR_6);
}
