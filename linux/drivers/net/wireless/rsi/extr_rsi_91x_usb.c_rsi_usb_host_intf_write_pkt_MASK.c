
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rsi_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rsi_hw*,int,int*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rsi_hw *VAR_5,
           u8 *VAR_6,
           u32 VAR_7)
{
 u32 VAR_8 = ((VAR_6[1] >> 4) & 0x7);
 u8 VAR_9;

 VAR_9 = ((VAR_8 == VAR_3 || VAR_8 == VAR_2 ||
       VAR_8 == VAR_1) ? VAR_4 : VAR_0);

 return FUNC_0(VAR_5,
      VAR_9,
      (u8 *)VAR_6,
      VAR_7);
}
