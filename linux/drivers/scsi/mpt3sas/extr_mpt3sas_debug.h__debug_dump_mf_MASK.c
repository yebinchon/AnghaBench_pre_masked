
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static inline void
FUNC_2(void *VAR_0, int VAR_1)
{
 int VAR_2;
 __le32 *VAR_3 = (__le32 *)VAR_0;

 FUNC_1("mf:\n\t");
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_2 && ((VAR_2 % 8) == 0))
   FUNC_1("\n\t");
  FUNC_1("%08x ", FUNC_0(VAR_3[VAR_2]));
 }
 FUNC_1("\n");
}
