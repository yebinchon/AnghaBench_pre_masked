
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;
struct in_ifaddr {int ifa_address; } ;
struct in_device {int ifa_list; } ;
struct ethhdr {scalar_t__ h_dest; scalar_t__ h_source; } ;


 int VAR_0 ;
 struct in_device* FUNC_0 (struct net_device const*) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 struct in_ifaddr* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(const struct net_device *VAR_1, struct ethhdr *VAR_2)
{
 const struct in_device *VAR_3;

 FUNC_4();
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {

  const struct in_ifaddr *VAR_4 = FUNC_3(VAR_3->ifa_list);
  if (VAR_4) {
   FUNC_1(VAR_2->h_source, VAR_1->dev_addr, VAR_0);
   FUNC_2(VAR_2->h_dest, 0xfc, 2);
   FUNC_1(VAR_2->h_dest+2, &VAR_4->ifa_address, 4);
  }
 }
 FUNC_5();
}
