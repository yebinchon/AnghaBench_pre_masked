
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_hid {int connection; int hid; } ;
struct gb_bundle {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct gb_bundle*) ;
 scalar_t__ FUNC_3 (struct gb_bundle*) ;
 struct gb_hid* FUNC_4 (struct gb_bundle*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct gb_hid*) ;

__attribute__((used)) static void FUNC_7(struct gb_bundle *VAR_0)
{
 struct gb_hid *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_3(VAR_0))
  FUNC_2(VAR_0);

 FUNC_5(VAR_1->hid);
 FUNC_1(VAR_1->connection);
 FUNC_0(VAR_1->connection);
 FUNC_6(VAR_1);
}
