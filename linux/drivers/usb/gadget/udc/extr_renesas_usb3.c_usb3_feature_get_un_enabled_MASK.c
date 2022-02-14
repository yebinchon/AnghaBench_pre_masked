
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct renesas_usb3*,int ) ;

__attribute__((used)) static u16 FUNC_1(struct renesas_usb3 *VAR_7)
{
 u32 VAR_8 = VAR_1 | VAR_3;
 u32 VAR_9 = VAR_0 | VAR_2;
 u32 VAR_10 = FUNC_0(VAR_7, VAR_4);
 u16 VAR_11 = 0;


 if (!(VAR_10 & VAR_8))
  VAR_11 |= 1 << VAR_6;
 if (!(VAR_10 & VAR_9))
  VAR_11 |= 1 << VAR_5;

 return VAR_11;
}
