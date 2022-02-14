
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct lcd_device *VAR_6, int VAR_7)
{
 if (VAR_7 == VAR_2) {
  if (!(VAR_5 & VAR_0)) {
   FUNC_0(VAR_5 & VAR_1,
     VAR_4);
   FUNC_0(1, VAR_3);
   VAR_5 |= VAR_0;
  }
 } else {
  if (VAR_5 & VAR_0) {
   FUNC_0(0, VAR_4);
   FUNC_0(0, VAR_3);
   VAR_5 &= ~VAR_0;
  }
 }
 return 0;
}
