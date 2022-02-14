
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hnae3_handle {int dummy; } ;
struct TYPE_4__ {int state; } ;
struct hclge_vport {int state; TYPE_2__ port_base_vlan_cfg; struct hclge_dev* back; } ;
struct hclge_vlan_info {int vlan_tag; int qos; int vlan_proto; } ;
struct hclge_dev {int num_alloc_vfs; struct hclge_vport* vport; TYPE_1__* pdev; } ;
typedef scalar_t__ __be16 ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hclge_vport*,int ,int) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_dev*,int ) ;
 int FUNC_3 (struct hclge_vport*,int,int,int,int,int ) ;
 int FUNC_4 (struct hclge_vport*,int,struct hclge_vlan_info*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct hnae3_handle *VAR_9, int VAR_10,
        u16 VAR_11, u8 VAR_12, __be16 VAR_13)
{
 struct hclge_vport *VAR_14 = FUNC_1(VAR_9);
 struct hclge_dev *VAR_15 = VAR_14->back;
 struct hclge_vlan_info VAR_16;
 u16 VAR_17;
 int VAR_18;

 if (VAR_15->pdev->revision == 0x20)
  return -VAR_1;


 if (VAR_10 >= VAR_15->num_alloc_vfs || VAR_11 > VAR_8 - 1 || VAR_12 > 7)
  return -VAR_0;
 if (VAR_13 != FUNC_5(VAR_3))
  return -VAR_2;

 VAR_14 = &VAR_15->vport[VAR_10];
 VAR_17 = FUNC_0(VAR_14,
            VAR_14->port_base_vlan_cfg.state,
            VAR_11);
 if (VAR_17 == VAR_6)
  return 0;

 VAR_16.vlan_tag = VAR_11;
 VAR_16.qos = VAR_12;
 VAR_16.vlan_proto = FUNC_6(VAR_13);


 if (!VAR_10) {
  FUNC_2(VAR_15, VAR_5);
  VAR_18 = FUNC_4(VAR_14, VAR_17, &VAR_16);
  FUNC_2(VAR_15, VAR_7);

  return VAR_18;
 }

 if (!FUNC_7(VAR_4, &VAR_14->state)) {
  return FUNC_4(VAR_14, VAR_17,
             &VAR_16);
 } else {
  VAR_18 = FUNC_3(&VAR_15->vport[0],
       (u8)VAR_10, VAR_17,
       VAR_11, VAR_12,
       FUNC_6(VAR_13));
  return VAR_18;
 }
}
