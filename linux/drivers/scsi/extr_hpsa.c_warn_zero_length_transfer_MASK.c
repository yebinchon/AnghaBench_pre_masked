
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char const*,int,int *) ;

__attribute__((used)) static inline void FUNC_1(struct ctlr_info *VAR_0,
      u8 *VAR_1, int VAR_2,
      const char *VAR_3)
{
 FUNC_0(&VAR_0->pdev->dev,
   "%s: Blocking zero-length request: CDB:%*phN\n",
   VAR_3, VAR_2, VAR_1);
}
