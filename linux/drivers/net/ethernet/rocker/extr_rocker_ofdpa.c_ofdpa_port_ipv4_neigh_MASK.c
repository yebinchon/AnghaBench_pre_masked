
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ofdpa_port {TYPE_1__* dev; int pport; int internal_vlan_id; struct ofdpa* ofdpa; } ;
struct ofdpa_neigh_tbl_entry {int ttl_check; int ip_addr; int index; int eth_dst; TYPE_1__* dev; } ;
struct ofdpa {int neigh_tbl_lock; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ofdpa_neigh_tbl_entry*) ;
 struct ofdpa_neigh_tbl_entry* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ofdpa_neigh_tbl_entry*,struct ofdpa_neigh_tbl_entry*,int) ;
 int FUNC_7 (TYPE_1__*,char*,int,int *,...) ;
 int FUNC_8 (struct ofdpa_port*,int ,int ,int ,int ,int,int ,int *,int) ;
 int FUNC_9 (struct ofdpa_port*,int,int ,int ,int ,int ,int,int ) ;
 int FUNC_10 (struct ofdpa*,struct ofdpa_neigh_tbl_entry*) ;
 int FUNC_11 (struct ofdpa_neigh_tbl_entry*) ;
 struct ofdpa_neigh_tbl_entry* FUNC_12 (struct ofdpa*,int ) ;
 int FUNC_13 (struct ofdpa_neigh_tbl_entry*,int const*,int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct ofdpa_port *VAR_6,
     int VAR_7, __be32 VAR_8, const u8 *VAR_9)
{
 struct ofdpa *VAR_10 = VAR_6->ofdpa;
 struct ofdpa_neigh_tbl_entry *VAR_11;
 struct ofdpa_neigh_tbl_entry *VAR_12;
 unsigned long VAR_13;
 __be16 VAR_14 = FUNC_2(VAR_2);
 enum rocker_of_dpa_table_id VAR_15 =
   VAR_5;
 u32 VAR_16;
 u32 VAR_17 = 0;
 bool VAR_18 = !(VAR_7 & VAR_4);
 bool VAR_19;
 bool VAR_20;
 int VAR_21 = 0;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 FUNC_14(&VAR_10->neigh_tbl_lock, VAR_13);

 VAR_12 = FUNC_12(VAR_10, VAR_8);

 VAR_19 = VAR_12 && VAR_18;
 VAR_20 = VAR_12 && !VAR_18;
 VAR_18 = !VAR_12 && VAR_18;

 if (VAR_18) {
  VAR_11->ip_addr = VAR_8;
  VAR_11->dev = VAR_6->dev;
  FUNC_1(VAR_11->eth_dst, VAR_9);
  VAR_11->ttl_check = 1;
  FUNC_10(VAR_10, VAR_11);
 } else if (VAR_20) {
  FUNC_6(VAR_11, VAR_12, sizeof(*VAR_11));
  FUNC_11(VAR_12);
 } else if (VAR_19) {
  FUNC_13(VAR_12, VAR_9, 1);
  FUNC_6(VAR_11, VAR_12, sizeof(*VAR_11));
 } else {
  VAR_21 = -VAR_0;
 }

 FUNC_15(&VAR_10->neigh_tbl_lock, VAR_13);

 if (VAR_21)
  goto err_out;







 VAR_21 = FUNC_9(VAR_6, VAR_7,
         VAR_11->index,
         VAR_6->dev->dev_addr,
         VAR_11->eth_dst,
         VAR_6->internal_vlan_id,
         VAR_11->ttl_check,
         VAR_6->pport);
 if (VAR_21) {
  FUNC_7(VAR_6->dev, "Error (%d) L3 unicast group index %d\n",
      VAR_21, &VAR_11->index);
  goto err_out;
 }

 if (VAR_18 || VAR_20) {
  VAR_16 = FUNC_0(VAR_11->index);
  VAR_21 = FUNC_8(VAR_6,
          VAR_14, VAR_8,
          FUNC_3(32),
          VAR_17, VAR_15,
          VAR_16, ((void*)0), VAR_7);

  if (VAR_21)
   FUNC_7(VAR_6->dev, "Error (%d) /32 unicast route %pI4 group 0x%08x\n",
       VAR_21, &VAR_11->ip_addr, VAR_16);
 }

err_out:
 if (!VAR_18)
  FUNC_4(VAR_11);

 return VAR_21;
}
