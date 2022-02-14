
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint64_t FUNC_0(int VAR_2, int VAR_3)
{
 uint64_t VAR_4 = VAR_0;

 if (VAR_3 >= 0 && VAR_3 < VAR_1) {
  VAR_4 <<= (2 * VAR_3);
  VAR_4 /= VAR_2;
  return VAR_4;
 }

 return 0;
}
