
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_prs_entry {int dummy; } ;
struct mvpp2_port {TYPE_2__* dev; int id; struct mvpp2* priv; } ;
struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_4__ {int dev_addr; } ;
struct TYPE_3__ {scalar_t__ lu; scalar_t__ udf; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (unsigned char*,int ) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 (struct mvpp2*,struct mvpp2_prs_entry*,int) ;
 int FUNC_3 (struct mvpp2_port*,unsigned char*,int) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int,unsigned char*,unsigned char*) ;
 unsigned long FUNC_5 (struct mvpp2_prs_entry*) ;
 int FUNC_6 (int ,unsigned long*) ;

void FUNC_7(struct mvpp2_port *VAR_5)
{
 struct mvpp2 *VAR_6 = VAR_5->priv;
 struct mvpp2_prs_entry VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = VAR_2;
      VAR_10 <= VAR_1; VAR_10++) {
  unsigned char VAR_11[VAR_0], VAR_12[VAR_0];

  if (!VAR_6->prs_shadow[VAR_10].valid ||
      (VAR_6->prs_shadow[VAR_10].lu != VAR_3) ||
      (VAR_6->prs_shadow[VAR_10].udf != VAR_4))
   continue;

  FUNC_2(VAR_6, &VAR_7, VAR_10);

  VAR_8 = FUNC_5(&VAR_7);


  if (!FUNC_6(VAR_5->id, &VAR_8))
   continue;


  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   FUNC_4(&VAR_7, VAR_9, &VAR_11[VAR_9],
           &VAR_12[VAR_9]);




  if (FUNC_1(VAR_11) ||
      FUNC_0(VAR_11, VAR_5->dev->dev_addr))
   continue;


  FUNC_3(VAR_5, VAR_11, 0);
 }
}
