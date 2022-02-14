
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int) ;

s8 FUNC_1(struct brcms_phy *VAR_2, bool VAR_3)
{
 s32 VAR_4 = FUNC_0(VAR_2, VAR_3);
 VAR_4 =
  ((VAR_4 <<
    10) + VAR_1 + (VAR_0 >> 1))
  / VAR_0;
 return (s8) VAR_4;
}
