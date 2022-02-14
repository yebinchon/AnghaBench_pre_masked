
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int *,char*,unsigned char,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_8,
      unsigned int *VAR_9, unsigned char VAR_10)
{

 if (VAR_10 & VAR_2)
  *VAR_9 |= VAR_6;
 else
  *VAR_9 &= ~VAR_6;
 if (VAR_10 & VAR_1)
  *VAR_9 |= VAR_5;
 else
  *VAR_9 &= ~VAR_5;
 if (VAR_10 & VAR_3)
  *VAR_9 |= VAR_7;
 else
  *VAR_9 &= ~VAR_7;
 if (VAR_10 & VAR_0)
  *VAR_9 |= VAR_4;
 else
  *VAR_9 &= ~VAR_4;
 FUNC_0(&VAR_8->dev, "msr_to_state: msr=0x%x ==> state=0x%x\n", VAR_10, *VAR_9);
}
