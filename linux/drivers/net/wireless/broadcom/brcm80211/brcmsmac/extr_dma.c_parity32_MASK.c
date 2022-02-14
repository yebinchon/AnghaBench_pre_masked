
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __le32 ;



__attribute__((used)) static u32 FUNC_0(__le32 VAR_0)
{

 u32 VAR_1 = *(u32 *)&VAR_0;

 VAR_1 ^= VAR_1 >> 16;
 VAR_1 ^= VAR_1 >> 8;
 VAR_1 ^= VAR_1 >> 4;
 VAR_1 ^= VAR_1 >> 2;
 VAR_1 ^= VAR_1 >> 1;

 return VAR_1 & 1;
}
