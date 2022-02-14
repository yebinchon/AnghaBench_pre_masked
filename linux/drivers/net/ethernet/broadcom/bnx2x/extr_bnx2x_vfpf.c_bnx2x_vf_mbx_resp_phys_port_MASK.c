
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vfpf_port_phys_id_resp_tlv {int id; } ;
struct bnx2x_virtf {int dummy; } ;
struct bnx2x {int flags; int phys_port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*,void*,int,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_3,
     struct bnx2x_virtf *VAR_4,
     void *VAR_5,
     u16 *VAR_6)
{
 struct vfpf_port_phys_id_resp_tlv *VAR_7;

 if (!(VAR_3->flags & VAR_2))
  return;

 FUNC_0(VAR_3, VAR_5, *VAR_6, VAR_0,
        sizeof(struct vfpf_port_phys_id_resp_tlv));

 VAR_7 = (struct vfpf_port_phys_id_resp_tlv *)
    (((u8 *)VAR_5) + *VAR_6);
 FUNC_1(VAR_7->id, VAR_3->phys_port_id, VAR_1);




 *VAR_6 += sizeof(struct vfpf_port_phys_id_resp_tlv);
}
