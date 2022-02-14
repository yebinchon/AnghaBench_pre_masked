
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int handle; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct asus_laptop *VAR_4)
{
 return !FUNC_1(VAR_4->name, VAR_0) &&
    !FUNC_0(VAR_4->handle, VAR_2, ((void*)0)) &&
    !FUNC_0(VAR_4->handle, VAR_1, ((void*)0)) &&
    !FUNC_0(VAR_4->handle, VAR_3, ((void*)0));
}
