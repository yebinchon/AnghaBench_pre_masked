
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int status_error; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_9__ {TYPE_1__ lo_dword; } ;
struct TYPE_11__ {TYPE_3__ upper; TYPE_2__ lower; } ;
union ixgbe_adv_rx_desc {TYPE_4__ wb; } ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_13__ {int non_eop_descs; } ;
struct ixgbe_ring {int next_to_clean; int count; TYPE_6__ rx_stats; TYPE_5__* rx_buffer_info; } ;
typedef int __le32 ;
struct TYPE_14__ {int append_cnt; } ;
struct TYPE_12__ {struct sk_buff* skb; } ;


 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_ring*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(struct ixgbe_ring *VAR_5,
        union ixgbe_adv_rx_desc *VAR_6,
        struct sk_buff *VAR_7)
{
 u32 VAR_8 = VAR_5->next_to_clean + 1;


 VAR_8 = (VAR_8 < VAR_5->count) ? VAR_8 : 0;
 VAR_5->next_to_clean = VAR_8;

 FUNC_6(FUNC_1(VAR_5, VAR_8));


 if (FUNC_7(VAR_5)) {
  __le32 VAR_9 = VAR_6->wb.lower.lo_dword.data &
         FUNC_2(VAR_2);

  if (FUNC_8(VAR_9)) {
   u32 VAR_10 = FUNC_4(VAR_9);

   VAR_10 >>= VAR_3;
   FUNC_0(VAR_7)->append_cnt += VAR_10 - 1;


   VAR_8 = FUNC_4(VAR_6->wb.upper.status_error);
   VAR_8 &= VAR_0;
   VAR_8 >>= VAR_1;
  }
 }


 if (FUNC_5(FUNC_3(VAR_6, VAR_4)))
  return 0;


 VAR_5->rx_buffer_info[VAR_8].skb = VAR_7;
 VAR_5->rx_stats.non_eop_descs++;

 return 1;
}
