
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int dev; scalar_t__ is_deep_sleep; int ds_awake_q; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct lbs_private *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->is_deep_sleep) {
  if (!FUNC_1(VAR_1->ds_awake_q,
     !VAR_1->is_deep_sleep, (10 * VAR_0))) {
   FUNC_0(VAR_1->dev, "ds_awake_q: timer expired\n");
   VAR_2 = -1;
  }
 }

 return VAR_2;
}
