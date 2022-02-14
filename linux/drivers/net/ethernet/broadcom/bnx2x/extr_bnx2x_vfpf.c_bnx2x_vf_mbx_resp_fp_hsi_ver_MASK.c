
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vfpf_fp_hsi_resp_tlv {int is_supported; } ;
struct bnx2x_virtf {int fp_hsi; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,void*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_2,
      struct bnx2x_virtf *VAR_3,
      void *VAR_4,
      u16 *VAR_5)
{
 struct vfpf_fp_hsi_resp_tlv *VAR_6;

 FUNC_0(VAR_2, VAR_4, *VAR_5, VAR_0,
        sizeof(struct vfpf_fp_hsi_resp_tlv));

 VAR_6 = (struct vfpf_fp_hsi_resp_tlv *)
   (((u8 *)VAR_4) + *VAR_5);
 VAR_6->is_supported = (VAR_3->fp_hsi > VAR_1) ? 0 : 1;




 *VAR_5 += sizeof(struct vfpf_fp_hsi_resp_tlv);
}
