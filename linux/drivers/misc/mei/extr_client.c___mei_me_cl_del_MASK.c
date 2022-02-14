
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_client {int list; } ;
struct mei_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mei_me_client*) ;

__attribute__((used)) static void FUNC_2(struct mei_device *VAR_0, struct mei_me_client *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->list);
 FUNC_1(VAR_1);
}
