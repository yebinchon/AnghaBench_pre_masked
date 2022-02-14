
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {scalar_t__ lu; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_1 (struct mvpp2_prs_entry*) ;

__attribute__((used)) static int FUNC_2(struct mvpp2 *VAR_4, int VAR_5)
{
 struct mvpp2_prs_entry VAR_6;
 int VAR_7;


 for (VAR_7 = VAR_3 - 1; VAR_7 >= 0; VAR_7--) {
  u8 VAR_8;

  if (!VAR_4->prs_shadow[VAR_7].valid ||
      VAR_4->prs_shadow[VAR_7].lu != VAR_2)
   continue;

  FUNC_0(VAR_4, &VAR_6, VAR_7);
  VAR_8 = FUNC_1(&VAR_6);


  if ((VAR_8 & VAR_1) == VAR_5)
   return VAR_7;
 }

 return -VAR_0;
}
