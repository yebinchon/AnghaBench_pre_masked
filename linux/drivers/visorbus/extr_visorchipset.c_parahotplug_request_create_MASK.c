
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controlvm_message {int dummy; } ;
struct parahotplug_request {struct controlvm_message msg; int expiration; int id; } ;


 int VAR_0 ;
 struct parahotplug_request* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static struct parahotplug_request *FUNC_3(
      struct controlvm_message *VAR_1)
{
 struct parahotplug_request *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->id = FUNC_2();
 VAR_2->expiration = FUNC_1();
 VAR_2->msg = *VAR_1;
 return VAR_2;
}
