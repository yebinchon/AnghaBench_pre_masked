
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct adapter*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_3, void *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 u32 *VAR_7 = VAR_4 + VAR_5 - VAR_2;

 for ( ; VAR_5 <= VAR_6; VAR_5 += sizeof(u32)) {





  if (VAR_5 == VAR_1 + VAR_0)
   *VAR_7++ = 0xffff;
  else
   *VAR_7++ = FUNC_0(VAR_3, VAR_5);
 }
}
