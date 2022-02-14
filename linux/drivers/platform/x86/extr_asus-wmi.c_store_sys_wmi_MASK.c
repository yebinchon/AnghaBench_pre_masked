
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asus_wmi {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct asus_wmi*,int) ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 (char const*,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct asus_wmi *VAR_0, int VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_6, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_3;
}
