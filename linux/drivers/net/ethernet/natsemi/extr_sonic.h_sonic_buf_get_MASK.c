
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile __u16 ;



__attribute__((used)) static inline __u16 FUNC_0(void* VAR_0, int VAR_1,
      int VAR_2)
{
 if (VAR_1)



  return ((volatile __u16 *) VAR_0 + (VAR_2*2))[0];

 else
  return ((volatile __u16 *) VAR_0)[VAR_2];
}
