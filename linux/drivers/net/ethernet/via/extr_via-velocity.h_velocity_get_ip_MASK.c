
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int ip_addr; int netdev; } ;
struct in_ifaddr {int ifa_address; } ;
struct in_device {int ifa_list; } ;


 int VAR_0 ;
 struct in_device* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;
 struct in_ifaddr* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline int FUNC_5(struct velocity_info *VAR_1)
{
 struct in_device *VAR_2;
 struct in_ifaddr *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_3();
 VAR_2 = FUNC_0(VAR_1->netdev);
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_2->ifa_list);
  if (VAR_3 != ((void*)0)) {
   FUNC_1(VAR_1->ip_addr, &VAR_3->ifa_address, 4);
   VAR_4 = 0;
  }
 }
 FUNC_4();
 return VAR_4;
}
