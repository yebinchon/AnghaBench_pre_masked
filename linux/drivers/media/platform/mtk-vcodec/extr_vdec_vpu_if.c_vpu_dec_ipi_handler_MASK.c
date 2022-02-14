
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdec_vpu_ipi_ack {int msg_id; scalar_t__ status; scalar_t__ ap_inst_addr; } ;
struct vdec_vpu_inst {scalar_t__ failure; int signaled; } ;







 int FUNC_0 (void*) ;
 int FUNC_1 (struct vdec_vpu_inst*,char*,int) ;
 int FUNC_2 (struct vdec_vpu_inst*,char*,int) ;

void FUNC_3(void *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 struct vdec_vpu_ipi_ack *VAR_3 = VAR_0;
 struct vdec_vpu_inst *VAR_4 = (struct vdec_vpu_inst *)
     (unsigned long)VAR_3->ap_inst_addr;

 FUNC_1(VAR_4, "+ id=%X", VAR_3->msg_id);

 if (VAR_3->status == 0) {
  switch (VAR_3->msg_id) {
  case 130:
   FUNC_0(VAR_0);
   break;

  case 128:
  case 131:
  case 132:
  case 129:
   break;

  default:
   FUNC_2(VAR_4, "invalid msg=%X", VAR_3->msg_id);
   break;
  }
 }

 FUNC_1(VAR_4, "- id=%X", VAR_3->msg_id);
 VAR_4->failure = VAR_3->status;
 VAR_4->signaled = 1;
}
