
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int ) ;

s32 FUNC_2(struct e1000_hw *VAR_9, u16 *VAR_10,
           u16 *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12 & VAR_2)
  *VAR_10 = VAR_7;
 else if (VAR_12 & VAR_1)
  *VAR_10 = VAR_6;
 else
  *VAR_10 = VAR_5;

 if (VAR_12 & VAR_0)
  *VAR_11 = VAR_3;
 else
  *VAR_11 = VAR_4;

 FUNC_0("%u Mbps, %s Duplex\n",
       *VAR_10 == VAR_7 ? 1000 : *VAR_10 == VAR_6 ? 100 : 10,
       *VAR_11 == VAR_3 ? "Full" : "Half");

 return 0;
}
