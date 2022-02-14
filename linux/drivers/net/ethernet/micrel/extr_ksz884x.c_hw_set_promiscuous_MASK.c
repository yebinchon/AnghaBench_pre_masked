
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ksz_hw {scalar_t__ enabled; int rx_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksz_hw*) ;
 int FUNC_1 (struct ksz_hw*) ;

__attribute__((used)) static void FUNC_2(struct ksz_hw *VAR_1, u8 VAR_2)
{

 FUNC_1(VAR_1);

 if (VAR_2)
  VAR_1->rx_cfg |= VAR_0;
 else
  VAR_1->rx_cfg &= ~VAR_0;

 if (VAR_1->enabled)
  FUNC_0(VAR_1);
}
