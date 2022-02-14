
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __u64 ;



__attribute__((used)) static inline u32 FUNC_0(__u64 VAR_0)
{
 u32 VAR_1 = VAR_0 & 0xffffffff;
 VAR_1 ^= VAR_0 >> 32;
 if (!VAR_1)
  VAR_1 = 2;
 return VAR_1;
}
