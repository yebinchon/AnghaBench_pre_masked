
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct rx_tpa_end_cmp_ext {int rx_tpa_end_cmp_seg_len; } ;
struct rx_tpa_end_cmp {int dummy; } ;
struct bnxt_tpa_info {int gso_type; } ;
struct bnxt {int flags; struct sk_buff* (* gro_func ) (struct bnxt_tpa_info*,int,int ,struct sk_buff*) ;} ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int gso_type; int gso_size; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rx_tpa_end_cmp*) ;
 int FUNC_2 (struct rx_tpa_end_cmp*) ;
 int FUNC_3 (struct rx_tpa_end_cmp_ext*) ;
 int FUNC_4 (struct rx_tpa_end_cmp*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct bnxt_tpa_info*,int,int ,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_10(struct bnxt *VAR_1,
        struct bnxt_tpa_info *VAR_2,
        struct rx_tpa_end_cmp *VAR_3,
        struct rx_tpa_end_cmp_ext *VAR_4,
        struct sk_buff *VAR_5)
{
 return VAR_5;
}
