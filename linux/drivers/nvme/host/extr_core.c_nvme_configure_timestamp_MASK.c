
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts ;
struct nvme_ctrl {int oncs; int device; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_ctrl*,int ,int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_5(struct nvme_ctrl *VAR_2)
{
 __le64 VAR_3;
 int VAR_4;

 if (!(VAR_2->oncs & VAR_0))
  return 0;

 VAR_3 = FUNC_0(FUNC_3(FUNC_2()));
 VAR_4 = FUNC_4(VAR_2, VAR_1, 0, &VAR_3, sizeof(VAR_3),
   ((void*)0));
 if (VAR_4)
  FUNC_1(VAR_2->device,
   "could not set timestamp (%d)\n", VAR_4);
 return VAR_4;
}
