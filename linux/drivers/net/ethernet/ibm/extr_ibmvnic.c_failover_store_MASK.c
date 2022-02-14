
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ibmvnic_adapter {TYPE_1__* vdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ __be64 ;
struct TYPE_2__ {int unit_address; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 struct net_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 int FUNC_3 (struct net_device*,char*,long) ;
 struct ibmvnic_adapter* FUNC_4 (struct net_device*) ;
 long FUNC_5 (int ,unsigned long*,int ,int ,int ,int ,int ) ;
 long FUNC_6 (int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_5, struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 struct net_device *VAR_9 = FUNC_1(VAR_5);
 struct ibmvnic_adapter *VAR_10 = FUNC_4(VAR_9);
 unsigned long VAR_11[VAR_4];
 __be64 VAR_12;
 long VAR_13;

 if (!FUNC_7(VAR_7, "1"))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_3, VAR_11, VAR_10->vdev->unit_address,
    VAR_1, 0, 0, 0);
 if (VAR_13) {
  FUNC_3(VAR_9, "Couldn't retrieve session token, rc %ld\n",
      VAR_13);
  return -VAR_0;
 }

 VAR_12 = (__be64)VAR_11[0];
 FUNC_2(VAR_9, "Initiating client failover, session id %llx\n",
     FUNC_0(VAR_12));
 VAR_13 = FUNC_6(VAR_3, VAR_10->vdev->unit_address,
    VAR_2, VAR_12, 0, 0);
 if (VAR_13) {
  FUNC_3(VAR_9, "Client initiated failover failed, rc %ld\n",
      VAR_13);
  return -VAR_0;
 }

 return VAR_8;
}
