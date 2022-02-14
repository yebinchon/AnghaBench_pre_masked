
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctcm_priv {int protocol; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,char*,struct ccwgroup_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ccwgroup_device*) ;
 struct ctcm_priv* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ctcm_priv*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ccwgroup_device *VAR_3)
{
 struct ctcm_priv *VAR_4 = FUNC_2(&VAR_3->dev);

 FUNC_0(VAR_2, VAR_1,
   "removing device %p, proto : %d",
   VAR_3, VAR_4->protocol);

 if (VAR_3->state == VAR_0)
  FUNC_1(VAR_3);
 FUNC_3(&VAR_3->dev, ((void*)0));
 FUNC_4(VAR_4);
 FUNC_5(&VAR_3->dev);
}
