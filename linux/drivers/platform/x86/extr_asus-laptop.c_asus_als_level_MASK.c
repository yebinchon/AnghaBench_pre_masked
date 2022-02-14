
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int light_level; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct asus_laptop *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_1->handle, VAR_0, VAR_2))
  FUNC_0("Error setting light sensor level\n");
 VAR_1->light_level = VAR_2;
}
