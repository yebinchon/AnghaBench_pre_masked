
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct slave {int dummy; } ;
struct TYPE_3__ {scalar_t__ min_links; } ;
struct bonding {int dev; TYPE_1__ params; } ;
struct aggregator {int dummy; } ;
struct TYPE_4__ {int aggregator; } ;


 TYPE_2__* FUNC_0 (struct slave*) ;
 scalar_t__ FUNC_1 (struct aggregator*) ;
 struct aggregator* FUNC_2 (int *) ;
 struct slave* FUNC_3 (struct bonding*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(struct bonding *VAR_0)
{
 struct aggregator *VAR_1;
 struct slave *VAR_2;
 int VAR_3 = 1;

 FUNC_7();
 VAR_2 = FUNC_3(VAR_0);
 if (!VAR_2) {
  VAR_3 = 0;
  goto out;
 }
 VAR_1 = FUNC_2(&(FUNC_0(VAR_2)->aggregator));
 if (VAR_1) {

  if (FUNC_1(VAR_1) < VAR_0->params.min_links) {
   if (FUNC_5(VAR_0->dev)) {
    FUNC_4(VAR_0->dev);
    goto out;
   }
  } else if (!FUNC_5(VAR_0->dev)) {
   FUNC_6(VAR_0->dev);
   goto out;
  }
 } else if (FUNC_5(VAR_0->dev)) {
  FUNC_4(VAR_0->dev);
 }
out:
 FUNC_8();
 return VAR_3;
}
