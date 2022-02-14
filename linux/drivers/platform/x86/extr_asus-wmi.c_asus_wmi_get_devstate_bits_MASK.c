
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asus_wmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct asus_wmi*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct asus_wmi *VAR_4,
          u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (!(VAR_7 & VAR_0))
  return -VAR_3;

 if (VAR_6 == VAR_1) {
  if (VAR_7 & VAR_2)
   return -VAR_3;
 }

 return VAR_7 & VAR_6;
}
