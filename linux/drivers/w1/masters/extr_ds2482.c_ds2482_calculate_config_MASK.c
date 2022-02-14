
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline u8 FUNC_0(u8 VAR_3)
{
 VAR_3 |= VAR_2;

 if (VAR_1)
  VAR_3 |= VAR_0;

 return VAR_3 | ((~VAR_3 & 0x0f) << 4);
}
