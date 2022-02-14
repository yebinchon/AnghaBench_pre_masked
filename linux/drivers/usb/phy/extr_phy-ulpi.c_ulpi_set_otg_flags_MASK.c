
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usb_phy*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_phy *VAR_9)
{
 unsigned int VAR_10 = VAR_2 |
        VAR_1;

 if (VAR_9->flags & VAR_8)
  VAR_10 |= VAR_4;





 if (VAR_9->flags & VAR_6)
  VAR_10 &= ~VAR_2;

 if (VAR_9->flags & VAR_5)
  VAR_10 &= ~VAR_1;

 if (VAR_9->flags & VAR_7)
  VAR_10 |= VAR_3;

 return FUNC_0(VAR_9, VAR_10, VAR_0);
}
