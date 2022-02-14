
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vdec_vpu_inst {int inst_addr; } ;
struct vdec_ap_ipi_dec_start {int * data; int vpu_inst_addr; int msg_id; } ;
typedef int msg ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct vdec_ap_ipi_dec_start*,int ,int) ;
 int FUNC_2 (struct vdec_vpu_inst*,char*,int) ;
 int FUNC_3 (struct vdec_vpu_inst*) ;
 int FUNC_4 (struct vdec_vpu_inst*,char*,unsigned int) ;
 int FUNC_5 (struct vdec_vpu_inst*,void*,int) ;

int FUNC_6(struct vdec_vpu_inst *VAR_2, uint32_t *VAR_3, unsigned int VAR_4)
{
 struct vdec_ap_ipi_dec_start VAR_5;
 int VAR_6;
 int VAR_7 = 0;

 FUNC_3(VAR_2);

 if (VAR_4 > FUNC_0(VAR_5.data)) {
  FUNC_4(VAR_2, "invalid len = %d\n", VAR_4);
  return -VAR_1;
 }

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.msg_id = VAR_0;
 VAR_5.vpu_inst_addr = VAR_2->inst_addr;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_5.data[VAR_6] = VAR_3[VAR_6];

 VAR_7 = FUNC_5(VAR_2, (void *)&VAR_5, sizeof(VAR_5));
 FUNC_2(VAR_2, "- ret=%d", VAR_7);
 return VAR_7;
}
