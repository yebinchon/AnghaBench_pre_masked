
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static __be32 FUNC_0(u32 *VAR_7, u32 *VAR_8, u32 *VAR_9, u32 *VAR_10)
{

 if (*VAR_7 & ~VAR_3 ||
     *VAR_8 & ~VAR_4) {
  if (*VAR_7 & VAR_1 ||
             *VAR_7 & VAR_0)
   *VAR_10 = VAR_2;
  else
   return VAR_6;
 }
 *VAR_7 &= VAR_3;
 *VAR_8 &= VAR_4;
 *VAR_9 &= VAR_5;
 return 0;
}
