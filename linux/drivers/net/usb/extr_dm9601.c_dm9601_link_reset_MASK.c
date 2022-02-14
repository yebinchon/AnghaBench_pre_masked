
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; int mii; } ;
struct ethtool_cmd {int duplex; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,struct ethtool_cmd*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_1)
{
 struct ethtool_cmd VAR_2 = { .cmd = VAR_0 };

 FUNC_1(&VAR_1->mii, 1, 1);
 FUNC_2(&VAR_1->mii, &VAR_2);

 FUNC_3(VAR_1->net, "link_reset() speed: %u duplex: %d\n",
     FUNC_0(&VAR_2), VAR_2.duplex);

 return 0;
}
