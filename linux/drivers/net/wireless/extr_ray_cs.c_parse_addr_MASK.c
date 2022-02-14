
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_1, UCHAR *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7;

 if (VAR_1 == ((void*)0))
  return 0;
 if ((VAR_3 = FUNC_2(VAR_1)) < 2)
  return 0;
 FUNC_1(VAR_2, 0, VAR_0);

 VAR_7 = 1;
 VAR_5 = VAR_3 - 1;
 if (VAR_5 > 12)
  VAR_5 = 12;
 VAR_4 = 5;

 while (VAR_5 > 0) {
  if ((VAR_6 = FUNC_0(VAR_1[VAR_5--])) != -1)
   VAR_2[VAR_4] = VAR_6;
  else
   return 0;

  if (VAR_5 == 0)
   break;
  if ((VAR_6 = FUNC_0(VAR_1[VAR_5--])) != -1)
   VAR_2[VAR_4] += VAR_6 << 4;
  else
   return 0;
  if (!VAR_4--)
   break;
 }
 return VAR_7;
}
