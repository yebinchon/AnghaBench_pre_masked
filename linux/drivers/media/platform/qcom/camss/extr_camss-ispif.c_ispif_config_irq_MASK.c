
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ispif_device {scalar_t__ base; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_9 ;
 int VAR_10 ;





 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct ispif_device *VAR_11, enum ispif_intf VAR_12,
        u8 VAR_13, u8 VAR_14)
{
 u32 VAR_15;

 switch (VAR_12) {
 case 132:
  VAR_15 = FUNC_6(VAR_11->base + FUNC_3(VAR_13));
  VAR_15 &= ~VAR_2;
  if (VAR_14)
   VAR_15 |= VAR_1;
  FUNC_8(VAR_15, VAR_11->base + FUNC_3(VAR_13));
  FUNC_8(VAR_1,
          VAR_11->base + FUNC_0(VAR_13));
  break;
 case 130:
  VAR_15 = FUNC_6(VAR_11->base + FUNC_3(VAR_13));
  VAR_15 &= ~VAR_4;
  if (VAR_14)
   VAR_15 |= VAR_3;
  FUNC_8(VAR_15, VAR_11->base + FUNC_3(VAR_13));
  FUNC_8(VAR_3,
          VAR_11->base + FUNC_0(VAR_13));
  break;
 case 131:
  VAR_15 = FUNC_6(VAR_11->base + FUNC_4(VAR_13));
  VAR_15 &= ~VAR_6;
  if (VAR_14)
   VAR_15 |= VAR_5;
  FUNC_8(VAR_15, VAR_11->base + FUNC_4(VAR_13));
  FUNC_8(VAR_5,
          VAR_11->base + FUNC_1(VAR_13));
  break;
 case 129:
  VAR_15 = FUNC_6(VAR_11->base + FUNC_4(VAR_13));
  VAR_15 &= ~VAR_8;
  if (VAR_14)
   VAR_15 |= VAR_7;
  FUNC_8(VAR_15, VAR_11->base + FUNC_4(VAR_13));
  FUNC_8(VAR_7,
          VAR_11->base + FUNC_1(VAR_13));
  break;
 case 128:
  VAR_15 = FUNC_6(VAR_11->base + FUNC_5(VAR_13));
  VAR_15 &= ~VAR_10;
  if (VAR_14)
   VAR_15 |= VAR_9;
  FUNC_8(VAR_15, VAR_11->base + FUNC_5(VAR_13));
  FUNC_8(VAR_9,
          VAR_11->base + FUNC_2(VAR_13));
  break;
 }

 FUNC_7(0x1, VAR_11->base + VAR_0);
}
