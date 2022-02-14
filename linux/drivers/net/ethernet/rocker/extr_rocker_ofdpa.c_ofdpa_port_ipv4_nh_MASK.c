
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ofdpa_port {int dev; struct ofdpa* ofdpa; } ;
struct ofdpa_neigh_tbl_entry {int index; int eth_dst; int dev; int ip_addr; } ;
struct ofdpa {int neigh_tbl_lock; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ofdpa_neigh_tbl_entry*) ;
 struct ofdpa_neigh_tbl_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ofdpa*,struct ofdpa_neigh_tbl_entry*) ;
 int FUNC_4 (struct ofdpa_neigh_tbl_entry*) ;
 struct ofdpa_neigh_tbl_entry* FUNC_5 (struct ofdpa*,int ) ;
 int FUNC_6 (struct ofdpa_neigh_tbl_entry*,int *,int) ;
 int FUNC_7 (struct ofdpa_port*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ofdpa_port *VAR_4,
         int VAR_5, __be32 VAR_6, u32 *VAR_7)
{
 struct ofdpa *VAR_8 = VAR_4->ofdpa;
 struct ofdpa_neigh_tbl_entry *VAR_9;
 struct ofdpa_neigh_tbl_entry *VAR_10;
 unsigned long VAR_11;
 bool VAR_12 = !(VAR_5 & VAR_3);
 bool VAR_13;
 bool VAR_14;
 bool VAR_15 = 1;
 int VAR_16 = 0;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_8(&VAR_8->neigh_tbl_lock, VAR_11);

 VAR_10 = FUNC_5(VAR_8, VAR_6);

 VAR_13 = VAR_10 && VAR_12;
 VAR_14 = VAR_10 && !VAR_12;
 VAR_12 = !VAR_10 && VAR_12;

 if (VAR_12) {
  VAR_9->ip_addr = VAR_6;
  VAR_9->dev = VAR_4->dev;
  FUNC_3(VAR_8, VAR_9);
  *VAR_7 = VAR_9->index;
  VAR_15 = 0;
 } else if (VAR_14) {
  *VAR_7 = VAR_10->index;
  FUNC_4(VAR_10);
 } else if (VAR_13) {
  FUNC_6(VAR_10, ((void*)0), 0);
  VAR_15 = !FUNC_0(VAR_10->eth_dst);
  *VAR_7 = VAR_10->index;
 } else {
  VAR_16 = -VAR_0;
 }

 FUNC_9(&VAR_8->neigh_tbl_lock, VAR_11);

 if (!VAR_12)
  FUNC_1(VAR_9);

 if (VAR_16)
  return VAR_16;



 if (!VAR_15)
  VAR_16 = FUNC_7(VAR_4, VAR_6);

 return VAR_16;
}
