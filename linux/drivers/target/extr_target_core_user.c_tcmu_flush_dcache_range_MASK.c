
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 size_t FUNC_2 (unsigned long,scalar_t__) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static inline void FUNC_4(void *VAR_1, size_t VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1);
 void *VAR_4 = VAR_1 - VAR_3;

 VAR_2 = FUNC_2(VAR_2+VAR_3, VAR_0);

 while (VAR_2) {
  FUNC_0(FUNC_3(VAR_4));
  VAR_4 += VAR_0;
  VAR_2 -= VAR_0;
 }
}
