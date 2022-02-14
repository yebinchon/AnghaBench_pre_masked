
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcs_card {scalar_t__ state; int gdev; scalar_t__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct lcs_card*,int ) ;
 int FUNC_2 (struct lcs_card*,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct lcs_card *VAR_1)
{
 if (VAR_1->dev)
  FUNC_3(VAR_1->dev);
 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_1, 0xffffffff);
 if (VAR_1->state != VAR_0)
  FUNC_0(VAR_1->gdev, 1);
 return 0;
}
