
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct bnxt_tx_ring_info {int tx_ring_struct; struct bnxt_napi* bnapi; } ;
struct TYPE_3__ {struct bnxt_cp_ring_info** cp_ring_arr; } ;
struct bnxt_napi {TYPE_1__ cp_ring; } ;
struct TYPE_4__ {int fw_ring_id; } ;
struct bnxt_cp_ring_info {TYPE_2__ cp_ring_struct; } ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct bnxt*,int *) ;

__attribute__((used)) static u16 FUNC_1(struct bnxt *VAR_2, struct bnxt_tx_ring_info *VAR_3)
{
 if (VAR_2->flags & VAR_0) {
  struct bnxt_napi *VAR_4 = VAR_3->bnapi;
  struct bnxt_cp_ring_info *VAR_5;

  VAR_5 = VAR_4->cp_ring.cp_ring_arr[VAR_1];
  return VAR_5->cp_ring_struct.fw_ring_id;
 } else {
  return FUNC_0(VAR_2, &VAR_3->tx_ring_struct);
 }
}
