
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usbnet*,int ,int*) ;
 int FUNC_2 (struct usbnet*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_8)
{
 struct smsc75xx_priv *VAR_9 = (struct smsc75xx_priv *)(VAR_8->data[0]);
 u32 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8, VAR_0, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->net, "Error reading PMT_CTL\n");
  return VAR_11;
 }

 VAR_10 &= ~(VAR_3 | VAR_5 | VAR_2);
 VAR_10 |= VAR_4;

 VAR_11 = FUNC_2(VAR_8, VAR_0, VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->net, "Error writing PMT_CTL\n");
  return VAR_11;
 }


 VAR_10 &= ~VAR_5;
 VAR_10 |= (VAR_6 | VAR_1);

 VAR_11 = FUNC_2(VAR_8, VAR_0, VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_8->net, "Error writing PMT_CTL\n");
  return VAR_11;
 }

 VAR_9->suspend_flags |= VAR_7;

 return 0;
}
