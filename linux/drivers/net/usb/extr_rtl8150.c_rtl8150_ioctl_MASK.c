
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_ifru; } ;
struct TYPE_5__ {int phy; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_1__*,int,int,int*) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 rtl8150_t *VAR_6 = FUNC_1(VAR_3);
 u16 *VAR_7 = (u16 *) & VAR_4->ifr_ifru;
 int VAR_8 = 0;

 switch (VAR_5) {
 case 128:
  VAR_7[0] = VAR_6->phy;

 case 128 + 1:
  FUNC_2(VAR_6, VAR_6->phy, (VAR_7[1] & 0x1f), &VAR_7[3]);
  break;
 case 128 + 2:
  if (!FUNC_0(VAR_0))
   return -VAR_2;
  FUNC_3(VAR_6, VAR_6->phy, (VAR_7[1] & 0x1f), VAR_7[2]);
  break;
 default:
  VAR_8 = -VAR_1;
 }

 return VAR_8;
}
