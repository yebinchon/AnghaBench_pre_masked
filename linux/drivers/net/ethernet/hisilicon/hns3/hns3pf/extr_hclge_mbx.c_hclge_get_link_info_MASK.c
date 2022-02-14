
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int mbx_src_vfid; } ;
struct TYPE_3__ {scalar_t__ speed; scalar_t__ duplex; int link; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;
typedef int msg_data ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_vport*,int *,int,int ,int ) ;
 int FUNC_1 (int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_1,
          struct hclge_mbx_vf_to_pf_cmd *VAR_2)
{
 struct hclge_dev *VAR_3 = VAR_1->back;
 u16 VAR_4;
 u8 VAR_5[8];
 u8 VAR_6;
 u16 VAR_7;


 VAR_4 = (u16)VAR_3->hw.mac.link;
 VAR_7 = VAR_3->hw.mac.duplex;
 FUNC_1(&VAR_5[0], &VAR_4, sizeof(u16));
 FUNC_1(&VAR_5[2], &VAR_3->hw.mac.speed, sizeof(u32));
 FUNC_1(&VAR_5[6], &VAR_7, sizeof(u16));
 VAR_6 = VAR_2->mbx_src_vfid;


 return FUNC_0(VAR_1, VAR_5, sizeof(VAR_5),
      VAR_0, VAR_6);
}
