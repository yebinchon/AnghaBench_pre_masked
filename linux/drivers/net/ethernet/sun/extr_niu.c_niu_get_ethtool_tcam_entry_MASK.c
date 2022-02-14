
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct niu_tcam_entry {int* key; int assoc_data; int valid; } ;
struct niu_parent {int index; struct niu_tcam_entry* tcam; } ;
struct niu {int dev; struct niu_parent* parent; } ;
struct ethtool_rx_flow_spec {int flow_type; int ring_cookie; scalar_t__ location; } ;
struct ethtool_rxnfc {int data; struct ethtool_rx_flow_spec fs; } ;




 int VAR_0 ;


 scalar_t__ VAR_1 ;

 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;




 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (struct niu_tcam_entry*,struct ethtool_rx_flow_spec*) ;
 size_t FUNC_3 (struct niu*,size_t) ;
 int FUNC_4 (struct niu*) ;

__attribute__((used)) static int FUNC_5(struct niu *VAR_10,
          struct ethtool_rxnfc *VAR_11)
{
 struct niu_parent *VAR_12 = VAR_10->parent;
 struct niu_tcam_entry *VAR_13;
 struct ethtool_rx_flow_spec *VAR_14 = &VAR_11->fs;
 u16 VAR_15;
 u64 VAR_16;
 int VAR_17 = 0;

 VAR_15 = FUNC_3(VAR_10, (u16)VAR_11->fs.location);

 VAR_13 = &VAR_12->tcam[VAR_15];
 if (!VAR_13->valid) {
  FUNC_0(VAR_10->dev, "niu%d: entry [%d] invalid for idx[%d]\n",
       VAR_12->index, (u16)VAR_11->fs.location, VAR_15);
  return -VAR_0;
 }


 VAR_16 = (VAR_13->key[0] & VAR_6) >>
  VAR_7;
 VAR_17 = FUNC_1(VAR_16, &VAR_14->flow_type);
 if (VAR_17 < 0) {
  FUNC_0(VAR_10->dev, "niu%d: niu_class_to_ethflow failed\n",
       VAR_12->index);
  goto out;
 }

 if (VAR_14->flow_type == 138 || VAR_14->flow_type == 137) {
  u32 VAR_18 = (VAR_13->key[2] & VAR_8) >>
   VAR_9;
  if (VAR_18 == VAR_1) {
   if (VAR_14->flow_type == 138)
    VAR_14->flow_type = 136;
   else
    VAR_14->flow_type = 135;
  }
 }

 switch (VAR_14->flow_type) {
 case 131:
 case 129:
 case 133:
 case 138:
 case 136:
  FUNC_2(VAR_13, VAR_14);
  break;
 case 130:
 case 128:
 case 132:
 case 137:
 case 135:

  VAR_17 = -VAR_0;
  break;
 case 134:
  FUNC_2(VAR_13, VAR_14);
  break;
 default:
  VAR_17 = -VAR_0;
  break;
 }

 if (VAR_17 < 0)
  goto out;

 if (VAR_13->assoc_data & VAR_3)
  VAR_14->ring_cookie = VAR_2;
 else
  VAR_14->ring_cookie = (VAR_13->assoc_data & VAR_4) >>
   VAR_5;


 VAR_11->data = FUNC_4(VAR_10);
out:
 return VAR_17;
}
