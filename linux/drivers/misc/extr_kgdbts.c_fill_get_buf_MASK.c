
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;


 char* VAR_0 ;
 char FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_5(char *VAR_2)
{
 unsigned char VAR_3 = 0;
 int VAR_4 = 0;
 char VAR_5;

 FUNC_3(VAR_0, "$");
 FUNC_2(VAR_0, VAR_2);
 while ((VAR_5 = VAR_2[VAR_4])) {
  VAR_3 += VAR_5;
  VAR_4++;
 }
 FUNC_2(VAR_0, "#");
 VAR_0[VAR_4 + 2] = FUNC_0(VAR_3);
 VAR_0[VAR_4 + 3] = FUNC_1(VAR_3);
 VAR_0[VAR_4 + 4] = '\0';
 FUNC_4("get%i: %s\n", VAR_1.idx, VAR_0);
}
