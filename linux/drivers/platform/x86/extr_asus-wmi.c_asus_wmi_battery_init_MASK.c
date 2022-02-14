
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {int battery_rsoc_available; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct asus_wmi*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct asus_wmi *VAR_2)
{
 VAR_2->battery_rsoc_available = 0;
 if (FUNC_0(VAR_2, VAR_0)) {
  VAR_2->battery_rsoc_available = 1;
  FUNC_1(&VAR_1);
 }
}
