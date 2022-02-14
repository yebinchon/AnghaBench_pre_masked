
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vdec_vpu_inst {int failure; int id; int dev; scalar_t__ signaled; } ;


 int FUNC_0 (struct vdec_vpu_inst*,char*,int ) ;
 int FUNC_1 (struct vdec_vpu_inst*,char*,int ,int ,int) ;
 int FUNC_2 (int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_3(struct vdec_vpu_inst *VAR_0, void *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0, "id=%X", *(uint32_t *)VAR_1);

 VAR_0->failure = 0;
 VAR_0->signaled = 0;

 VAR_3 = FUNC_2(VAR_0->dev, VAR_0->id, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0, "send fail vpu_id=%d msg_id=%X status=%d",
          VAR_0->id, *(uint32_t *)VAR_1, VAR_3);
  return VAR_3;
 }

 return VAR_0->failure;
}
