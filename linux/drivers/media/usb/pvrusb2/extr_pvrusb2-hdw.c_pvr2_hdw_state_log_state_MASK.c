
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int name; } ;
typedef int buf ;


 int FUNC_0 (char*,int ,unsigned int,char*) ;
 unsigned int FUNC_1 (struct pvr2_hdw*,char*,int) ;
 unsigned int FUNC_2 (struct pvr2_hdw*,unsigned int,char*,int) ;

__attribute__((used)) static void FUNC_3(struct pvr2_hdw *VAR_0)
{
 char VAR_1[256];
 unsigned int VAR_2, VAR_3;
 unsigned int VAR_4, VAR_5;

 for (VAR_2 = 0; ; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0,VAR_2,VAR_1,sizeof(VAR_1));
  if (!VAR_3) break;
  FUNC_0("%s %.*s\n", VAR_0->name, VAR_3, VAR_1);
 }
 VAR_3 = FUNC_1(VAR_0, VAR_1, sizeof(VAR_1));
 if (VAR_3 >= sizeof(VAR_1))
  VAR_3 = sizeof(VAR_1);

 VAR_5 = 0;
 while (VAR_5 < VAR_3) {
  VAR_4 = 0;
  while ((VAR_4 + VAR_5 < VAR_3) && (VAR_1[VAR_4 + VAR_5] != '\n')) {
   VAR_4++;
  }
  FUNC_0("%s %.*s\n", VAR_0->name, VAR_4, VAR_1 + VAR_5);
  VAR_5 += VAR_4 + 1;
 }
}
