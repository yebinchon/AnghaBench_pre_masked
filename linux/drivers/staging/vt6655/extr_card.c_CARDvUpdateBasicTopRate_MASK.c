
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vnt_private {int basic_rates; unsigned char byTopOFDMBasicRate; unsigned char byTopCCKBasicRate; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;

void FUNC_0(struct vnt_private *VAR_5)
{
 unsigned char VAR_6 = VAR_2, VAR_7 = VAR_1;
 unsigned char VAR_8;


 for (VAR_8 = VAR_3; VAR_8 >= VAR_4; VAR_8--) {
  if ((VAR_5->basic_rates) & ((u32)(1 << VAR_8))) {
   VAR_6 = VAR_8;
   break;
  }
 }
 VAR_5->byTopOFDMBasicRate = VAR_6;

 for (VAR_8 = VAR_0;; VAR_8--) {
  if ((VAR_5->basic_rates) & ((u32)(1 << VAR_8))) {
   VAR_7 = VAR_8;
   break;
  }
  if (VAR_8 == VAR_1)
   break;
 }
 VAR_5->byTopCCKBasicRate = VAR_7;
}
