
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct dst_state {int frequency; scalar_t__ dst_type; int* tx_tuna; int type_flags; int dst_hw_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(struct dst_state *VAR_7, u32 VAR_8)
{
 VAR_7->frequency = VAR_8;
 FUNC_0(2, "set Frequency %u\n", VAR_8);

 if (VAR_7->dst_type == VAR_4) {
  VAR_8 = VAR_8 / 1000;
  if (VAR_8 < 950 || VAR_8 > 2150)
   return -VAR_6;
  VAR_7->tx_tuna[2] = (VAR_8 >> 8);
  VAR_7->tx_tuna[3] = (u8) VAR_8;
  VAR_7->tx_tuna[4] = 0x01;
  VAR_7->tx_tuna[8] &= ~0x04;
  if (VAR_7->type_flags & VAR_1) {
   if (VAR_8 < 1531)
    VAR_7->tx_tuna[8] |= 0x04;
  }
 } else if (VAR_7->dst_type == VAR_5) {
  VAR_8 = VAR_8 / 1000;
  if (VAR_8 < 137000 || VAR_8 > 858000)
   return -VAR_6;
  VAR_7->tx_tuna[2] = (VAR_8 >> 16) & 0xff;
  VAR_7->tx_tuna[3] = (VAR_8 >> 8) & 0xff;
  VAR_7->tx_tuna[4] = (u8) VAR_8;
 } else if (VAR_7->dst_type == VAR_3) {
  VAR_8 = VAR_8 / 1000;
  VAR_7->tx_tuna[2] = (VAR_8 >> 16) & 0xff;
  VAR_7->tx_tuna[3] = (VAR_8 >> 8) & 0xff;
  VAR_7->tx_tuna[4] = (u8) VAR_8;
 } else if (VAR_7->dst_type == VAR_2) {
  VAR_8 = VAR_8 / 1000;
  if (VAR_8 < 51000 || VAR_8 > 858000)
   return -VAR_6;
  VAR_7->tx_tuna[2] = (VAR_8 >> 16) & 0xff;
  VAR_7->tx_tuna[3] = (VAR_8 >> 8) & 0xff;
  VAR_7->tx_tuna[4] = (u8) VAR_8;
  VAR_7->tx_tuna[5] = 0x00;
  VAR_7->tx_tuna[6] = 0x00;
  if (VAR_7->dst_hw_cap & VAR_0)
   VAR_7->tx_tuna[7] = 0x00;
 } else
  return -VAR_6;

 return 0;
}
