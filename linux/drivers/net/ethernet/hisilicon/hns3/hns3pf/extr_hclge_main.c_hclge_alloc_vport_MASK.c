
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int rx_vlan_offload_en; } ;
struct TYPE_3__ {int state; } ;
struct hclge_vport {int vport_id; int mc_mac_list; int uc_mac_list; int vlan_list; TYPE_2__ rxvlan_cfg; TYPE_1__ port_base_vlan_cfg; int mps; struct hclge_dev* back; } ;
struct hclge_dev {int num_vmdq_vport; int num_req_vfs; int num_tqps; int num_alloc_vport; int num_alloc_vfs; struct hclge_vport* vport; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int,int) ;
 struct hclge_vport* FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (struct hclge_vport*,int) ;

__attribute__((used)) static int FUNC_5(struct hclge_dev *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pdev;
 struct hclge_vport *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;


 VAR_11 = VAR_6->num_vmdq_vport + VAR_6->num_req_vfs + 1;

 if (VAR_6->num_tqps < VAR_11) {
  FUNC_2(&VAR_6->pdev->dev, "tqps(%d) is less than vports(%d)",
   VAR_6->num_tqps, VAR_11);
  return -VAR_1;
 }


 VAR_10 = VAR_6->num_tqps / VAR_11;
 VAR_9 = VAR_10 + VAR_6->num_tqps % VAR_11;

 VAR_8 = FUNC_3(&VAR_7->dev, VAR_11, sizeof(struct hclge_vport),
        VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_6->vport = VAR_8;
 VAR_6->num_alloc_vport = VAR_11;

 if (FUNC_1(VAR_0))
  VAR_6->num_alloc_vfs = VAR_6->num_req_vfs;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_8->back = VAR_6;
  VAR_8->vport_id = VAR_12;
  VAR_8->mps = VAR_4;
  VAR_8->port_base_vlan_cfg.state = VAR_5;
  VAR_8->rxvlan_cfg.rx_vlan_offload_en = 1;
  FUNC_0(&VAR_8->vlan_list);
  FUNC_0(&VAR_8->uc_mac_list);
  FUNC_0(&VAR_8->mc_mac_list);

  if (VAR_12 == 0)
   VAR_13 = FUNC_4(VAR_8, VAR_9);
  else
   VAR_13 = FUNC_4(VAR_8, VAR_10);
  if (VAR_13) {
   FUNC_2(&VAR_7->dev,
    "vport setup failed for vport %d, %d\n",
    VAR_12, VAR_13);
   return VAR_13;
  }

  VAR_8++;
 }

 return 0;
}
