
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct be_adapter {int function_caps; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct be_adapter*,int *,scalar_t__*,int ) ;
 scalar_t__ FUNC_1 (struct be_adapter*,int ,int*) ;
 scalar_t__ FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int) ;
 struct be_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_9, struct ethtool_test *VAR_10,
    u64 *VAR_11)
{
 struct be_adapter *VAR_12 = FUNC_7(VAR_9);
 int VAR_13, VAR_14;
 u8 VAR_15 = 0;

 if (VAR_12->function_caps & VAR_0) {
  FUNC_3(&VAR_12->pdev->dev, "Self test not supported\n");
  VAR_10->flags |= VAR_7;
  return;
 }

 FUNC_5(VAR_11, 0, sizeof(u64) * VAR_4);


 VAR_15 = FUNC_8(VAR_9);

 if (VAR_10->flags & VAR_8) {
  if (FUNC_1(VAR_12, VAR_1, &VAR_11[0]) != 0)
   VAR_10->flags |= VAR_7;

  if (FUNC_1(VAR_12, VAR_3, &VAR_11[1]) != 0)
   VAR_10->flags |= VAR_7;

  if (VAR_10->flags & VAR_5) {
   if (FUNC_1(VAR_12, VAR_2,
          &VAR_11[2]) != 0)
    VAR_10->flags |= VAR_7;
   VAR_10->flags |= VAR_6;
  }
 }

 if (!FUNC_4(VAR_12) && FUNC_2(VAR_12) != 0) {
  VAR_11[3] = 1;
  VAR_10->flags |= VAR_7;
 }


 if (!VAR_15) {
  VAR_10->flags |= VAR_7;
  VAR_11[4] = 1;
  return;
 }

 for (VAR_14 = 10; VAR_14; VAR_14--) {
  VAR_13 = FUNC_0(VAR_12, ((void*)0), &VAR_15,
        0);
  if (VAR_13) {
   VAR_10->flags |= VAR_7;
   VAR_11[4] = -1;
   break;
  }

  if (VAR_15)
   break;

  FUNC_6(500);
 }
}
