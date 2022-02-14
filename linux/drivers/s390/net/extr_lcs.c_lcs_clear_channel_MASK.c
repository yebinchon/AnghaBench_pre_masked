
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lcs_channel {scalar_t__ state; int wait_q; TYPE_1__* ccwdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_2 ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(struct lcs_channel *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(4,VAR_2,"clearch");
 FUNC_1(4, VAR_2, "%s", FUNC_3(&VAR_3->ccwdev->dev));
 FUNC_5(FUNC_4(VAR_3->ccwdev), VAR_4);
 VAR_5 = FUNC_2(VAR_3->ccwdev, 0);
 FUNC_6(FUNC_4(VAR_3->ccwdev), VAR_4);
 if (VAR_5) {
  FUNC_1(4, VAR_2, "ecsc%s",
         FUNC_3(&VAR_3->ccwdev->dev));
  return VAR_5;
 }
 FUNC_7(VAR_3->wait_q, (VAR_3->state == VAR_0));
 VAR_3->state = VAR_1;
 return VAR_5;
}
