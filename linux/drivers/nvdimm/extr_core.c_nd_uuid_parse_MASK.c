
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
typedef int u8 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int,char const,int,char const) ;
 int FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (char const) ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, u8 *VAR_2, const char *VAR_3,
  size_t VAR_4)
{
 const char *VAR_5 = VAR_3;
 u8 VAR_6[16];
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++) {
  if (!FUNC_3(VAR_5[0]) || !FUNC_3(VAR_5[1])) {
   FUNC_0(VAR_1, "pos: %d buf[%zd]: %c buf[%zd]: %c\n",
     VAR_7, VAR_5 - VAR_3, VAR_5[0],
     VAR_5 + 1 - VAR_3, VAR_5[1]);
   return -VAR_0;
  }

  VAR_6[VAR_7] = (FUNC_1(VAR_5[0]) << 4) | FUNC_1(VAR_5[1]);
  VAR_5 += 2;
  if (FUNC_2(*VAR_5))
   VAR_5++;
 }

 FUNC_4(VAR_2, VAR_6, sizeof(VAR_6));
 return 0;
}
