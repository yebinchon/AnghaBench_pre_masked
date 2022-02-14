
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int if_port; } ;
struct local_info {int probe_port; } ;
struct ifmap {int port; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int) ;
 int * VAR_1 ;
 int FUNC_1 (struct net_device*,char*,int ) ;
 struct local_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, struct ifmap *VAR_3)
{
    struct local_info *VAR_4 = FUNC_2(VAR_2);

    FUNC_3("do_config(%p)\n", VAR_2);
    if (VAR_3->port != 255 && VAR_3->port != VAR_2->if_port) {
 if (VAR_3->port > 4)
     return -VAR_0;
 if (!VAR_3->port) {
     VAR_4->probe_port = 1;
     VAR_2->if_port = 1;
 } else {
     VAR_4->probe_port = 0;
     VAR_2->if_port = VAR_3->port;
 }
 FUNC_1(VAR_2, "switching to %s port\n", VAR_1[VAR_2->if_port]);
 FUNC_0(VAR_2,1);
    }
    return 0;
}
