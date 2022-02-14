
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int,int *,int*) ;
 int FUNC_1 (int *,int,char*,int,int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_1, u8 *VAR_2, u16 *VAR_3)
{
 u16 VAR_4;

 if (*VAR_3 < 10) {

  FUNC_0(VAR_1, VAR_2, VAR_3);
  return -VAR_0;
 }

 VAR_4 = FUNC_1(VAR_2, *VAR_3, "%hx.%hx", VAR_1 >> 16, VAR_1);
 *VAR_3 -= VAR_4;
 return 0;
}
