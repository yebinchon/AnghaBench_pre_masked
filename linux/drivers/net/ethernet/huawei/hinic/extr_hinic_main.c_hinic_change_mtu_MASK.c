
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct hinic_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_dev*,int) ;
 struct hinic_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hinic_dev*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct hinic_dev*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct hinic_dev *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 FUNC_3(VAR_3, VAR_0, VAR_1, "set_mtu = %d\n", VAR_2);

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4)
  FUNC_2(VAR_3, VAR_0, VAR_1, "Failed to set port mtu\n");
 else
  VAR_1->mtu = VAR_2;

 return VAR_4;
}
