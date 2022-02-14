
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;


 unsigned long FUNC_0 (int *,size_t,size_t) ;

__attribute__((used)) static
void FUNC_1(unsigned long *VAR_0, void *VAR_1,
     size_t VAR_2)
{
 u8 *VAR_3 = VAR_1;
 size_t VAR_4, VAR_5;
 unsigned long VAR_6;

 VAR_4 = 0;
 while (VAR_4 < VAR_2) {
  VAR_5 = VAR_2 - VAR_4 >= sizeof(VAR_6) ?
   sizeof(VAR_6) : VAR_2 - VAR_4;
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
  VAR_0[VAR_4 / sizeof(VAR_6)] = VAR_6;
  VAR_4 += sizeof(VAR_6);
 }
}
