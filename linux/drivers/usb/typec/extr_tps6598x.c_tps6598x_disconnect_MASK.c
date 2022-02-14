
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tps6598x {int port; int * partner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct tps6598x *VAR_1, u32 VAR_2)
{
 if (!FUNC_0(VAR_1->partner))
  FUNC_8(VAR_1->partner);
 VAR_1->partner = ((void*)0);
 FUNC_5(VAR_1->port, VAR_0);
 FUNC_6(VAR_1->port, FUNC_2(VAR_2));
 FUNC_7(VAR_1->port, FUNC_3(VAR_2));
 FUNC_4(VAR_1->port, FUNC_1(VAR_2));
}
