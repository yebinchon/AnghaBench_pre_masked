
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(int VAR_4, const char **VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_1[VAR_6])
   FUNC_1("%s\n", VAR_1[VAR_6]);
 }

 if (FUNC_0(VAR_0))
  FUNC_1("KDBFLAGS=0x%x\n", VAR_3);

 return 0;
}
