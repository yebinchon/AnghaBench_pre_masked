
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* txp_pd_table; } ;
struct ath5k_hw {TYPE_1__ ah_txpower; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ath5k_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct ath5k_hw *VAR_1)
{
 u8 *VAR_2 = VAR_1->ah_txpower.txp_pd_table;
 int VAR_3;




 for (VAR_3 = 0; VAR_3 < (VAR_0 / 2); VAR_3++) {
  FUNC_1(VAR_1,
   (((VAR_2[2 * VAR_3 + 0] << 8 | 0xff) & 0xffff) << 0) |
   (((VAR_2[2 * VAR_3 + 1] << 8 | 0xff) & 0xffff) << 16),
   FUNC_0(VAR_3));
 }
}
