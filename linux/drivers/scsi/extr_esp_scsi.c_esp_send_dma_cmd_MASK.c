
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct esp {int flags; scalar_t__ rev; int command_block_dma; TYPE_1__* ops; int * command_block; } ;
struct TYPE_2__ {int (* send_dma_cmd ) (struct esp*,int ,int,int,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct esp*,int) ;
 int FUNC_2 (struct esp*,int ,int,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct esp *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_5->flags & VAR_3) {
  int VAR_9;

  FUNC_1(VAR_5, VAR_1);
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   FUNC_0(VAR_5->command_block[VAR_9], VAR_2);
  FUNC_1(VAR_5, VAR_8);
 } else {
  if (VAR_5->rev == VAR_4)
   FUNC_1(VAR_5, VAR_1);
  VAR_8 |= VAR_0;
  VAR_5->ops->send_dma_cmd(VAR_5, VAR_5->command_block_dma,
           VAR_6, VAR_7, 0, VAR_8);
 }
}
