
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; scalar_t__* data; } ;
struct smsc95xx_priv {int suspend_flags; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usbnet*,int ,int*) ;
 int FUNC_2 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_11)
{
 struct smsc95xx_priv *VAR_12 = (struct smsc95xx_priv *)(VAR_11->data[0]);
 u32 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_8, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_13 & VAR_9) {
  FUNC_0(VAR_11->net, "rx fifo not empty in autosuspend\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_1(VAR_11, VAR_7, &VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13 &= ~(VAR_3 | VAR_5 | VAR_1);
 VAR_13 |= VAR_4 | VAR_2;

 VAR_14 = FUNC_2(VAR_11, VAR_7, VAR_13);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_13 &= ~VAR_5;
 VAR_13 |= VAR_6;

 VAR_14 = FUNC_2(VAR_11, VAR_7, VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_12->suspend_flags |= VAR_10;

 return 0;
}
