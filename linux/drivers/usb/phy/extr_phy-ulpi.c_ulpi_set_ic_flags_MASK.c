
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct usb_phy*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_phy *VAR_9)
{
 unsigned int VAR_10 = 0;

 if (VAR_9->flags & VAR_0)
  VAR_10 |= VAR_5;

 if (VAR_9->flags & VAR_1)
  VAR_10 |= VAR_6;

 if (VAR_9->flags & VAR_2)
  VAR_10 |= VAR_7;

 if (VAR_9->flags & VAR_3)
  VAR_10 |= VAR_8;

 return FUNC_0(VAR_9, VAR_10, VAR_4);
}
