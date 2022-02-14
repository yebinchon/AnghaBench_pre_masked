
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int net; scalar_t__* data; } ;
struct smsc75xx_priv {int suspend_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usbnet*,int ,int*) ;
 int FUNC_2 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_6)
{
 struct smsc75xx_priv *VAR_7 = (struct smsc75xx_priv *)(VAR_6->data[0]);
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_0, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->net, "Error reading PMT_CTL\n");
  return VAR_9;
 }

 VAR_8 &= ~(VAR_2 | VAR_4 | VAR_1);
 VAR_8 |= VAR_3;

 VAR_9 = FUNC_2(VAR_6, VAR_0, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->net, "Error writing PMT_CTL\n");
  return VAR_9;
 }

 VAR_7->suspend_flags |= VAR_5;

 return 0;
}
