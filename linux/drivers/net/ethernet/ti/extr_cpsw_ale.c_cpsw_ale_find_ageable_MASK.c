
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cpsw_ale*,int,int *) ;

__attribute__((used)) static int FUNC_4(struct cpsw_ale *VAR_6)
{
 u32 VAR_7[VAR_0];
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6->params.ale_entries; VAR_9++) {
  FUNC_3(VAR_6, VAR_9, VAR_7);
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8 != VAR_1 && VAR_8 != VAR_2)
   continue;
  if (FUNC_1(VAR_7))
   continue;
  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8 != VAR_4 &&
      VAR_8 != VAR_3)
   return VAR_9;
 }
 return -VAR_5;
}
