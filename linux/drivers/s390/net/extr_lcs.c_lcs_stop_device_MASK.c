
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; scalar_t__ ml_priv; } ;
struct TYPE_4__ {scalar_t__ state; int wait_q; } ;
struct lcs_card {TYPE_1__* dev; TYPE_2__ write; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct lcs_card*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_3)
{
 struct lcs_card *VAR_4;
 int VAR_5;

 FUNC_0(2, VAR_2, "stopdev");
 VAR_4 = (struct lcs_card *) VAR_3->ml_priv;
 FUNC_3(VAR_3);
 FUNC_4(VAR_3);
 VAR_3->flags &= ~VAR_0;
 FUNC_5(VAR_4->write.wait_q,
  (VAR_4->write.state != VAR_1));
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  FUNC_1(&VAR_4->dev->dev,
   " Shutting down the LCS device failed\n");
 return VAR_5;
}
