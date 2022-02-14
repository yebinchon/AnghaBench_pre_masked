
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_channel {scalar_t__ state; int wait_q; TYPE_1__* ccwdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct lcs_channel*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int VAR_3 ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(struct lcs_channel *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_4->state == VAR_2)
  return 0;
 FUNC_0(4,VAR_3,"haltsch");
 FUNC_1(4, VAR_3, "%s", FUNC_3(&VAR_4->ccwdev->dev));
 VAR_4->state = VAR_1;
 FUNC_6(FUNC_4(VAR_4->ccwdev), VAR_5);
 VAR_6 = FUNC_2(VAR_4->ccwdev, 0);
 FUNC_7(FUNC_4(VAR_4->ccwdev), VAR_5);
 if (VAR_6) {
  FUNC_1(4, VAR_3, "ehsc%s",
         FUNC_3(&VAR_4->ccwdev->dev));
  return VAR_6;
 }

 FUNC_8(VAR_4->wait_q, (VAR_4->state == VAR_0));
 FUNC_5(VAR_4);
 return 0;
}
