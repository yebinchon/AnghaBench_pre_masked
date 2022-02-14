
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rx_tpa_end_cmp_ext {int rx_tpa_end_cmp_errors_v2; } ;
struct rx_cmp_ext {int rx_cmp_cfa_code_errors_v2; } ;
struct rx_cmp {int dummy; } ;
struct bnxt_cp_ring_info {int ** cp_desc_ring; } ;
struct bnxt {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct rx_cmp*) ;
 int FUNC_5 (struct rx_cmp_ext*,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct bnxt*,struct bnxt_cp_ring_info*,int *,scalar_t__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct bnxt *VAR_5,
     struct bnxt_cp_ring_info *VAR_6,
     u32 *VAR_7, u8 *VAR_8)
{
 u32 VAR_9 = *VAR_7;
 struct rx_cmp_ext *VAR_10;
 struct rx_cmp *VAR_11;
 u16 VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_3(VAR_9);
 VAR_11 = (struct rx_cmp *)
   &VAR_6->cp_desc_ring[FUNC_1(VAR_12)][FUNC_0(VAR_12)];

 VAR_9 = FUNC_2(VAR_9);
 VAR_12 = FUNC_3(VAR_9);
 VAR_10 = (struct rx_cmp_ext *)
   &VAR_6->cp_desc_ring[FUNC_1(VAR_12)][FUNC_0(VAR_12)];

 if (!FUNC_5(VAR_10, VAR_9))
  return -VAR_2;

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13 == VAR_0) {
  VAR_10->rx_cmp_cfa_code_errors_v2 |=
   FUNC_7(VAR_3);
 } else if (VAR_13 == VAR_1) {
  struct rx_tpa_end_cmp_ext *VAR_14;

  VAR_14 = (struct rx_tpa_end_cmp_ext *)VAR_10;
  VAR_14->rx_tpa_end_cmp_errors_v2 |=
   FUNC_7(VAR_4);
 }
 return FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);
}
