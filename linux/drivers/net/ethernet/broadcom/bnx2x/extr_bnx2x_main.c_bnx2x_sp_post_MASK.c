
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {void* lo; void* hi; } ;
struct TYPE_6__ {TYPE_2__ update_data_addr; } ;
struct TYPE_4__ {int type; void* conn_and_cmd_data; } ;
struct eth_spe {TYPE_3__ data; TYPE_1__ hdr; } ;
struct bnx2x {int spq_lock; int eq_spq_left; int cq_spq_left; scalar_t__ spq; scalar_t__ spq_prod_bd; int spq_mapping; int spq_prod_idx; int panic; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int ,int,int,int,int,int,int,int,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct bnx2x*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;
 struct eth_spe* FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (int) ;
 void* FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;

int FUNC_17(struct bnx2x *VAR_8, int VAR_9, int VAR_10,
    u32 VAR_11, u32 VAR_12, int VAR_13)
{
 struct eth_spe *VAR_14;
 u16 VAR_15;
 bool VAR_16 = FUNC_8(VAR_9, VAR_13);
 FUNC_14(&VAR_8->spq_lock);

 if (VAR_16) {
  if (!FUNC_7(&VAR_8->eq_spq_left)) {
   FUNC_0("BUG! EQ ring full!\n");
   FUNC_15(&VAR_8->spq_lock);
   FUNC_9();
   return -VAR_1;
  }
 } else if (!FUNC_7(&VAR_8->cq_spq_left)) {
   FUNC_0("BUG! SPQ ring full!\n");
   FUNC_15(&VAR_8->spq_lock);
   FUNC_9();
   return -VAR_1;
 }

 VAR_14 = FUNC_10(VAR_8);


 VAR_14->hdr.conn_and_cmd_data =
   FUNC_13((VAR_9 << VAR_3) |
        FUNC_3(VAR_8, VAR_10));





 if (!(VAR_13 & VAR_6)) {
  VAR_15 = (VAR_13 << VAR_5) &
   VAR_4;
  VAR_15 |= ((FUNC_1(VAR_8) << VAR_7) &
    VAR_6);
 } else {
  VAR_15 = VAR_13;
 }

 VAR_14->hdr.type = FUNC_12(VAR_15);

 VAR_14->data.update_data_addr.hi = FUNC_13(VAR_11);
 VAR_14->data.update_data_addr.lo = FUNC_13(VAR_12);






 if (VAR_16)
  FUNC_6(&VAR_8->eq_spq_left);
 else
  FUNC_6(&VAR_8->cq_spq_left);

 FUNC_2(VAR_0,
    "SPQE[%x] (%x:%x)  (cmd, common?) (%d,%d)  hw_cid %x  data (%x:%x) type(0x%x) left (CQ, EQ) (%x,%x)\n",
    VAR_8->spq_prod_idx, (u32)FUNC_4(VAR_8->spq_mapping),
    (u32)(FUNC_5(VAR_8->spq_mapping) +
    (void *)VAR_8->spq_prod_bd - (void *)VAR_8->spq), VAR_9, VAR_16,
    FUNC_3(VAR_8, VAR_10), VAR_11, VAR_12, VAR_15,
    FUNC_7(&VAR_8->cq_spq_left), FUNC_7(&VAR_8->eq_spq_left));

 FUNC_11(VAR_8);
 FUNC_15(&VAR_8->spq_lock);
 return 0;
}
