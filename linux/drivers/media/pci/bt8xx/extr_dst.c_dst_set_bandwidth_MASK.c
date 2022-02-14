
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dst_state {int bandwidth; scalar_t__ dst_type; int dst_hw_cap; int* tx_tuna; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct dst_state *VAR_4, u32 VAR_5)
{
 VAR_4->bandwidth = VAR_5;

 if (VAR_4->dst_type != VAR_1)
  return -VAR_3;

 switch (VAR_5) {
 case 6000000:
  if (VAR_4->dst_hw_cap & VAR_0)
   VAR_4->tx_tuna[7] = 0x06;
  else {
   VAR_4->tx_tuna[6] = 0x06;
   VAR_4->tx_tuna[7] = 0x00;
  }
  break;
 case 7000000:
  if (VAR_4->dst_hw_cap & VAR_0)
   VAR_4->tx_tuna[7] = 0x07;
  else {
   VAR_4->tx_tuna[6] = 0x07;
   VAR_4->tx_tuna[7] = 0x00;
  }
  break;
 case 8000000:
  if (VAR_4->dst_hw_cap & VAR_0)
   VAR_4->tx_tuna[7] = 0x08;
  else {
   VAR_4->tx_tuna[6] = 0x08;
   VAR_4->tx_tuna[7] = 0x00;
  }
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
