
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct typec_mux {int dummy; } ;
struct pi3usb30532 {int conf; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pi3usb30532*,int) ;
 struct pi3usb30532* FUNC_3 (struct typec_mux*) ;

__attribute__((used)) static int FUNC_4(struct typec_mux *VAR_5, int VAR_6)
{
 struct pi3usb30532 *VAR_7 = FUNC_3(VAR_5);
 u8 VAR_8;
 int VAR_9;

 FUNC_0(&VAR_7->lock);
 VAR_8 = VAR_7->conf;

 switch (VAR_6) {
 case 129:
  VAR_8 = (VAR_8 & VAR_2) |
      VAR_1;
  break;
 case 128:
  VAR_8 = (VAR_8 & VAR_2) |
      VAR_3;
  break;
 case 132:
 case 130:
  VAR_8 = (VAR_8 & VAR_2) |
      VAR_0;
  break;
 case 131:
  VAR_8 = (VAR_8 & VAR_2) |
      VAR_4;
  break;
 default:
  break;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 FUNC_1(&VAR_7->lock);

 return VAR_9;
}
