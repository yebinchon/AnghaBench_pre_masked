
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u16 FUNC_0(u16 VAR_4, u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 u16 VAR_8 = 0;
 u16 VAR_9 = VAR_3;

 if (VAR_5)
  VAR_9 += VAR_2;
 else
  VAR_9 += VAR_1;

 VAR_8 = VAR_4 - VAR_9;

 if (!VAR_8)
  VAR_8 = VAR_0;

 return VAR_8;
}
