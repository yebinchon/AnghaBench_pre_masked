
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u32 ;



__attribute__((used)) static inline __u32 FUNC_0(__u32 VAR_0, signed int VAR_1)
{
 if (VAR_1 >= 0)
  VAR_0 <<= VAR_1;
 else
  VAR_0 >>= -VAR_1;
 return VAR_0;
}
