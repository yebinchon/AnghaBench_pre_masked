
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_rfkill {int control_id; int asus; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, bool VAR_1)
{
 struct asus_rfkill *VAR_2 = VAR_0;

 int VAR_3 = FUNC_0(VAR_2->asus, VAR_2->control_id, !VAR_1);
 return VAR_3;
}
