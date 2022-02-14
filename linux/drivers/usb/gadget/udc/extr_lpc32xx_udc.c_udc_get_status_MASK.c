
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int is_selfpowered; } ;
struct lpc32xx_udc {int dev_status; struct lpc32xx_ep* ep; TYPE_1__ gadget; } ;
struct lpc32xx_ep {int hwep_num; int is_in; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int FUNC_2 (struct lpc32xx_udc*,int ) ;
 int FUNC_3 (struct lpc32xx_udc*,int ) ;
 int FUNC_4 (struct lpc32xx_udc*,int ,int*,int) ;

__attribute__((used)) static int FUNC_5(struct lpc32xx_udc *VAR_9, u16 VAR_10, u16 VAR_11)
{
 struct lpc32xx_ep *VAR_12;
 u32 VAR_13 = 0, VAR_14;

 switch (VAR_10 & VAR_8) {
 case 128:
  break;

 case 130:
  VAR_13 = VAR_9->gadget.is_selfpowered;
  if (VAR_9->dev_status & (1 << VAR_4))
   VAR_13 |= (1 << VAR_4);
  break;

 case 129:
  VAR_14 = VAR_11 & VAR_7;
  VAR_12 = &VAR_9->ep[VAR_14];
  if ((VAR_14 == 0) || (VAR_14 >= VAR_3))
   return -VAR_0;

  if (VAR_11 & VAR_5) {
   if (!VAR_12->is_in)
    return -VAR_0;
  } else if (VAR_12->is_in)
   return -VAR_0;


  FUNC_3(VAR_9, FUNC_0(VAR_12->hwep_num));
  VAR_14 = FUNC_2(VAR_9, FUNC_1(VAR_12->hwep_num));

  if (VAR_14 & VAR_2)
   VAR_13 = (1 << VAR_6);
  else
   VAR_13 = 0;
  break;

 default:
  break;
 }


 FUNC_4(VAR_9, VAR_1, &VAR_13, 2);

 return 0;
}
