
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u32 ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static __u32 FUNC_1(const void *VAR_0, int VAR_1)
{
 const __be32 *VAR_2 = VAR_0;
 __u32 VAR_3;

 VAR_3 = 0;
 VAR_1 >>= 2;
 while (VAR_1 > 0) {
  VAR_3 += FUNC_0(*VAR_2++);
  VAR_1--;
 }
 return VAR_3;
}
