
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char*,int,unsigned long*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(u16 *VAR_1, const char *VAR_2, size_t VAR_3,
       size_t VAR_4)
{
 char VAR_5, VAR_6[5] = { 0 };
 int VAR_7, VAR_8 = 0;
 unsigned long VAR_9;


 while (VAR_3) {
  VAR_5 = VAR_2[VAR_3 - 1];
  if (!FUNC_0(VAR_5) && VAR_5 != '\0')
   break;
  VAR_3--;
 }

 if (VAR_3 != VAR_4 * 4)
  return -VAR_0;

 while (VAR_8 < VAR_4) {
  FUNC_2(VAR_6, VAR_2, 4);
  VAR_2 += 4;
  VAR_7 = FUNC_1(VAR_6, 16, &VAR_9);
  if (VAR_7)
   return VAR_7;
  VAR_1[VAR_8++] = FUNC_3((u16)VAR_9);
 }

 return 0;
}
