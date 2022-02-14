
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {int wmi_lock; } ;
struct asus_rfkill {struct asus_wmi* asus; } ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, bool VAR_1)
{
 struct asus_rfkill *VAR_2 = VAR_0;
 struct asus_wmi *VAR_3 = VAR_2->asus;
 int VAR_4;
 FUNC_1(&VAR_3->wmi_lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_3->wmi_lock);
 return VAR_4;
}
