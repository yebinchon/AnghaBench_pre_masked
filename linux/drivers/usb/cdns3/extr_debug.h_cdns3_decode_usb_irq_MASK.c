
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;


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
 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static inline char *FUNC_2(char *VAR_12,
      enum usb_device_speed VAR_13,
      u32 VAR_14)
{
 int VAR_15;

 VAR_15 = FUNC_0(VAR_12, "IRQ %08x = ", VAR_14);

 if (VAR_14 & (VAR_0 | VAR_1)) {
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "Connection %s\n",
          FUNC_1(VAR_13));
 }
 if (VAR_14 & VAR_2 || VAR_14 & VAR_3)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "Disconnection ");
 if (VAR_14 & VAR_6)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "suspended ");
 if (VAR_14 & VAR_4)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "L1 enter ");
 if (VAR_14 & VAR_5)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "L1 exit ");
 if (VAR_14 & VAR_6)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "L2 enter ");
 if (VAR_14 & VAR_7)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "L2 exit ");
 if (VAR_14 & VAR_9)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "U3 exit ");
 if (VAR_14 & VAR_11)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "Warm Reset ");
 if (VAR_14 & VAR_10)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "Hot Reset ");
 if (VAR_14 & VAR_8)
  VAR_15 += FUNC_0(VAR_12 + VAR_15, "Reset");

 return VAR_12;
}
