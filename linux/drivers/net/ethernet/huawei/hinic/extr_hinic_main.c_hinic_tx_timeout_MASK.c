
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hinic_dev {int dummy; } ;


 int VAR_0 ;
 struct hinic_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hinic_dev*,int ,struct net_device*,char*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct hinic_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, VAR_1, "Tx timeout\n");
}
