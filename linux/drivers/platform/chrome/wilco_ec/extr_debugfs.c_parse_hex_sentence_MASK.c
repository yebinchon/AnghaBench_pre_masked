
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, int VAR_3, u8 *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;


 char VAR_10[16 + 1];
 u8 VAR_11;

 while (VAR_7 < VAR_3 && VAR_6 < VAR_5) {

  while (VAR_7 < VAR_3 && FUNC_0(VAR_2[VAR_7]))
   VAR_7++;

  if (VAR_7 >= VAR_3)
   break;


  VAR_8 = VAR_7;
  while (VAR_8 < VAR_3 && !FUNC_0(VAR_2[VAR_8]))
   VAR_8++;


  VAR_9 = VAR_8 - VAR_7;
  if (VAR_9 > 16)
   return -VAR_0;
  FUNC_2(VAR_10, VAR_2 + VAR_7, VAR_9);
  VAR_10[VAR_9] = '\0';






  if (FUNC_1(VAR_10, 16, &VAR_11))
   return -VAR_0;
  VAR_4[VAR_6++] = VAR_11;

  VAR_7 = VAR_8;
 }
 return VAR_6;
}
