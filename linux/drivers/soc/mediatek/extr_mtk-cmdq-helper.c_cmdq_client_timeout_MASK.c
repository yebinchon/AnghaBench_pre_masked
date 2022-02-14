
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cmdq_client {TYPE_1__ client; } ;


 struct cmdq_client* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct cmdq_client* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct cmdq_client *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);

 FUNC_0(VAR_3->client.dev, "cmdq timeout!\n");
}
