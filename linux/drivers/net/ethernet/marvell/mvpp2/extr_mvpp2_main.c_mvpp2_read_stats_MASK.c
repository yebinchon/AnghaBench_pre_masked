
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct mvpp2_port {int id; int ntxqs; int nrxqs; scalar_t__ first_rxq; int priv; int * ethtool_stats; } ;
struct TYPE_7__ {scalar_t__ offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mvpp2_port*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mvpp2_port *VAR_4)
{
 u64 *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = VAR_4->ethtool_stats;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
  *VAR_5++ += FUNC_3(VAR_4, &VAR_0[VAR_6]);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  *VAR_5++ += FUNC_2(VAR_4->priv,
     VAR_1[VAR_6].offset +
     4 * VAR_4->id);

 for (VAR_7 = 0; VAR_7 < VAR_4->ntxqs; VAR_7++)
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++)
   *VAR_5++ += FUNC_4(VAR_4->priv,
            FUNC_1(VAR_4->id, VAR_6),
            VAR_3[VAR_6].offset);




 for (VAR_7 = 0; VAR_7 < VAR_4->nrxqs; VAR_7++)
  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
   *VAR_5++ += FUNC_4(VAR_4->priv,
            VAR_4->first_rxq + VAR_6,
            VAR_2[VAR_6].offset);
}
