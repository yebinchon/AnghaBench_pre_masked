
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp; } ;
union enetc_tx_bd {TYPE_1__ wb; } ;
typedef int u64 ;
typedef int u32 ;
struct enetc_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enetc_hw*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct enetc_hw *VAR_2, union enetc_tx_bd *VAR_3,
    u64 *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_6 = FUNC_0(VAR_2, VAR_1);
 VAR_7 = FUNC_1(VAR_3->wb.tstamp);
 if (VAR_5 <= VAR_7)
  VAR_6 -= 1;
 *VAR_4 = (u64)VAR_6 << 32 | VAR_7;
}
