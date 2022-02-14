
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct usbnet {int net; int mii; int data; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;
struct asix_data {scalar_t__ phymode; scalar_t__ ledmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct usbnet*,int,int ) ;
 scalar_t__ FUNC_1 (struct ethtool_cmd*) ;
 int FUNC_2 (struct usbnet*,scalar_t__) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,struct ethtool_cmd*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_10)
{
 u16 VAR_11;
 struct ethtool_cmd VAR_12 = { .cmd = VAR_6 };
 struct asix_data *VAR_13 = (struct asix_data *)&VAR_10->data;
 u32 VAR_14;

 FUNC_5(VAR_10->net, "ax88178_link_reset()\n");

 FUNC_3(&VAR_10->mii, 1, 1);
 FUNC_4(&VAR_10->mii, &VAR_12);
 VAR_11 = VAR_0;
 VAR_14 = FUNC_1(&VAR_12);

 if (VAR_14 == VAR_9)
  VAR_11 |= VAR_3;
 else if (VAR_14 == VAR_8)
  VAR_11 |= VAR_4;
 else
  VAR_11 &= ~(VAR_4 | VAR_3);

 VAR_11 |= VAR_1;

 if (VAR_12.duplex == VAR_5)
  VAR_11 |= VAR_2;
 else
  VAR_11 &= ~VAR_2;

 FUNC_5(VAR_10->net, "ax88178_link_reset() speed: %u duplex: %d setting mode to 0x%04x\n",
     VAR_14, VAR_12.duplex, VAR_11);

 FUNC_0(VAR_10, VAR_11, 0);

 if (VAR_13->phymode == VAR_7 && VAR_13->ledmode)
  FUNC_2(VAR_10, VAR_14);

 return 0;
}
