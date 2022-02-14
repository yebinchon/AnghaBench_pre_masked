
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; scalar_t__ hard_mtu; } ;
struct net_device {int mtu; scalar_t__ hard_header_len; } ;
struct TYPE_2__ {int mtu; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int*) ;
 int FUNC_2 (struct usbnet*,int ,int ,int,int,int *) ;
 int FUNC_3 (int *,int *,int) ;
 struct usbnet* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6, int VAR_7)
{
 struct usbnet *VAR_8 = FUNC_4(VAR_6);
 u16 VAR_9 = 0;
 u8 VAR_10[5];

 VAR_6->mtu = VAR_7;
 VAR_8->hard_mtu = VAR_6->mtu + VAR_6->hard_header_len;

 FUNC_0(VAR_8, VAR_1, VAR_3,
     2, &VAR_9);
 if (VAR_6->mtu > 1500)
  VAR_9 |= VAR_2;
 else
  VAR_9 &= ~VAR_2;

 FUNC_1(VAR_8, VAR_1, VAR_3,
      2, &VAR_9);

 if (VAR_8->net->mtu > 12500) {
  FUNC_3(VAR_10, &VAR_0[2], 5);

  FUNC_2(VAR_8, VAR_1, VAR_5,
     5, 5, VAR_10);
 }


 if (VAR_8->net->mtu <= 4500)
  VAR_9 = 0x0810;
 else if (VAR_8->net->mtu <= 9500)
  VAR_9 = 0x1020;
 else if (VAR_8->net->mtu <= 12500)
  VAR_9 = 0x1420;
 else
  VAR_9 = 0x1A20;

 FUNC_1(VAR_8, VAR_1, VAR_4,
      2, &VAR_9);

 return 0;
}
