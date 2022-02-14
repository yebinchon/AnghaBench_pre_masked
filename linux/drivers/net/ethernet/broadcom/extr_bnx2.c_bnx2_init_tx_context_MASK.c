
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct bnx2_tx_ring_info {scalar_t__ tx_desc_mapping; } ;
struct bnx2 {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (struct bnx2*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct bnx2 *VAR_12, u32 VAR_13, struct bnx2_tx_ring_info *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = FUNC_1(VAR_13);

 if (FUNC_0(VAR_12) == VAR_0) {
  VAR_16 = VAR_11;
  VAR_17 = VAR_3;
  VAR_18 = VAR_5;
  VAR_19 = VAR_7;
 } else {
  VAR_16 = VAR_8;
  VAR_17 = VAR_1;
  VAR_18 = VAR_4;
  VAR_19 = VAR_6;
 }
 VAR_15 = VAR_10 | VAR_9;
 FUNC_2(VAR_12, VAR_20, VAR_16, VAR_15);

 VAR_15 = VAR_2 | (8 << 16);
 FUNC_2(VAR_12, VAR_20, VAR_17, VAR_15);

 VAR_15 = (u64) VAR_14->tx_desc_mapping >> 32;
 FUNC_2(VAR_12, VAR_20, VAR_18, VAR_15);

 VAR_15 = (u64) VAR_14->tx_desc_mapping & 0xffffffff;
 FUNC_2(VAR_12, VAR_20, VAR_19, VAR_15);
}
