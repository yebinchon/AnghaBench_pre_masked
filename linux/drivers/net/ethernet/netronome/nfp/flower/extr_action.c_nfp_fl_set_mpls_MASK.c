
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_set_mpls {void* lse_mask; void* lse; TYPE_1__ head; } ;
struct TYPE_4__ {int label; int tc; int bos; int ttl; } ;
struct flow_action_entry {TYPE_2__ mpls_mangle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct nfp_fl_set_mpls *VAR_13,
  const struct flow_action_entry *VAR_14)
{
 size_t VAR_15 = sizeof(struct nfp_fl_set_mpls);
 u32 VAR_16 = 0, VAR_17 = 0;

 VAR_13->head.jump_id = VAR_11;
 VAR_13->head.len_lw = VAR_15 >> VAR_12;

 if (VAR_14->mpls_mangle.label != VAR_1) {
  VAR_16 |= VAR_14->mpls_mangle.label << VAR_4;
  VAR_17 |= VAR_3;
 }
 if (VAR_14->mpls_mangle.tc != VAR_2) {
  VAR_16 |= VAR_14->mpls_mangle.tc << VAR_8;
  VAR_17 |= VAR_7;
 }
 if (VAR_14->mpls_mangle.bos != VAR_0) {
  VAR_16 |= VAR_14->mpls_mangle.bos << VAR_6;
  VAR_17 |= VAR_5;
 }
 if (VAR_14->mpls_mangle.ttl) {
  VAR_16 |= VAR_14->mpls_mangle.ttl << VAR_10;
  VAR_17 |= VAR_9;
 }

 VAR_13->lse = FUNC_0(VAR_16);
 VAR_13->lse_mask = FUNC_0(VAR_17);
}
