
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcssblk_dev_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int VAR_1 ;
 struct dcssblk_dev_info* FUNC_1 (char*) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int *,int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 char FUNC_5 (char) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char VAR_8[VAR_0 + 1];
 struct dcssblk_dev_info *VAR_9;

 for (VAR_5 = 0; (VAR_5 < VAR_0) && (VAR_3[VAR_5] != '\0');
      VAR_5++) {
  for (VAR_6 = VAR_5; (VAR_6 < VAR_0) &&
       (VAR_3[VAR_6] != ',') &&
       (VAR_3[VAR_6] != '\0') &&
       (VAR_3[VAR_6] != '('); VAR_6++)
  {
   VAR_8[VAR_6-VAR_5] = VAR_3[VAR_6];
  }
  VAR_8[VAR_6-VAR_5] = '\0';
  VAR_4 = FUNC_0(VAR_2, ((void*)0), VAR_8, VAR_6-VAR_5);
  if ((VAR_4 >= 0) && (VAR_3[VAR_6] == '(')) {
   for (VAR_7 = 0; (VAR_8[VAR_7] != ':') && (VAR_8[VAR_7] != '\0'); VAR_7++)
    VAR_8[VAR_7] = FUNC_5(VAR_8[VAR_7]);
   VAR_8[VAR_7] = '\0';
   if (!FUNC_4(&VAR_3[VAR_6], "(local)", 7)) {
    FUNC_3(&VAR_1);
    VAR_9 = FUNC_1(VAR_8);
    FUNC_6(&VAR_1);
    if (VAR_9)
     FUNC_2(&VAR_9->dev,
            ((void*)0), "0\n", 2);
   }
  }
  while ((VAR_3[VAR_6] != ',') &&
         (VAR_3[VAR_6] != '\0'))
  {
   VAR_6++;
  }
  if (VAR_3[VAR_6] == '\0')
   break;
  VAR_5 = VAR_6;
 }
}
