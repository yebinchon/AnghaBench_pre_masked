
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ispif_device {scalar_t__ base; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ispif_device *VAR_2, u32 VAR_3,
         enum ispif_intf VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_3 != VAR_0 &&
     VAR_3 != VAR_1)
  return;

 switch (VAR_4) {
 case 130:
  if (VAR_5 < 8)
   VAR_8 = FUNC_0(VAR_6, 0);
  else
   VAR_8 = FUNC_2(VAR_6, 0);
  break;
 case 129:
  if (VAR_5 < 8)
   VAR_8 = FUNC_0(VAR_6, 1);
  else
   VAR_8 = FUNC_2(VAR_6, 1);
  break;
 case 128:
  if (VAR_5 < 8)
   VAR_8 = FUNC_0(VAR_6, 2);
  else
   VAR_8 = FUNC_2(VAR_6, 2);
  break;
 default:
  return;
 }

 if (VAR_7)
  VAR_9 = FUNC_1(VAR_5);
 else
  VAR_9 = 0;

 FUNC_3(VAR_9, VAR_2->base + VAR_8);
}
