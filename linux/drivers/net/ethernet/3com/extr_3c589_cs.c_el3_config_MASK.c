
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_char ;
struct net_device {size_t if_port; } ;
struct ifmap {size_t port; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 int FUNC_1 (struct net_device*,size_t) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct ifmap *VAR_3)
{
 if ((VAR_3->port != (u_char)(-1)) && (VAR_3->port != VAR_2->if_port)) {
  if (VAR_3->port <= 3) {
   VAR_2->if_port = VAR_3->port;
   FUNC_0(VAR_2, "switched to %s port\n", VAR_1[VAR_2->if_port]);
   FUNC_1(VAR_2, VAR_2->if_port);
  } else {
   return -VAR_0;
  }
 }
 return 0;
}
