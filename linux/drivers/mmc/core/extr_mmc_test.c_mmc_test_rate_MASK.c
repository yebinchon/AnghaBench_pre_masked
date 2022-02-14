
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct timespec64 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct timespec64*) ;

__attribute__((used)) static unsigned int FUNC_2(uint64_t VAR_1, struct timespec64 *VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_1 *= 1000000000;

 while (VAR_3 > VAR_0) {
  VAR_1 >>= 1;
  VAR_3 >>= 1;
 }

 if (!VAR_3)
  return 0;

 FUNC_0(VAR_1, (uint32_t)VAR_3);

 return VAR_1;
}
