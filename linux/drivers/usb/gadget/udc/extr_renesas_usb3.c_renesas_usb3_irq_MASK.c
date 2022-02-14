
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct renesas_usb3*) ;
 int FUNC_1 (struct renesas_usb3*) ;
 int FUNC_2 (struct renesas_usb3*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct renesas_usb3 *VAR_7 = VAR_6;
 irqreturn_t VAR_8 = VAR_3;
 u32 VAR_9 = FUNC_2(VAR_7, VAR_4);

 if (VAR_9 & VAR_0) {
  FUNC_0(VAR_7);
  VAR_8 = VAR_2;
 }

 if (VAR_9 & VAR_1) {
  FUNC_1(VAR_7);
  VAR_8 = VAR_2;
 }

 return VAR_8;
}
