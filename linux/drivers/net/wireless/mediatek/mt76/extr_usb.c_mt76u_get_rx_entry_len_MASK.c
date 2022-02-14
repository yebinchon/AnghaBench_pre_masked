
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_4, u32 VAR_5)
{
 u16 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = VAR_1 + VAR_3 +
    VAR_2;

 if (VAR_5 < VAR_7 || !VAR_6 ||
     VAR_6 + VAR_1 > VAR_5 ||
     (VAR_6 & 0x3))
  return -VAR_0;
 return VAR_6;
}
