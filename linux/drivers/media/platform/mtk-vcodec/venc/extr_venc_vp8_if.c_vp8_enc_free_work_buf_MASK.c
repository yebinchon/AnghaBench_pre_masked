
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venc_vp8_inst {TYPE_1__* work_bufs; int ctx; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int VAR_0 ;
 int FUNC_0 (struct venc_vp8_inst*) ;
 int FUNC_1 (struct venc_vp8_inst*) ;
 int FUNC_2 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct venc_vp8_inst *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->work_bufs[VAR_2].size == 0)
   continue;
  FUNC_2(VAR_1->ctx, &VAR_1->work_bufs[VAR_2]);
 }

 FUNC_1(VAR_1);
}
