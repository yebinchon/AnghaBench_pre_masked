
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cpsw_ale*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct cpsw_ale *VAR_3)
{
 u32 VAR_4[VAR_0];
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->params.ale_entries; VAR_6++) {
  FUNC_1(VAR_3, VAR_6, VAR_4);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 == VAR_1)
   return VAR_6;
 }
 return -VAR_2;
}
