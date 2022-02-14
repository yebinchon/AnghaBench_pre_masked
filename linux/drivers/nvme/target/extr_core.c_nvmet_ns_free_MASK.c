
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ns {size_t anagrpid; struct nvmet_ns* device_path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvmet_ns*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nvmet_ns*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nvmet_ns *VAR_2)
{
 FUNC_2(VAR_2);

 FUNC_0(&VAR_1);
 VAR_0[VAR_2->anagrpid]--;
 FUNC_3(&VAR_1);

 FUNC_1(VAR_2->device_path);
 FUNC_1(VAR_2);
}
