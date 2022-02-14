
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_3)
{
 char *VAR_4, *VAR_5 = VAR_3;
 int VAR_6 = 0;


 VAR_4 = FUNC_1(VAR_5, VAR_2);
 while (VAR_4) {
  FUNC_0(VAR_4, VAR_1, 4);
  VAR_5 = VAR_4;
  VAR_4 = FUNC_1(VAR_5, VAR_2);
 }


 VAR_4 = FUNC_1(VAR_3, VAR_0);
 while (VAR_4) {
  VAR_6 += 1;
  VAR_3 = VAR_4 + 1;
  VAR_4 = FUNC_1(VAR_3, VAR_0);
 }

 return VAR_6;
}
