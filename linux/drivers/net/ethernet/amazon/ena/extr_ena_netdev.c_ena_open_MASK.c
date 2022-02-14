
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ena_adapter {int num_queues; } ;


 int FUNC_0 (struct ena_adapter*) ;
 int VAR_0 ;
 struct ena_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ena_adapter*,int ,struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct ena_adapter *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 VAR_3 = FUNC_4(VAR_1, VAR_2->num_queues);
 if (VAR_3) {
  FUNC_2(VAR_2, VAR_0, VAR_1, "Can't set num tx queues\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2->num_queues);
 if (VAR_3) {
  FUNC_2(VAR_2, VAR_0, VAR_1, "Can't set num rx queues\n");
  return VAR_3;
 }

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 return VAR_3;
}
