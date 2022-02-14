
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int data; } ;
struct net_device {int dummy; } ;
struct cdc_mbim_state {int flags; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, __be16 VAR_4, u16 VAR_5)
{
 struct usbnet *VAR_6 = FUNC_0(VAR_3);
 struct cdc_mbim_state *VAR_7 = (void *)&VAR_6->data;


 if (VAR_5 == VAR_2)
  VAR_7->flags |= VAR_1;
 else
  if (VAR_5 >= 512)
   return -VAR_0;
 return 0;
}
