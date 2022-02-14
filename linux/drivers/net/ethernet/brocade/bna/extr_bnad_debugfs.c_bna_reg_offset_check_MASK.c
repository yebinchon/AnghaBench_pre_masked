
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bfa_ioc {int dummy; } ;


 int FUNC_0 (struct bfa_ioc*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct bfa_ioc *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u8 VAR_5;


 VAR_5 = (VAR_3 >> 15) & 0x7;
 if (VAR_5 == 0) {

  if (VAR_3 + (VAR_4 << 2) > 0x8000)
   return VAR_0;
 } else if (VAR_5 == 0x1) {

  if (VAR_3 + (VAR_4 << 2) > 0x10000)
   return VAR_0;
 } else {

  if (VAR_3 + (VAR_4 << 2) > FUNC_0(VAR_2))
   return VAR_0;
 }
 return VAR_1;
}
