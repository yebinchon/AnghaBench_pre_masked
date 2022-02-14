
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; int ip_summed; struct net_device* dev; } ;
struct net_device {int features; } ;
struct iphdr {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct iphdr*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->dev;
 struct iphdr *VAR_7 = FUNC_1(VAR_5);

 if (!(VAR_6->features & VAR_4))
  return;

 if (VAR_5->protocol != FUNC_0(VAR_1))
  return;

 if (FUNC_2(VAR_7))
  return;

 if (VAR_7->protocol != VAR_2 && VAR_7->protocol != VAR_3)
  return;

 VAR_5->ip_summed = VAR_0;
}
