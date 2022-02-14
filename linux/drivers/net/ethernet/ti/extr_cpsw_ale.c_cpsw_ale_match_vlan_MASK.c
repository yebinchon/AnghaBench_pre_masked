
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cpsw_ale*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct cpsw_ale *VAR_3, u16 VAR_4)
{
 u32 VAR_5[VAR_0];
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->params.ale_entries; VAR_7++) {
  FUNC_2(VAR_3, VAR_7, VAR_5);
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 != VAR_1)
   continue;
  if (FUNC_1(VAR_5) == VAR_4)
   return VAR_7;
 }
 return -VAR_2;
}
