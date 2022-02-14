
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_sq {int confirm_done; int free_done; int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct nvmet_sq *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->ref, VAR_1, 0, VAR_0);
 if (VAR_3) {
  FUNC_2("percpu_ref init failed!\n");
  return VAR_3;
 }
 FUNC_0(&VAR_2->free_done);
 FUNC_0(&VAR_2->confirm_done);

 return 0;
}
