
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {scalar_t__ lu; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 unsigned int FUNC_1 (struct mvpp2_prs_entry*) ;
 scalar_t__ FUNC_2 (struct mvpp2_prs_entry*,int,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct mvpp2 *VAR_6, unsigned short VAR_7,
          unsigned short VAR_8)
{
 struct mvpp2_prs_entry VAR_9;
 int VAR_10;


 for (VAR_10 = VAR_1;
      VAR_10 <= VAR_2; VAR_10++) {
  unsigned int VAR_11;
  bool VAR_12;

  if (!VAR_6->prs_shadow[VAR_10].valid ||
      VAR_6->prs_shadow[VAR_10].lu != VAR_3)
   continue;

  FUNC_0(VAR_6, &VAR_9, VAR_10);

  VAR_12 = FUNC_2(&VAR_9, 0, VAR_7) &&
   FUNC_2(&VAR_9, 4, VAR_8);

  if (!VAR_12)
   continue;

  VAR_11 = FUNC_1(&VAR_9) & VAR_5;
  if (VAR_11 == VAR_4)
   return VAR_10;
 }

 return -VAR_0;
}
