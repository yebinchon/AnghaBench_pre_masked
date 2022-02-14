
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct slave {int dummy; } ;
struct bonding {int dev; } ;
struct alb_walk_data {int strict_match; struct bonding* bond; struct slave* slave; int * mac_addr; } ;


 int FUNC_0 (struct slave*,int *,int ,int ) ;
 int VAR_0 ;
 struct bonding* FUNC_1 (struct slave*) ;
 int FUNC_2 (int ,int ,struct alb_walk_data*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct slave *VAR_1, u8 VAR_2[],
          bool VAR_3)
{
 struct bonding *VAR_4 = FUNC_1(VAR_1);
 struct alb_walk_data VAR_5 = {
  .strict_match = VAR_3,
  .mac_addr = VAR_2,
  .slave = VAR_1,
  .bond = VAR_4,
 };


 FUNC_0(VAR_1, VAR_2, 0, 0);




 FUNC_3();
 FUNC_2(VAR_4->dev, VAR_0, &VAR_5);
 FUNC_4();
}
