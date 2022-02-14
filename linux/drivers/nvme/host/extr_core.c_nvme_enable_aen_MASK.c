
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_ctrl {int oaes; int async_event_work; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nvme_ctrl*,int ,int,int *,int ,int*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct nvme_ctrl *VAR_3)
{
 u32 VAR_4, VAR_5 = VAR_3->oaes & VAR_0;
 int VAR_6;

 if (!VAR_5)
  return;

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_5,
   ((void*)0), 0, &VAR_4);
 if (VAR_6)
  FUNC_0(VAR_3->device, "Failed to configure AEN (cfg %x)\n",
    VAR_5);

 FUNC_2(VAR_2, &VAR_3->async_event_work);
}
