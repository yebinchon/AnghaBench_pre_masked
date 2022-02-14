
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int rss; } ;
struct TYPE_10__ {TYPE_3__ hi_dword; } ;
struct TYPE_7__ {int const status_error_len; } ;
struct TYPE_9__ {TYPE_5__ qword0; TYPE_2__ qword1; } ;
union iavf_rx_desc {TYPE_4__ wb; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct iavf_ring {TYPE_1__* netdev; } ;
typedef int __le64 ;
struct TYPE_6__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct iavf_ring *VAR_3,
    union iavf_rx_desc *VAR_4,
    struct sk_buff *VAR_5,
    u8 VAR_6)
{
 u32 VAR_7;
 const __le64 VAR_8 =
  FUNC_0((u64)VAR_0 <<
       VAR_1);

 if (VAR_3->netdev->features & VAR_2)
  return;

 if ((VAR_4->wb.qword1.status_error_len & VAR_8) == VAR_8) {
  VAR_7 = FUNC_2(VAR_4->wb.qword0.hi_dword.rss);
  FUNC_3(VAR_5, VAR_7, FUNC_1(VAR_6));
 }
}
