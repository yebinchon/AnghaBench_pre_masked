
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rx_tpa_end_cmp {int dummy; } ;
struct rx_cmp {int rx_cmp_misc_v1; } ;
struct bnxt_cp_ring_info {int dummy; } ;
struct bnxt {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct rx_cmp*) ;
 scalar_t__ FUNC_1 (struct rx_tpa_end_cmp*) ;
 int FUNC_2 (struct bnxt*,struct bnxt_cp_ring_info*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_6, struct bnxt_cp_ring_info *VAR_7,
      u32 *VAR_8, void *VAR_9)
{
 struct rx_cmp *VAR_10 = VAR_9;
 u32 VAR_11 = *VAR_8;
 u8 VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_0(VAR_10);

 if (VAR_12 == VAR_1) {
  VAR_13 = (FUNC_3(VAR_10->rx_cmp_misc_v1) &
       VAR_4) >>
      VAR_5;
 } else if (VAR_12 == VAR_2) {
  struct rx_tpa_end_cmp *VAR_14 = VAR_9;

  if (VAR_6->flags & VAR_0)
   return 0;

  VAR_13 = FUNC_1(VAR_14);
 }

 if (VAR_13) {
  if (!FUNC_2(VAR_6, VAR_7, VAR_13, &VAR_11))
   return -VAR_3;
 }
 *VAR_8 = VAR_11;
 return 0;
}
