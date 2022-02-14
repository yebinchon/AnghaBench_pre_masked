
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct mbox_out {int dummy; } ;
typedef int raw_mbox ;
struct TYPE_10__ {int m_out; } ;
typedef TYPE_3__ mbox_t ;
struct TYPE_11__ {TYPE_2__* dev; int pend_cmds; TYPE_1__* host; } ;
typedef TYPE_4__ adapter_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_6(adapter_t *VAR_2)
{
 u_char VAR_3[sizeof(struct mbox_out)];
 mbox_t *VAR_4 = (mbox_t *)VAR_3;
 int VAR_5;


 FUNC_5(&VAR_4->m_out, 0, sizeof(VAR_3));
 VAR_3[0] = VAR_0;

 FUNC_2(VAR_2->host->irq, VAR_2);


 FUNC_3(VAR_2, VAR_3);


 FUNC_5(&VAR_4->m_out, 0, sizeof(VAR_3));
 VAR_3[0] = VAR_1;


 FUNC_3(VAR_2, VAR_3);

 if (FUNC_0(&VAR_2->pend_cmds) > 0)
  FUNC_1(&VAR_2->dev->dev, "pending commands!!\n");





 for (VAR_5 = 0; VAR_5 <= 10; VAR_5++)
  FUNC_4(1000);
}
