
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvme_ctrl {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct nvme_ctrl*,int ,int,int *,int ,int*) ;

int FUNC_3(struct nvme_ctrl *VAR_1, int *VAR_2)
{
 u32 VAR_3 = (*VAR_2 - 1) | ((*VAR_2 - 1) << 16);
 u32 VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_0, VAR_3, ((void*)0), 0,
   &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;






 if (VAR_5 > 0) {
  FUNC_0(VAR_1->device, "Could not set queue count (%d)\n", VAR_5);
  *VAR_2 = 0;
 } else {
  VAR_6 = FUNC_1(VAR_4 & 0xffff, VAR_4 >> 16) + 1;
  *VAR_2 = FUNC_1(*VAR_2, VAR_6);
 }

 return 0;
}
