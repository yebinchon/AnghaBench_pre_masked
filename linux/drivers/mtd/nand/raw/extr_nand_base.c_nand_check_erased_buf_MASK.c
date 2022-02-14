
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char const) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, int VAR_4, int VAR_5)
{
 const unsigned char *VAR_6 = VAR_3;
 int VAR_7 = 0;
 int VAR_8;

 for (; VAR_4 && ((uintptr_t)VAR_6) % sizeof(long);
      VAR_4--, VAR_6++) {
  VAR_8 = FUNC_0(*VAR_6);
  VAR_7 += VAR_0 - VAR_8;
  if (FUNC_2(VAR_7 > VAR_5))
   return -VAR_2;
 }

 for (; VAR_4 >= sizeof(long);
      VAR_4 -= sizeof(long), VAR_6 += sizeof(long)) {
  unsigned long VAR_9 = *((unsigned long *)VAR_6);
  if (VAR_9 == ~0UL)
   continue;
  VAR_8 = FUNC_1(VAR_9);
  VAR_7 += VAR_1 - VAR_8;
  if (FUNC_2(VAR_7 > VAR_5))
   return -VAR_2;
 }

 for (; VAR_4 > 0; VAR_4--, VAR_6++) {
  VAR_8 = FUNC_0(*VAR_6);
  VAR_7 += VAR_0 - VAR_8;
  if (FUNC_2(VAR_7 > VAR_5))
   return -VAR_2;
 }

 return VAR_7;
}
