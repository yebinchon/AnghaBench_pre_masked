
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {scalar_t__ mbx_src_vfid; scalar_t__* msg; } ;
struct TYPE_3__ {unsigned long* advertising; unsigned long* supported; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;
typedef int msg_data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hclge_vport*,scalar_t__*,int,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*,unsigned long*,int) ;

__attribute__((used)) static void FUNC_2(struct hclge_vport *VAR_2,
    struct hclge_mbx_vf_to_pf_cmd *VAR_3)
{

 struct hclge_dev *VAR_4 = VAR_2->back;
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 u8 VAR_8[10];
 u8 VAR_9;

 VAR_5 = VAR_4->hw.mac.advertising[0];
 VAR_6 = VAR_4->hw.mac.supported[0];
 VAR_9 = VAR_3->mbx_src_vfid;
 VAR_8[0] = VAR_3->msg[2];

 VAR_7 = VAR_8[0] == 1 ? VAR_6 : VAR_5;

 FUNC_1(&VAR_8[2], &VAR_7, sizeof(unsigned long));
 FUNC_0(VAR_2, VAR_8, sizeof(VAR_8),
      VAR_0, VAR_9);
}
