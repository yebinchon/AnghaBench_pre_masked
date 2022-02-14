
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int properties_changed_work; int get_properties_work; int get_uuid_work; scalar_t__ properties_changed_retries; scalar_t__ properties_retries; scalar_t__ uuid_retries; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tb_xdomain *VAR_0)
{
 VAR_0->uuid_retries = 0;
 VAR_0->properties_retries = 0;
 VAR_0->properties_changed_retries = 0;

 FUNC_0(&VAR_0->get_uuid_work);
 FUNC_0(&VAR_0->get_properties_work);
 FUNC_0(&VAR_0->properties_changed_work);
}
