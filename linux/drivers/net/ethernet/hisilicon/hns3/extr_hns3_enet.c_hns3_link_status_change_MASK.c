
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct hnae3_handle *VAR_0, bool VAR_1)
{
 struct net_device *VAR_2 = VAR_0->kinfo.netdev;

 if (!VAR_2)
  return;

 if (VAR_1) {
  FUNC_2(VAR_2);
  FUNC_5(VAR_2);
  if (FUNC_3(VAR_0))
   FUNC_0(VAR_2, "link up\n");
 } else {
  FUNC_1(VAR_2);
  FUNC_4(VAR_2);
  if (FUNC_3(VAR_0))
   FUNC_0(VAR_2, "link down\n");
 }
}
