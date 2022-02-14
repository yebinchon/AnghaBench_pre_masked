
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asus_wmi {int sfun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct asus_wmi*,int,int*) ;
 int FUNC_1 (struct asus_wmi*,int ,int*) ;

__attribute__((used)) static bool FUNC_2(struct asus_wmi *VAR_3)
{
 int VAR_4;
 int VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_0(VAR_3, 1, &VAR_5);
 if (VAR_4 != 0)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_0, &VAR_6);
 if (VAR_4 != 0)
  return 0;
 return !(VAR_6 == VAR_2 || VAR_6 & 0xFFF80000
   || (!VAR_3->sfun && !(VAR_6 & VAR_1)));
}
