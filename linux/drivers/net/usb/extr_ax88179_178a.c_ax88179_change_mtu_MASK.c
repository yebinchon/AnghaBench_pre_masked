
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {scalar_t__ hard_mtu; } ;
struct net_device {int mtu; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int *) ;
 int FUNC_1 (struct usbnet*,int ,int ,int,int,int *) ;
 struct usbnet* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct usbnet*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4)
{
 struct usbnet *VAR_5 = FUNC_2(VAR_3);
 u16 VAR_6;

 VAR_3->mtu = VAR_4;
 VAR_5->hard_mtu = VAR_3->mtu + VAR_3->hard_header_len;

 if (VAR_3->mtu > 1500) {
  FUNC_0(VAR_5, VAR_0, VAR_2,
     2, 2, &VAR_6);
  VAR_6 |= VAR_1;
  FUNC_1(VAR_5, VAR_0, VAR_2,
      2, 2, &VAR_6);
 } else {
  FUNC_0(VAR_5, VAR_0, VAR_2,
     2, 2, &VAR_6);
  VAR_6 &= ~VAR_1;
  FUNC_1(VAR_5, VAR_0, VAR_2,
      2, 2, &VAR_6);
 }


 FUNC_3(VAR_5);

 return 0;
}
