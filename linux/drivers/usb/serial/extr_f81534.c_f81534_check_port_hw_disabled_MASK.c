
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct usb_serial*,int,int ,int*) ;
 int FUNC_1 (struct usb_serial*,int,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct usb_serial *VAR_13, int VAR_14)
{
 int VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19;

 VAR_19 = VAR_10 | VAR_12 | VAR_11 | VAR_9;

 VAR_15 = FUNC_0(VAR_13, VAR_14,
    VAR_3, &VAR_17);
 if (VAR_15)
  return 0;

 if ((VAR_17 & VAR_19) != VAR_19)
  return 0;

 VAR_15 = FUNC_1(VAR_13, VAR_14,
    VAR_0, VAR_6 |
    VAR_4 | VAR_5);
 if (VAR_15)
  return 0;

 VAR_15 = FUNC_0(VAR_13, VAR_14,
    VAR_2, &VAR_16);
 if (VAR_15)
  return 0;

 VAR_15 = FUNC_1(VAR_13, VAR_14,
    VAR_2, VAR_8);
 if (VAR_15)
  return 0;

 VAR_15 = FUNC_1(VAR_13, VAR_14,
    VAR_2, 0x0);
 if (VAR_15)
  return 0;

 FUNC_2(60);

 VAR_15 = FUNC_0(VAR_13, VAR_14,
    VAR_1, &VAR_18);
 if (VAR_15)
  return 0;

 VAR_15 = FUNC_1(VAR_13, VAR_14,
    VAR_2, VAR_16);
 if (VAR_15)
  return 0;

 if ((VAR_18 & VAR_7) == VAR_7)
  return 1;

 return 0;
}
