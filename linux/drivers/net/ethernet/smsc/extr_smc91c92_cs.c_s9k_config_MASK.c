
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct smc_private {int cfg; } ;
struct net_device {int if_port; } ;
struct ifmap {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 struct smc_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct ifmap *VAR_5)
{
    struct smc_private *VAR_6 = FUNC_1(VAR_4);
    if ((VAR_5->port != (u_char)(-1)) && (VAR_5->port != VAR_4->if_port)) {
 if (VAR_6->cfg & VAR_0)
     return -VAR_2;
 else if (VAR_5->port > 2)
     return -VAR_1;
 VAR_4->if_port = VAR_5->port;
 FUNC_0(VAR_4, "switched to %s port\n", VAR_3[VAR_4->if_port]);
 FUNC_2(VAR_4);
    }
    return 0;
}
