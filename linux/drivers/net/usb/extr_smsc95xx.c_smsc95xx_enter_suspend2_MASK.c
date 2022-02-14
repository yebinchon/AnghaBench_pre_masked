
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {int suspend_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int*) ;
 int FUNC_1 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct usbnet *VAR_6)
{
 struct smsc95xx_priv *VAR_7 = (struct smsc95xx_priv *)(VAR_6->data[0]);
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_4, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 &= ~(VAR_1 | VAR_3 | VAR_0);
 VAR_8 |= VAR_2;

 VAR_9 = FUNC_1(VAR_6, VAR_4, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7->suspend_flags |= VAR_5;

 return 0;
}
