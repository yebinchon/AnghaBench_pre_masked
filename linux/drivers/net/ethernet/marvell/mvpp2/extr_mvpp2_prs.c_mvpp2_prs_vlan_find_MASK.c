
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
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 unsigned int FUNC_1 (struct mvpp2_prs_entry*) ;
 unsigned int FUNC_2 (struct mvpp2_prs_entry*) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_4(struct mvpp2 *VAR_8, unsigned short VAR_9, int VAR_10)
{
 struct mvpp2_prs_entry VAR_11;
 int VAR_12;


 for (VAR_12 = VAR_1;
      VAR_12 <= VAR_2; VAR_12++) {
  unsigned int VAR_13, VAR_14;
  bool VAR_15;

  if (!VAR_8->prs_shadow[VAR_12].valid ||
      VAR_8->prs_shadow[VAR_12].lu != VAR_4)
   continue;

  FUNC_0(VAR_8, &VAR_11, VAR_12);
  VAR_15 = FUNC_3(&VAR_11, 0, VAR_9);
  if (!VAR_15)
   continue;


  VAR_13 = FUNC_1(&VAR_11);
  VAR_13 &= VAR_5;


  VAR_14 = FUNC_2(&VAR_11);

  VAR_14 &= ~VAR_3;

  if (VAR_10 != VAR_14)
   continue;

  if (VAR_13 == VAR_6 ||
      VAR_13 == VAR_7)
   return VAR_12;
 }

 return -VAR_0;
}
