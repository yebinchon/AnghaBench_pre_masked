
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40e_vsi {int netdev; struct i40e_pf* back; } ;
struct i40e_pf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i40e_pf*,int ,int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct i40e_vsi *VAR_7, u64 VAR_8, u64 VAR_9)
{
 struct i40e_pf *VAR_10 = VAR_7->back;
 bool VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = !!(VAR_8 & VAR_2);
 VAR_12 = !!(VAR_9 & VAR_2);
 if (VAR_11 != VAR_12)
  FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "L3 source address: %s -> %s\n",
      VAR_11 ? "ON" : "OFF",
      VAR_12 ? "ON" : "OFF");

 VAR_11 = !!(VAR_8 & VAR_1);
 VAR_12 = !!(VAR_9 & VAR_1);
 if (VAR_11 != VAR_12)
  FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "L3 destination address: %s -> %s\n",
      VAR_11 ? "ON" : "OFF",
      VAR_12 ? "ON" : "OFF");

 VAR_11 = !!(VAR_8 & VAR_4);
 VAR_12 = !!(VAR_9 & VAR_4);
 if (VAR_11 != VAR_12)
  FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "L4 source port: %s -> %s\n",
      VAR_11 ? "ON" : "OFF",
      VAR_12 ? "ON" : "OFF");

 VAR_11 = !!(VAR_8 & VAR_3);
 VAR_12 = !!(VAR_9 & VAR_3);
 if (VAR_11 != VAR_12)
  FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "L4 destination port: %s -> %s\n",
      VAR_11 ? "ON" : "OFF",
      VAR_12 ? "ON" : "OFF");

 VAR_11 = !!(VAR_8 & VAR_5);
 VAR_12 = !!(VAR_9 & VAR_5);
 if (VAR_11 != VAR_12)
  FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "SCTP verification tag: %s -> %s\n",
      VAR_11 ? "ON" : "OFF",
      VAR_12 ? "ON" : "OFF");


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  u64 VAR_14 = FUNC_0(VAR_13);

  VAR_11 = !!(VAR_8 & VAR_14);
  VAR_12 = !!(VAR_9 & VAR_14);
  if (VAR_11 != VAR_12)
   FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "FLEX index %d: %s -> %s\n",
       VAR_13,
       VAR_11 ? "ON" : "OFF",
       VAR_12 ? "ON" : "OFF");
 }

 FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "  Current input set: %0llx\n",
     VAR_8);
 FUNC_1(VAR_10, VAR_6, VAR_7->netdev, "Requested input set: %0llx\n",
     VAR_9);
}
