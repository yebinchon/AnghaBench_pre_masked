
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct net {int dummy; } ;
struct devlink_resource_size_params {int size_granularity; int unit; scalar_t__ size_max; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct devlink*,int ,int ,struct net*) ;
 int FUNC_1 (struct devlink*,char*,scalar_t__,int ,int ,struct devlink_resource_size_params*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct net* FUNC_2 (struct devlink*) ;
 scalar_t__ FUNC_3 (struct net*,int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct devlink *VAR_12)
{
 struct devlink_resource_size_params VAR_13 = {
  .size_max = (u64)-1,
  .size_granularity = 1,
  .unit = VAR_1
 };
 struct net *VAR_14 = FUNC_2(VAR_12);
 int VAR_15;
 u64 VAR_16;


 VAR_15 = FUNC_1(VAR_12, "IPv4", (u64)-1,
     VAR_2,
     VAR_0,
     &VAR_13);
 if (VAR_15) {
  FUNC_4("Failed to register IPv4 top resource\n");
  goto out;
 }

 VAR_16 = FUNC_3(VAR_14, VAR_3, 1);
 VAR_15 = FUNC_1(VAR_12, "fib", VAR_16,
     VAR_3,
     VAR_2, &VAR_13);
 if (VAR_15) {
  FUNC_4("Failed to register IPv4 FIB resource\n");
  return VAR_15;
 }

 VAR_16 = FUNC_3(VAR_14, VAR_4, 1);
 VAR_15 = FUNC_1(VAR_12, "fib-rules", VAR_16,
     VAR_4,
     VAR_2, &VAR_13);
 if (VAR_15) {
  FUNC_4("Failed to register IPv4 FIB rules resource\n");
  return VAR_15;
 }


 VAR_15 = FUNC_1(VAR_12, "IPv6", (u64)-1,
     VAR_5,
     VAR_0,
     &VAR_13);
 if (VAR_15) {
  FUNC_4("Failed to register IPv6 top resource\n");
  goto out;
 }

 VAR_16 = FUNC_3(VAR_14, VAR_6, 1);
 VAR_15 = FUNC_1(VAR_12, "fib", VAR_16,
     VAR_6,
     VAR_5, &VAR_13);
 if (VAR_15) {
  FUNC_4("Failed to register IPv6 FIB resource\n");
  return VAR_15;
 }

 VAR_16 = FUNC_3(VAR_14, VAR_7, 1);
 VAR_15 = FUNC_1(VAR_12, "fib-rules", VAR_16,
     VAR_7,
     VAR_5, &VAR_13);
 if (VAR_15) {
  FUNC_4("Failed to register IPv6 FIB rules resource\n");
  return VAR_15;
 }

 FUNC_0(VAR_12,
       VAR_3,
       VAR_8,
       VAR_14);
 FUNC_0(VAR_12,
       VAR_4,
       VAR_9,
       VAR_14);
 FUNC_0(VAR_12,
       VAR_6,
       VAR_10,
       VAR_14);
 FUNC_0(VAR_12,
       VAR_7,
       VAR_11,
       VAR_14);
out:
 return VAR_15;
}
