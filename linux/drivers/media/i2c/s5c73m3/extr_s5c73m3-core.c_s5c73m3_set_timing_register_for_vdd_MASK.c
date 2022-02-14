
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; int member_1; } ;
typedef TYPE_1__ u32 ;
struct s5c73m3 {int dummy; } ;


 int FUNC_0 (TYPE_1__ const**) ;
 int FUNC_1 (struct s5c73m3*,TYPE_1__ const,TYPE_1__ const) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_0)
{
 static const u32 VAR_1[][2] = {
  { 0x30100018, 0x0618 },
  { 0x3010001c, 0x10c1 },
  { 0x30100020, 0x249e }
 };
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1[VAR_3][0], VAR_1[VAR_3][1]);
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
