
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_type {int dummy; } ;
struct kobject {int name; } ;


 int FUNC_0 (struct mdev_type*) ;
 int FUNC_1 (char*,int ) ;
 struct mdev_type* FUNC_2 (struct kobject*) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0)
{
 struct mdev_type *VAR_1 = FUNC_2(VAR_0);

 FUNC_1("Releasing group %s\n", VAR_0->name);
 FUNC_0(VAR_1);
}
