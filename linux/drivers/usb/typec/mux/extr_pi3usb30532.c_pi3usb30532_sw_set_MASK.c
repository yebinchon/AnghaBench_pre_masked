
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct typec_switch {int dummy; } ;
struct pi3usb30532 {int lock; int conf; } ;
typedef enum typec_orientation { ____Placeholder_typec_orientation } typec_orientation ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pi3usb30532*,int ) ;
 struct pi3usb30532* FUNC_3 (struct typec_switch*) ;

__attribute__((used)) static int FUNC_4(struct typec_switch *VAR_2,
         enum typec_orientation VAR_3)
{
 struct pi3usb30532 *VAR_4 = FUNC_3(VAR_2);
 u8 VAR_5;
 int VAR_6;

 FUNC_0(&VAR_4->lock);
 VAR_5 = VAR_4->conf;

 switch (VAR_3) {
 case 130:
  VAR_5 = VAR_0;
  break;
 case 129:
  VAR_5 &= ~VAR_1;
  break;
 case 128:
  VAR_5 |= VAR_1;
  break;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 FUNC_1(&VAR_4->lock);

 return VAR_6;
}
