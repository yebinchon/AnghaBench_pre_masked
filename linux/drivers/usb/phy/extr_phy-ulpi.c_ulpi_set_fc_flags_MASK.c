
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int FUNC_0 (struct usb_phy*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_1(struct usb_phy *VAR_18)
{
 unsigned int VAR_19 = 0;





 if (VAR_18->flags & VAR_1)
  VAR_19 |= VAR_10;
 else if (VAR_18->flags & VAR_2)
  VAR_19 |= VAR_11;
 else if (VAR_18->flags & VAR_0)
  VAR_19 |= VAR_8;
 else
  VAR_19 |= VAR_9;

 if (VAR_18->flags & VAR_6)
  VAR_19 |= VAR_17;





 if (VAR_18->flags & VAR_4)
  VAR_19 |= VAR_13;
 else if (VAR_18->flags & VAR_3)
  VAR_19 |= VAR_12;
 else if (VAR_18->flags & VAR_5)
  VAR_19 |= VAR_15;
 else
  VAR_19 |= VAR_14;





 VAR_19 |= VAR_16;

 return FUNC_0(VAR_18, VAR_19, VAR_7);
}
