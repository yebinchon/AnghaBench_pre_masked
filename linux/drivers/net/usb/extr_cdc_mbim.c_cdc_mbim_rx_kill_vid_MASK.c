
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct usbnet {int data; } ;
struct net_device {int dummy; } ;
struct cdc_mbim_state {int flags; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usbnet* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, __be16 VAR_3, u16 VAR_4)
{
 struct usbnet *VAR_5 = FUNC_0(VAR_2);
 struct cdc_mbim_state *VAR_6 = (void *)&VAR_5->data;


 if (VAR_4 == VAR_1)
  VAR_6->flags &= ~VAR_0;
 return 0;
}
