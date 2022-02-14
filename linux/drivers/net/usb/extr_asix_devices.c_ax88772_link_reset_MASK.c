
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbnet {int net; int mii; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int ) ;
 scalar_t__ FUNC_1 (struct ethtool_cmd*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,struct ethtool_cmd*) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct usbnet *VAR_6)
{
 u16 VAR_7;
 struct ethtool_cmd VAR_8 = { .cmd = VAR_4 };

 FUNC_2(&VAR_6->mii, 1, 1);
 FUNC_3(&VAR_6->mii, &VAR_8);
 VAR_7 = VAR_0;

 if (FUNC_1(&VAR_8) != VAR_5)
  VAR_7 &= ~VAR_2;

 if (VAR_8.duplex != VAR_3)
  VAR_7 &= ~VAR_1;

 FUNC_4(VAR_6->net, "ax88772_link_reset() speed: %u duplex: %d setting mode to 0x%04x\n",
     FUNC_1(&VAR_8), VAR_8.duplex, VAR_7);

 FUNC_0(VAR_6, VAR_7, 0);

 return 0;
}
