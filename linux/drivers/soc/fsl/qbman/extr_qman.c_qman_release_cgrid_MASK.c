
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;

int FUNC_3(u32 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_2("CGRID %d leaked\n", VAR_2);
  return VAR_3;
 }

 FUNC_1(VAR_1, VAR_2 | VAR_0, 1);
 return 0;
}
