
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;

int FUNC_3(struct net_device *VAR_0,
         int VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_0,
      "Failed to set no of Tx queues: %d\n", VAR_1);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0,
      "Failed to set no of Rx queues: %d\n", VAR_2);
 return VAR_3;
}
