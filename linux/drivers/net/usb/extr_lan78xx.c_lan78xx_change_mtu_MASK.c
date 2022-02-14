
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int mtu; } ;
struct lan78xx_net {int hard_mtu; int rx_urb_size; int maxpacket; int bh; int rxq; int net; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lan78xx_net*,scalar_t__) ;
 struct lan78xx_net* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct lan78xx_net*,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, int VAR_3)
{
 struct lan78xx_net *VAR_4 = FUNC_1(VAR_2);
 int VAR_5 = VAR_3 + VAR_2->hard_header_len;
 int VAR_6 = VAR_4->hard_mtu;
 int VAR_7 = VAR_4->rx_urb_size;
 int VAR_8;


 if ((VAR_5 % VAR_4->maxpacket) == 0)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_4, VAR_3 + VAR_1);

 VAR_2->mtu = VAR_3;

 VAR_4->hard_mtu = VAR_2->mtu + VAR_2->hard_header_len;
 if (VAR_4->rx_urb_size == VAR_6) {
  VAR_4->rx_urb_size = VAR_4->hard_mtu;
  if (VAR_4->rx_urb_size > VAR_7) {
   if (FUNC_2(VAR_4->net)) {
    FUNC_4(VAR_4, &VAR_4->rxq);
    FUNC_3(&VAR_4->bh);
   }
  }
 }

 return 0;
}
