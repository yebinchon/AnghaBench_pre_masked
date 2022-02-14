
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
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct cpsw_ale *VAR_3, int VAR_4, u32 *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4 > VAR_3->params.ale_entries);

 FUNC_2(VAR_4, VAR_3->params.ale_regs + VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_5[VAR_6] = FUNC_1(VAR_3->params.ale_regs +
          VAR_1 + 4 * VAR_6);

 return VAR_4;
}
