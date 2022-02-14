
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_info {scalar_t__ uV; scalar_t__ uA; int reg; } ;
struct q6v5 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct q6v5 *VAR_1,
       struct reg_info *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_2[VAR_4].uV > 0)
   FUNC_2(VAR_2[VAR_4].reg, 0, VAR_0);

  if (VAR_2[VAR_4].uA > 0)
   FUNC_1(VAR_2[VAR_4].reg, 0);

  FUNC_0(VAR_2[VAR_4].reg);
 }
}
