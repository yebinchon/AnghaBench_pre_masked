
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __vxge_hw_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct __vxge_hw_ring*,void*) ;
 int FUNC_1 (struct __vxge_hw_ring*,void*) ;

__attribute__((used)) static inline void FUNC_2(int *VAR_1, void **VAR_2,
        void *VAR_3, struct __vxge_hw_ring *VAR_4)
{
 int VAR_5 = *VAR_1;
 if ((*VAR_1 % VAR_0) == 0) {
  if (*VAR_2)
   FUNC_1(VAR_4, *VAR_2);
  *VAR_2 = VAR_3;
 } else
  FUNC_0(VAR_4, VAR_3);
 VAR_5++;
 *VAR_1 = VAR_5;
}
