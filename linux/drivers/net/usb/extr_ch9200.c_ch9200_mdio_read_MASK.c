
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,unsigned char*,int,int ) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct usbnet* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4, int VAR_5)
{
 struct usbnet *VAR_6 = FUNC_2(VAR_3);
 unsigned char VAR_7[2];

 FUNC_1(VAR_3, "ch9200_mdio_read phy_id:%02x loc:%02x\n",
     VAR_4, VAR_5);

 if (VAR_4 != 0)
  return -VAR_1;

 FUNC_0(VAR_6, VAR_2, 0, VAR_5 * 2, VAR_7, 0x02,
       VAR_0);

 return (VAR_7[0] | VAR_7[1] << 8);
}
