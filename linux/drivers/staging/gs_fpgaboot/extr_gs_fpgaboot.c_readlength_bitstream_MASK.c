
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int*,int) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_1, int *VAR_2, int *VAR_3)
{
 u8 VAR_4[4];


 FUNC_2(VAR_1, VAR_4, VAR_3, 1);


 if (VAR_4[0] != 'e') {
  FUNC_1("error: length section is not 'e', but %c\n", VAR_4[0]);
  return -VAR_0;
 }


 FUNC_2(VAR_1, VAR_4, VAR_3, 4);

 *VAR_2 = FUNC_0(VAR_4);

 return 0;
}
