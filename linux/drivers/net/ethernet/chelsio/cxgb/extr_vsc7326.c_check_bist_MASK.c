
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adapter_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_2(adapter_t *VAR_0, int VAR_1)
{
 int VAR_2=0;
 int VAR_3=0;

 VAR_2 = FUNC_0(VAR_0,VAR_1, 0x02);
 VAR_3 = ((FUNC_0(VAR_0,VAR_1, 0x0e)<<8) +
   (FUNC_0(VAR_0,VAR_1, 0x0d)));
 if ((VAR_2 & 3) != 0x3)
  FUNC_1("Result: 0x%x  BIST error in ram %d, column: 0x%04x\n",
   VAR_2, VAR_1, VAR_3);
 return 0;
}
