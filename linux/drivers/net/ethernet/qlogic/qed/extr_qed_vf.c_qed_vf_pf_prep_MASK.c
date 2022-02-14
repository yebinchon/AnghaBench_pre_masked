
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vfpf_tlvs {int dummy; } vfpf_tlvs ;
typedef union pfvf_tlvs {int dummy; } pfvf_tlvs ;
typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct vfpf_first_tlv {scalar_t__ reply_address; } ;
struct qed_vf_iov {scalar_t__ pf2vf_reply_phys; int * offset; scalar_t__ pf2vf_reply; scalar_t__ vf2pf_request; int mutex; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (struct qed_hwfn*,int **,int ,int ) ;

__attribute__((used)) static void *FUNC_4(struct qed_hwfn *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct qed_vf_iov *VAR_4 = VAR_1->vf_iov_info;
 void *VAR_5;






 FUNC_2(&(VAR_4->mutex));

 FUNC_0(VAR_1,
     VAR_0,
     "preparing to send 0x%04x tlv over vf pf channel\n",
     VAR_2);


 VAR_4->offset = (u8 *)VAR_4->vf2pf_request;


 FUNC_1(VAR_4->vf2pf_request, 0, sizeof(union vfpf_tlvs));
 FUNC_1(VAR_4->pf2vf_reply, 0, sizeof(union pfvf_tlvs));


 VAR_5 = FUNC_3(VAR_1, &VAR_4->offset, VAR_2, VAR_3);


 ((struct vfpf_first_tlv *)VAR_5)->reply_address =
     (u64)VAR_4->pf2vf_reply_phys;

 return VAR_5;
}
