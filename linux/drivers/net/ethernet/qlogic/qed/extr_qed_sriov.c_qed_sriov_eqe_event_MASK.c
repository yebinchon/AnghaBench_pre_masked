
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_addr; } ;
union event_ring_data {int malicious_vf; TYPE_1__ vf_pf_channel; } ;
typedef int u8 ;
struct qed_hwfn {int cdev; } ;
typedef int __le16 ;




 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*,int *) ;
 int FUNC_3 (struct qed_hwfn*,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_1,
          u8 VAR_2,
          __le16 VAR_3,
          union event_ring_data *VAR_4, u8 VAR_5)
{
 switch (VAR_2) {
 case 128:
  return FUNC_3(VAR_1, FUNC_1(VAR_3),
       &VAR_4->vf_pf_channel.msg_addr);
 case 129:
  FUNC_2(VAR_1, &VAR_4->malicious_vf);
  return 0;
 default:
  FUNC_0(VAR_1->cdev, "Unknown sriov eqe event 0x%02x\n",
   VAR_2);
  return -VAR_0;
 }
}
