
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct cpsw_ale*,int,int *) ;
 scalar_t__ FUNC_4 (int *,int const*) ;

__attribute__((used)) static int FUNC_5(struct cpsw_ale *VAR_4, const u8 *VAR_5, u16 VAR_6)
{
 u32 VAR_7[VAR_0];
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4->params.ale_entries; VAR_9++) {
  u8 VAR_10[6];

  FUNC_3(VAR_4, VAR_9, VAR_7);
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 != VAR_1 && VAR_8 != VAR_2)
   continue;
  if (FUNC_2(VAR_7) != VAR_6)
   continue;
  FUNC_0(VAR_7, VAR_10);
  if (FUNC_4(VAR_10, VAR_5))
   return VAR_9;
 }
 return -VAR_3;
}
