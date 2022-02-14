
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_vpu_ipi_msg_common {int msg_id; scalar_t__ status; scalar_t__ venc_inst; } ;
struct venc_vpu_inst {int signaled; int failure; } ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (struct venc_vpu_inst*,void*) ;
 int FUNC_1 (struct venc_vpu_inst*,void*) ;
 int FUNC_2 (struct venc_vpu_inst*,char*,int,struct venc_vpu_inst*,scalar_t__) ;
 int FUNC_3 (struct venc_vpu_inst*) ;
 int FUNC_4 (struct venc_vpu_inst*,char*,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 struct venc_vpu_ipi_msg_common *VAR_4 = VAR_1;
 struct venc_vpu_inst *VAR_5 =
  (struct venc_vpu_inst *)(unsigned long)VAR_4->venc_inst;

 FUNC_2(VAR_5, "msg_id %x inst %p status %d",
    VAR_4->msg_id, VAR_5, VAR_4->status);

 switch (VAR_4->msg_id) {
 case 129:
  FUNC_1(VAR_5, VAR_1);
  break;
 case 128:
  break;
 case 130:
  FUNC_0(VAR_5, VAR_1);
  break;
 case 131:
  break;
 default:
  FUNC_4(VAR_5, "unknown msg id %x", VAR_4->msg_id);
  break;
 }

 VAR_5->signaled = 1;
 VAR_5->failure = (VAR_4->status != VAR_0);

 FUNC_3(VAR_5);
}
