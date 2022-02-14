
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ reflect_promisc; } ;
struct TYPE_8__ {TYPE_3__ sbp; } ;
struct TYPE_6__ {int promisc_mode; } ;
struct qeth_card {TYPE_4__ options; TYPE_2__ info; TYPE_1__* dev; } ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qeth_card*,int ) ;
 int FUNC_1 (struct qeth_card*,int) ;
 int FUNC_2 (struct qeth_card*,int) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_2)
{
 bool VAR_3 = VAR_2->dev->flags & VAR_0;

 if (VAR_2->info.promisc_mode == VAR_3)
  return;

 if (FUNC_0(VAR_2, VAR_1))
  FUNC_2(VAR_2, VAR_3);
 else if (VAR_2->options.sbp.reflect_promisc)
  FUNC_1(VAR_2, VAR_3);
}
