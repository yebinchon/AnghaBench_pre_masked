
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(int VAR_10, __be16 VAR_11,
          int VAR_12, int VAR_13)
{
 u32 VAR_14;




 VAR_14 = (VAR_10 << VAR_6);
 VAR_14 |= (VAR_12 << VAR_4);
 VAR_14 |= VAR_3;

 if (VAR_11 == FUNC_0(VAR_0)) {
  VAR_14 &= ~VAR_3;
  VAR_14 &= ~VAR_5;
 } else {
  VAR_14 |= VAR_5;
 }

 if (VAR_13 == VAR_1) {
  VAR_14 &= ~VAR_9;
  VAR_14 &= ~VAR_7;
 } else if (VAR_13 == VAR_2) {
  VAR_14 |= VAR_9;
  VAR_14 &= ~VAR_7;
 } else {
  VAR_14 |= VAR_8;
 }

 return VAR_14;
}
