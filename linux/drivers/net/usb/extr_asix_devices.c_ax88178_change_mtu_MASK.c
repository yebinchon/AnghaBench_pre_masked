
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; int hard_mtu; int net; } ;
struct net_device {int hard_header_len; int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int ,char*,int) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usbnet*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct usbnet *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_2 + VAR_1->hard_header_len + 4;

 FUNC_1(VAR_3->net, "ax88178_change_mtu() new_mtu=%d\n", VAR_2);

 if ((VAR_4 % VAR_3->maxpacket) == 0)
  return -VAR_0;

 VAR_1->mtu = VAR_2;
 VAR_3->hard_mtu = VAR_1->mtu + VAR_1->hard_header_len;
 FUNC_0(VAR_3);


 FUNC_3(VAR_3);

 return 0;
}
