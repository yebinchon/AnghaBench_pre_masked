
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t* VAR_0 ;
 int FUNC_0 (int,void*) ;

__attribute__((used)) static inline void FUNC_1(void *VAR_1, u32 VAR_2, u32 VAR_3[4])
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2/2; VAR_4++, VAR_1 += 4)
  FUNC_0(VAR_3[VAR_0[VAR_4]], VAR_1);
}
