
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usbnet {int net; int mii; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 int FUNC_1 (struct ethtool_cmd*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,struct ethtool_cmd*) ;
 int FUNC_4 (int ,char*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_4)
{
 u8 VAR_5;
 struct ethtool_cmd VAR_6 = { .cmd = VAR_3 };

 FUNC_2(&VAR_4->mii, 1, 1);
 FUNC_3(&VAR_4->mii, &VAR_6);
 VAR_5 = VAR_0;

 if (VAR_6.duplex != VAR_2)
  VAR_5 |= ~VAR_1;

 FUNC_4(VAR_4->net, "ax88172_link_reset() speed: %u duplex: %d setting mode to 0x%04x\n",
     FUNC_1(&VAR_6), VAR_6.duplex, VAR_5);

 FUNC_0(VAR_4, VAR_5, 0);

 return 0;
}
