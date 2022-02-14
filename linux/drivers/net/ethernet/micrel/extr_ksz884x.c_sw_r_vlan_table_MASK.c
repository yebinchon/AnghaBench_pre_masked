
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ksz_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ksz_hw*,int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct ksz_hw *VAR_7, u16 VAR_8, u16 *VAR_9, u8 *VAR_10,
 u8 *VAR_11)
{
 u32 VAR_12;

 FUNC_0(VAR_7, VAR_0, VAR_8, &VAR_12);
 if (VAR_12 & VAR_5) {
  *VAR_9 = (u16)(VAR_12 & VAR_6);
  *VAR_10 = (u8)((VAR_12 & VAR_1) >> VAR_2);
  *VAR_11 = (u8)((VAR_12 & VAR_3) >>
   VAR_4);
  return 0;
 }
 return -1;
}
