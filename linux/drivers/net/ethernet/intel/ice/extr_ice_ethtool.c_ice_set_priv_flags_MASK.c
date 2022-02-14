
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct ice_vsi {struct ice_pf* back; } ;
struct ice_priv_flag {int bitno; } ;
struct ice_pf {int flags; TYPE_1__* pdev; int hw; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;
struct TYPE_2__ {int dev; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int *,int,int*,int *) ;
 int FUNC_10 (int *,int,int,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct ice_vsi*,int,int) ;
 struct ice_priv_flag* VAR_6 ;
 int FUNC_13 (struct ice_pf*,int) ;
 struct ice_netdev_priv* FUNC_14 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct net_device *VAR_8, u32 VAR_9)
{
 struct ice_netdev_priv *VAR_10 = FUNC_14(VAR_8);
 FUNC_1(VAR_5, VAR_3);
 FUNC_1(VAR_7, VAR_3);
 struct ice_vsi *VAR_11 = VAR_10->vsi;
 struct ice_pf *VAR_12 = VAR_11->back;
 int VAR_13 = 0;
 u32 VAR_14;

 if (VAR_9 > FUNC_0(VAR_4))
  return -VAR_0;

 FUNC_15(VAR_1, VAR_12->flags);

 FUNC_2(VAR_7, VAR_12->flags, VAR_3);
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  const struct ice_priv_flag *VAR_15;

  VAR_15 = &VAR_6[VAR_14];

  if (VAR_9 & FUNC_0(VAR_14))
   FUNC_15(VAR_15->bitno, VAR_12->flags);
  else
   FUNC_4(VAR_15->bitno, VAR_12->flags);
 }

 FUNC_3(VAR_5, VAR_12->flags, VAR_7, VAR_3);

 if (FUNC_16(VAR_2, VAR_5)) {
  if (!FUNC_16(VAR_2, VAR_12->flags)) {
   enum ice_status VAR_16;


   VAR_16 = FUNC_11(&VAR_12->hw, 0);





   if (VAR_16)
    FUNC_6(&VAR_12->pdev->dev,
      "Failed to unreg for LLDP events\n");




   VAR_16 = FUNC_10(&VAR_12->hw, 1, 1, ((void*)0));
   if (VAR_16)
    FUNC_7(&VAR_12->pdev->dev,
      "Fail to stop LLDP agent\n");




   VAR_16 = FUNC_13(VAR_12, 1);
   if (VAR_16)
    FUNC_7(&VAR_12->pdev->dev, "Fail to init DCB\n");




   FUNC_12(VAR_11, 0, 1);
  } else {
   enum ice_status VAR_17;
   bool VAR_18;




   VAR_17 = FUNC_8(&VAR_12->hw, 1, ((void*)0));
   if (VAR_17)
    FUNC_7(&VAR_12->pdev->dev,
      "Fail to start LLDP Agent\n");




   VAR_17 = FUNC_9(&VAR_12->hw, 1,
       &VAR_18,
       ((void*)0));
   if (VAR_17)
    FUNC_5(&VAR_12->pdev->dev,
     "Failed to start FW DCBX\n");

   FUNC_6(&VAR_12->pdev->dev, "FW DCBX agent is %s\n",
     VAR_18 ? "ACTIVE" : "DISABLED");






   VAR_17 = FUNC_13(VAR_12, 1);
   if (VAR_17)
    FUNC_5(&VAR_12->pdev->dev, "Fail to init DCB\n");




   FUNC_12(VAR_11, 0, 0);


   VAR_17 = FUNC_11(&VAR_12->hw, 1);
   if (VAR_17)
    FUNC_5(&VAR_12->pdev->dev,
     "Fail to enable MIB change events\n");
  }
 }
 FUNC_4(VAR_1, VAR_12->flags);
 return VAR_13;
}
