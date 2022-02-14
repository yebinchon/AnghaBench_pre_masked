
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_ale {TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpsw_ale*,int,int *) ;

void FUNC_1(struct cpsw_ale *VAR_1, u32 *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->params.ale_entries; VAR_3++) {
  FUNC_0(VAR_1, VAR_3, VAR_2);
  VAR_2 += VAR_0;
 }
}
