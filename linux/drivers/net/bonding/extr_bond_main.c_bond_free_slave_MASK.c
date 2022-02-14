
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slave {int notify_work; } ;
struct bonding {int dummy; } ;


 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ VAR_0 ;
 struct slave* FUNC_1 (struct slave*) ;
 struct bonding* FUNC_2 (struct slave*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct slave*) ;

__attribute__((used)) static void FUNC_5(struct slave *VAR_1)
{
 struct bonding *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(&VAR_1->notify_work);
 if (FUNC_0(VAR_2) == VAR_0)
  FUNC_4(FUNC_1(VAR_1));

 FUNC_4(VAR_1);
}
