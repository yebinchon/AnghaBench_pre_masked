
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int handle; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_1(struct asus_laptop *VAR_3, int VAR_4)
{
 const char *VAR_5 = VAR_4 ? VAR_2 : VAR_1;

 if (FUNC_0(VAR_3->handle, VAR_5, 0x02))
  return -VAR_0;
 return 0;
}
