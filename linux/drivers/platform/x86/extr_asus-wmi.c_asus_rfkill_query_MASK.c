
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int dummy; } ;
struct asus_rfkill {int rfkill; int dev_id; int asus; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct rfkill *VAR_0, void *VAR_1)
{
 struct asus_rfkill *VAR_2 = VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->asus, VAR_2->dev_id);

 if (VAR_3 < 0)
  return;

 FUNC_1(VAR_2->rfkill, !VAR_3);
}
