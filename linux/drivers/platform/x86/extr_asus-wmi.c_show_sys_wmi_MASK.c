
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wmi {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct asus_wmi*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct asus_wmi *VAR_0, int VAR_1, char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2, "%d\n", VAR_3);
}
