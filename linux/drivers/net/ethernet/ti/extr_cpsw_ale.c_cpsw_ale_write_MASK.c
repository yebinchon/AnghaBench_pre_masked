
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ale_entries; scalar_t__ ale_regs; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct cpsw_ale *VAR_4, int VAR_5, u32 *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5 > VAR_4->params.ale_entries);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_1(VAR_6[VAR_7], VAR_4->params.ale_regs +
          VAR_1 + 4 * VAR_7);

 FUNC_1(VAR_5 | VAR_3, VAR_4->params.ale_regs +
         VAR_2);

 return VAR_5;
}
