
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {scalar_t__ lu; int udf; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 scalar_t__ FUNC_1 (struct mvpp2_prs_entry*,int const*,unsigned char*) ;
 unsigned int FUNC_2 (struct mvpp2_prs_entry*) ;

__attribute__((used)) static int
FUNC_3(struct mvpp2 *VAR_4, int VAR_5, const u8 *VAR_6,
       unsigned char *VAR_7, int VAR_8)
{
 struct mvpp2_prs_entry VAR_9;
 int VAR_10;


 for (VAR_10 = VAR_2;
      VAR_10 <= VAR_1; VAR_10++) {
  unsigned int VAR_11;

  if (!VAR_4->prs_shadow[VAR_10].valid ||
      (VAR_4->prs_shadow[VAR_10].lu != VAR_3) ||
      (VAR_4->prs_shadow[VAR_10].udf != VAR_8))
   continue;

  FUNC_0(VAR_4, &VAR_9, VAR_10);
  VAR_11 = FUNC_2(&VAR_9);

  if (FUNC_1(&VAR_9, VAR_6, VAR_7) &&
      VAR_11 == VAR_5)
   return VAR_10;
 }

 return -VAR_0;
}
