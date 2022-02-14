
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct rx_cmp {size_t rx_cmp_opaque; int rx_cmp_len_flags_type; } ;
struct bnxt_sw_rx_bd {scalar_t__* data_ptr; } ;
struct bnxt_rx_ring_info {struct bnxt_sw_rx_bd* rx_buf_ring; } ;
struct bnxt_napi {TYPE_2__* bp; struct bnxt_rx_ring_info* rx_ring; } ;
struct bnxt_cp_ring_info {int ** cp_desc_ring; struct bnxt_napi* bnapi; } ;
struct bnxt {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_3, struct bnxt_cp_ring_info *VAR_4,
       u32 VAR_5, int VAR_6)
{
 struct bnxt_napi *VAR_7 = VAR_4->bnapi;
 struct bnxt_rx_ring_info *VAR_8;
 struct bnxt_sw_rx_bd *VAR_9;
 struct rx_cmp *VAR_10;
 u16 VAR_11, VAR_12;
 u8 *VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_8 = VAR_7->rx_ring;
 VAR_11 = FUNC_2(VAR_5);
 VAR_10 = (struct rx_cmp *)
  &VAR_4->cp_desc_ring[FUNC_1(VAR_11)][FUNC_0(VAR_11)];
 VAR_12 = VAR_10->rx_cmp_opaque;
 VAR_9 = &VAR_8->rx_buf_ring[VAR_12];
 VAR_13 = VAR_9->data_ptr;
 VAR_14 = FUNC_4(VAR_10->rx_cmp_len_flags_type) >> VAR_2;
 if (VAR_14 != VAR_6)
  return -VAR_0;
 VAR_15 = VAR_1;
 if (!FUNC_3(VAR_13 + VAR_15, VAR_7->bp->dev->dev_addr))
  return -VAR_0;
 VAR_15 += VAR_1;
 for ( ; VAR_15 < VAR_6; VAR_15++) {
  if (VAR_13[VAR_15] != (u8)(VAR_15 & 0xff))
   return -VAR_0;
 }
 return 0;
}
