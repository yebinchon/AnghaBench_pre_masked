
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netdata_local {scalar_t__ duplex; scalar_t__ speed; int net_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct netdata_local *VAR_5)
{
 u32 VAR_6;

 if (VAR_5->duplex == VAR_0) {
  VAR_6 = FUNC_5(FUNC_2(VAR_5->net_base));
  VAR_6 |= VAR_2;
  FUNC_6(VAR_6, FUNC_2(VAR_5->net_base));
  VAR_6 = FUNC_5(FUNC_0(VAR_5->net_base));
  VAR_6 |= VAR_1;
  FUNC_6(VAR_6, FUNC_0(VAR_5->net_base));
  FUNC_6(FUNC_4(0x15), FUNC_1(VAR_5->net_base));
 } else {
  VAR_6 = FUNC_5(FUNC_2(VAR_5->net_base));
  VAR_6 &= ~VAR_2;
  FUNC_6(VAR_6, FUNC_2(VAR_5->net_base));
  VAR_6 = FUNC_5(FUNC_0(VAR_5->net_base));
  VAR_6 &= ~VAR_1;
  FUNC_6(VAR_6, FUNC_0(VAR_5->net_base));
  FUNC_6(FUNC_4(0x12), FUNC_1(VAR_5->net_base));
 }

 if (VAR_5->speed == VAR_4)
  FUNC_6(VAR_3, FUNC_3(VAR_5->net_base));
 else
  FUNC_6(0, FUNC_3(VAR_5->net_base));
}
