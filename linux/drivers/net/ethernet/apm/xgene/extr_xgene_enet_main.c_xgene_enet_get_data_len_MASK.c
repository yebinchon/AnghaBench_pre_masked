
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u16 FUNC_4(u64 VAR_4)
{
 u16 VAR_5, VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_4);

 if (FUNC_3(VAR_5 == 0x7800)) {
  return 0;
 } else if (!(VAR_5 & FUNC_0(14))) {
  VAR_6 = FUNC_1(13, 0);
  return (VAR_5 & VAR_6) ? (VAR_5 & VAR_6) : VAR_1;
 } else if (!(VAR_5 & FUNC_1(13, 12))) {
  VAR_6 = FUNC_1(11, 0);
  return (VAR_5 & VAR_6) ? (VAR_5 & VAR_6) : VAR_3;
 } else {
  VAR_6 = FUNC_1(11, 0);
  return (VAR_5 & VAR_6) ? (VAR_5 & VAR_6) : VAR_2;
 }
}
