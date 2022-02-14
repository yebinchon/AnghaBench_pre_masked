
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (void*,scalar_t__,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,size_t) ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned long,int) ;

int FUNC_4(void *VAR_5, unsigned long VAR_6, size_t VAR_7)
{
 unsigned long VAR_8, VAR_9;

 if (!VAR_3)
  return -VAR_1;

 while (VAR_7) {
  if (FUNC_3(VAR_4, VAR_6 / VAR_2 + 2, 1)) {
   FUNC_0("sclp_sdias_copy() failed\n");
   return -VAR_0;
  }
  VAR_8 = VAR_6 % VAR_2;
  VAR_9 = FUNC_2(VAR_2 - VAR_8, VAR_7);
  FUNC_1(VAR_5, VAR_4 + VAR_8, VAR_9);
  VAR_6 += VAR_9;
  VAR_5 += VAR_9;
  VAR_7 -= VAR_9;
 }
 return 0;
}
