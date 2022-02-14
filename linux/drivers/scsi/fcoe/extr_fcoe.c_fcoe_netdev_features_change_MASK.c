
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; scalar_t__ fcoe_ddp_xid; scalar_t__ gso_max_size; } ;
struct fc_lport {int sg_supp; int crc_offload; int seq_offload; int lro_enabled; int lp_mutex; scalar_t__ lro_xid; scalar_t__ lso_max; } ;


 int FUNC_0 (struct net_device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct fc_lport *VAR_3,
     struct net_device *VAR_4)
{
 FUNC_1(&VAR_3->lp_mutex);

 if (VAR_4->features & VAR_2)
  VAR_3->sg_supp = 1;
 else
  VAR_3->sg_supp = 0;

 if (VAR_4->features & VAR_0) {
  VAR_3->crc_offload = 1;
  FUNC_0(VAR_4, "Supports FCCRC offload\n");
 } else {
  VAR_3->crc_offload = 0;
 }

 if (VAR_4->features & VAR_1) {
  VAR_3->seq_offload = 1;
  VAR_3->lso_max = VAR_4->gso_max_size;
  FUNC_0(VAR_4, "Supports LSO for max len 0x%x\n",
    VAR_3->lso_max);
 } else {
  VAR_3->seq_offload = 0;
  VAR_3->lso_max = 0;
 }

 if (VAR_4->fcoe_ddp_xid) {
  VAR_3->lro_enabled = 1;
  VAR_3->lro_xid = VAR_4->fcoe_ddp_xid;
  FUNC_0(VAR_4, "Supports LRO for max xid 0x%x\n",
    VAR_3->lro_xid);
 } else {
  VAR_3->lro_enabled = 0;
  VAR_3->lro_xid = 0;
 }

 FUNC_2(&VAR_3->lp_mutex);
}
