
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qeth_card {TYPE_1__* gdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct qeth_card*,int ,int ,int*) ;
 int FUNC_7 (struct qeth_card*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct qeth_card *VAR_3)
{
 u32 VAR_4 = 3;
 int VAR_5;

 FUNC_2(VAR_3, 3, "softipv6");

 if (FUNC_0(VAR_3))
  goto out;

 VAR_5 = FUNC_6(VAR_3, VAR_1, VAR_0,
       &VAR_4);
 if (VAR_5) {
  FUNC_3(&VAR_3->gdev->dev,
   "Activating IPv6 support for %s failed\n",
   FUNC_1(VAR_3));
  return VAR_5;
 }
 VAR_5 = FUNC_7(VAR_3, VAR_1, VAR_0,
          ((void*)0));
 if (VAR_5) {
  FUNC_3(&VAR_3->gdev->dev,
   "Activating IPv6 support for %s failed\n",
    FUNC_1(VAR_3));
  return VAR_5;
 }
 VAR_5 = FUNC_7(VAR_3, VAR_2,
          VAR_0, ((void*)0));
 if (VAR_5) {
  FUNC_5(&VAR_3->gdev->dev,
   "Enabling the passthrough mode for %s failed\n",
   FUNC_1(VAR_3));
  return VAR_5;
 }
out:
 FUNC_4(&VAR_3->gdev->dev, "IPV6 enabled\n");
 return 0;
}
