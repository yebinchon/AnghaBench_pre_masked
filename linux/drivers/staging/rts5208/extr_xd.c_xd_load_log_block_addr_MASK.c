
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static u16 FUNC_0(u8 *VAR_8)
{
 u16 VAR_9 = 0xFFFF;

 if (VAR_8[VAR_4] & VAR_5)
  VAR_9 = ((u16)VAR_8[VAR_0] << 8) |
   VAR_8[VAR_1];
 else if (VAR_8[VAR_4] & VAR_6)
  VAR_9 = ((u16)VAR_8[VAR_0] << 8) |
   VAR_8[VAR_1];
 else if (VAR_8[VAR_4] & VAR_7)
  VAR_9 = ((u16)VAR_8[VAR_2] << 8) |
   VAR_8[VAR_3];

 return VAR_9;
}
