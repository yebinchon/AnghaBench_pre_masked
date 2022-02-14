
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (void*) ;

unsigned long FUNC_6(u32 VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 VAR_4 = FUNC_3(VAR_5);
 VAR_6 = FUNC_2(VAR_0, VAR_4);
 VAR_7 = VAR_6;

 if (VAR_6) {
  while (VAR_5 > 0) {
   FUNC_1(FUNC_4(VAR_7));
   VAR_7 += VAR_1;
   VAR_5 -= VAR_1;
  }
 }
 *VAR_3 = (u32) FUNC_5((void *) VAR_6);
 return VAR_6;
}
