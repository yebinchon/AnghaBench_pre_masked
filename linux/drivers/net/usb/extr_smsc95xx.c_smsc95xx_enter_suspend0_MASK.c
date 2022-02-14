
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {int wolopts; int suspend_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct usbnet*,int ,int*) ;
 int FUNC_1 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_9)
{
 struct smsc95xx_priv *VAR_10 = (struct smsc95xx_priv *)(VAR_9->data[0]);
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_9, VAR_6, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 &= (~(VAR_1 | VAR_3 | VAR_0));
 VAR_11 |= VAR_2;

 VAR_12 = FUNC_1(VAR_9, VAR_6, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_11 &= ~VAR_3;
 VAR_11 |= VAR_5;


 if (VAR_10->wolopts & VAR_8)
  VAR_11 |= VAR_4;

 VAR_12 = FUNC_1(VAR_9, VAR_6, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_0(VAR_9, VAR_6, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->suspend_flags |= VAR_7;

 return 0;
}
