
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ena_adapter {int ena_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct ena_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ena_adapter*,int ,struct net_device*,char*,int) ;
 int FUNC_3 (struct ena_adapter*,int ,struct net_device*,char*,int) ;
 int FUNC_4 (struct ena_adapter*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct ena_adapter *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->ena_dev, VAR_2);
 if (!VAR_4) {
  FUNC_2(VAR_3, VAR_0, VAR_1, "set MTU to %d\n", VAR_2);
  FUNC_4(VAR_3, VAR_2);
  VAR_1->mtu = VAR_2;
 } else {
  FUNC_3(VAR_3, VAR_0, VAR_1, "Failed to set MTU to %d\n",
     VAR_2);
 }

 return VAR_4;
}
