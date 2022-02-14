
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_subsys {int dummy; } ;
struct nvmet_ns {size_t anagrpid; int buffered_io; int uuid; struct nvmet_subsys* subsys; int nsid; int disable_done; int dev_link; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 size_t VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nvmet_ns* FUNC_3 (int,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct nvmet_ns *FUNC_6(struct nvmet_subsys *VAR_4, u32 VAR_5)
{
 struct nvmet_ns *VAR_6;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_0(&VAR_6->dev_link);
 FUNC_2(&VAR_6->disable_done);

 VAR_6->nsid = VAR_5;
 VAR_6->subsys = VAR_4;

 FUNC_1(&VAR_3);
 VAR_6->anagrpid = VAR_1;
 VAR_2[VAR_6->anagrpid]++;
 FUNC_4(&VAR_3);

 FUNC_5(&VAR_6->uuid);
 VAR_6->buffered_io = 0;

 return VAR_6;
}
