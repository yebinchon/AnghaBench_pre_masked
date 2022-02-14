
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vnt_private {int basic_rates; int top_ofdm_basic_rate; int top_cck_basic_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(struct vnt_private *VAR_5)
{
 u8 VAR_6 = VAR_2, VAR_7 = VAR_1;
 u8 VAR_8;


 for (VAR_8 = VAR_3; VAR_8 >= VAR_4; VAR_8--) {
  if (VAR_5->basic_rates & (u16)(1 << VAR_8)) {
   VAR_6 = VAR_8;
   break;
  }
 }

 VAR_5->top_ofdm_basic_rate = VAR_6;

 for (VAR_8 = VAR_0;; VAR_8--) {
  if (VAR_5->basic_rates & (u16)(1 << VAR_8)) {
   VAR_7 = VAR_8;
   break;
  }
  if (VAR_8 == VAR_1)
   break;
 }

 VAR_5->top_cck_basic_rate = VAR_7;
}
