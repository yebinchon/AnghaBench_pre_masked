
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_interface {int remove_dev; int add_dev; int * subsys; int name; } ;
struct scif_client {struct subsys_interface si; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct subsys_interface*) ;

int FUNC_1(struct scif_client *VAR_3)
{
 struct subsys_interface *VAR_4 = &VAR_3->si;

 VAR_4->name = VAR_3->name;
 VAR_4->subsys = &VAR_1;
 VAR_4->add_dev = VAR_0;
 VAR_4->remove_dev = VAR_2;

 return FUNC_0(&VAR_3->si);
}
