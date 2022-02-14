
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fimc_is {int dummy; } ;


 int FUNC_0 (int const**) ;
 int VAR_0 ;
 int FUNC_1 (struct fimc_is*,int const) ;

__attribute__((used)) static int FUNC_2(struct fimc_is *VAR_1, int VAR_2)
{
 static const u8 VAR_3[][2] = {
  { 129, 136 },
  { 131, 135 },
  { 128, 132 },
  { 130, 133 },
  { 16 , 134 },
 };
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  if (VAR_3[VAR_4][0] != VAR_2)
   continue;

  FUNC_1(VAR_1, VAR_3[VAR_4][1]);
  return 0;
 }

 return -VAR_0;
}
