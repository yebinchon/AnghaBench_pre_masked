
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpsw_ale*,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cpsw_ale*,int,int *) ;
 int FUNC_7 (struct cpsw_ale*,int,int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct cpsw_ale *VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6[VAR_0];
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->params.ale_entries; VAR_8++) {
  FUNC_6(VAR_3, VAR_8, VAR_6);
  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7 != VAR_1 && VAR_7 != VAR_2)
   continue;






  if (VAR_5 != -1 && FUNC_5(VAR_6) != VAR_5)
   continue;

  if (FUNC_3(VAR_6)) {
   u8 VAR_9[6];

   if (FUNC_4(VAR_6))
    continue;

   FUNC_1(VAR_6, VAR_9);
   if (!FUNC_8(VAR_9))
    FUNC_0(VAR_3, VAR_6, VAR_4);
  }

  FUNC_7(VAR_3, VAR_8, VAR_6);
 }
 return 0;
}
