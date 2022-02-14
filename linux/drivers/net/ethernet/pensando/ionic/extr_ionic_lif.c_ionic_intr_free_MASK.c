
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_lif {TYPE_1__* ionic; } ;
struct TYPE_2__ {int nintrs; int intrs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ionic_lif *VAR_1, int VAR_2)
{
 if (VAR_2 != VAR_0 && VAR_2 < VAR_1->ionic->nintrs)
  FUNC_0(VAR_2, VAR_1->ionic->intrs);
}
