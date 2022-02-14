
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int*,int) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_1, u8 *VAR_2, int VAR_3, int *VAR_4)
{
 u8 VAR_5[2];
 u16 VAR_6;


 FUNC_2(VAR_1, VAR_5, VAR_4, 1);


 FUNC_2(VAR_1, VAR_5, VAR_4, 2);

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 >= VAR_3) {
  FUNC_1("error: readinfo buffer too small\n");
  return -VAR_0;
 }

 FUNC_2(VAR_1, VAR_2, VAR_4, VAR_6);
 VAR_2[VAR_6] = '\0';

 return 0;
}
