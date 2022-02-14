
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct peak_canfd_priv {scalar_t__ cmd_buffer; } ;
struct pciefd_can {TYPE_1__* board; } ;
struct TYPE_2__ {int cmd_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pciefd_can*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct peak_canfd_priv *VAR_2)
{
 struct pciefd_can *VAR_3 = (struct pciefd_can *)VAR_2;
 unsigned long VAR_4;


 FUNC_1(&VAR_3->board->cmd_lock, VAR_4);

 FUNC_0(VAR_3, *(u32 *)VAR_2->cmd_buffer,
       VAR_1);
 FUNC_0(VAR_3, *(u32 *)(VAR_2->cmd_buffer + 4),
       VAR_0);

 FUNC_2(&VAR_3->board->cmd_lock, VAR_4);

 return 0;
}
