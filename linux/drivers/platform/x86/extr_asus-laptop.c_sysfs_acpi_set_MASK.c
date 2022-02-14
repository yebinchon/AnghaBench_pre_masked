
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int handle; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int*) ;
 scalar_t__ FUNC_1 (int ,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct asus_laptop *VAR_1,
         const char *VAR_2, size_t VAR_3,
         const char *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 if (FUNC_1(VAR_1->handle, VAR_4, VAR_6))
  return -VAR_0;
 return VAR_3;
}
