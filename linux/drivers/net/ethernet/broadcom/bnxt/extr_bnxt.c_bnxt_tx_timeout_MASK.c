
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt {int sp_event; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (int ,char*) ;
 struct bnxt* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct bnxt *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->dev, "TX timeout detected, starting reset task!\n");
 FUNC_3(VAR_0, &VAR_2->sp_event);
 FUNC_0(VAR_2);
}
