
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cosa_data {int num; } ;


 char FUNC_0 (struct cosa_data*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct cosa_data*,char) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct cosa_data *VAR_0, int VAR_1)
{
 char VAR_2[5];
 int VAR_3;


 FUNC_3(VAR_2, "%04X", VAR_1);
 for (VAR_3=0; VAR_3<4; VAR_3++) {
  if (FUNC_2(VAR_0, VAR_2[VAR_3]) == -1) {
   FUNC_1("cosa%d: puthexnumber failed to write byte %d\n",
      VAR_0->num, VAR_3);
   return -1-2*VAR_3;
  }
  if (FUNC_0(VAR_0) != VAR_2[VAR_3]) {
   FUNC_1("cosa%d: puthexhumber failed to read echo of byte %d\n",
      VAR_0->num, VAR_3);
   return -2-2*VAR_3;
  }
 }
 return 0;
}
