
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {scalar_t__ dev; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,struct lcs_card**,int) ;
 int FUNC_1 (int,int ,char*) ;
 struct lcs_card* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct lcs_card*) ;
 int FUNC_5 (struct lcs_card*) ;
 int FUNC_6 (struct ccwgroup_device*) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct ccwgroup_device *VAR_2)
{
 struct lcs_card *VAR_3;

 VAR_3 = FUNC_2(&VAR_2->dev);
 if (!VAR_3)
  return;

 FUNC_1(3, VAR_1, "remdev");
 FUNC_0(3, VAR_1, &VAR_3, sizeof(void*));
 if (VAR_2->state == VAR_0) {
  FUNC_6(VAR_2);
 }
 if (VAR_3->dev)
  FUNC_8(VAR_3->dev);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_3(&VAR_2->dev, ((void*)0));
 FUNC_7(&VAR_2->dev);
}
