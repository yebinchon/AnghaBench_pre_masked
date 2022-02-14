
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bnxt {TYPE_1__* irq_tbl; TYPE_2__* dev; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {int handler; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int const,char*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_1)
{
 const int VAR_2 = sizeof(VAR_1->irq_tbl[0].name);

 if (FUNC_0(VAR_1->dev))
  FUNC_1(VAR_1->dev);

 FUNC_2(VAR_1->irq_tbl[0].name, VAR_2, "%s-%s-%d", VAR_1->dev->name, "TxRx",
   0);
 VAR_1->irq_tbl[0].handler = VAR_0;
}
