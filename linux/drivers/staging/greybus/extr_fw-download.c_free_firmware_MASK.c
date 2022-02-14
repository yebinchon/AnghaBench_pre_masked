
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_request {int disabled; int node; } ;
struct fw_download {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fw_request*) ;

__attribute__((used)) static void FUNC_4(struct fw_download *VAR_0,
     struct fw_request *VAR_1)
{

 if (VAR_1->disabled)
  return;

 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_1->node);
 FUNC_2(&VAR_0->mutex);

 VAR_1->disabled = 1;
 FUNC_3(VAR_1);
}
