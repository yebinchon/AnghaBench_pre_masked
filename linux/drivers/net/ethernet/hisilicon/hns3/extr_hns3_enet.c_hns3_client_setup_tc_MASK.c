
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct hnae3_knic_private_info {struct net_device* netdev; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_3, u8 VAR_4)
{
 struct hnae3_knic_private_info *VAR_5 = &VAR_3->kinfo;
 struct net_device *VAR_6 = VAR_5->netdev;

 if (VAR_4 > VAR_2)
  return -VAR_0;

 if (!VAR_6)
  return -VAR_1;

 return FUNC_0(VAR_6);
}
