
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int * resource_ops; } ;
struct device {int kobj; } ;
struct class_interface {int dummy; } ;


 struct pcmcia_socket* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_2,
            struct class_interface *VAR_3)
{
 struct pcmcia_socket *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->resource_ops != &VAR_0)
  return;
 FUNC_1(&VAR_2->kobj, &VAR_1);
}
