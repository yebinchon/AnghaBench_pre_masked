
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ addr_t ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,size_t) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static inline void *FUNC_3(addr_t *VAR_1, addr_t VAR_2, size_t VAR_3,
         int VAR_4, int VAR_5)
{
 addr_t VAR_6;

 VAR_6 = FUNC_0(*VAR_1, VAR_4);
 if (VAR_5 && FUNC_1(VAR_6, VAR_3)) {
  VAR_6 = FUNC_0(VAR_6, 4096);
  VAR_6 = FUNC_0(VAR_6, VAR_4);
 }
 if (VAR_6 + VAR_3 > VAR_2)
  return FUNC_2(-VAR_0);
 *VAR_1 = VAR_6 + VAR_3;
 return (void *) VAR_6;
}
