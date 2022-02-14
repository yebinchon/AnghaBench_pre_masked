
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpu_run {int enc_capability; int dec_capability; int fw_ver; int signaled; } ;
struct TYPE_2__ {int wq; int enc_capability; int dec_capability; int fw_ver; int signaled; } ;
struct mtk_vpu {TYPE_1__ run; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct mtk_vpu *VAR_3 = (struct mtk_vpu *)VAR_2;
 struct vpu_run *VAR_4 = (struct vpu_run *)VAR_0;

 VAR_3->run.signaled = VAR_4->signaled;
 FUNC_0(VAR_3->run.fw_ver, VAR_4->fw_ver, sizeof(VAR_3->run.fw_ver));
 VAR_3->run.dec_capability = VAR_4->dec_capability;
 VAR_3->run.enc_capability = VAR_4->enc_capability;
 FUNC_1(&VAR_3->run.wq);
}
