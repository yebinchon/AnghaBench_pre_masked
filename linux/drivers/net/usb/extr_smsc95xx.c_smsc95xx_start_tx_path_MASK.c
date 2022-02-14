
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct smsc95xx_priv {int mac_cr; int mac_cr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_4)
{
 struct smsc95xx_priv *VAR_5 = (struct smsc95xx_priv *)(VAR_4->data[0]);
 unsigned long VAR_6;
 int VAR_7;


 FUNC_1(&VAR_5->mac_cr_lock, VAR_6);
 VAR_5->mac_cr |= VAR_1;
 FUNC_2(&VAR_5->mac_cr_lock, VAR_6);

 VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_5->mac_cr);
 if (VAR_7 < 0)
  return VAR_7;


 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
