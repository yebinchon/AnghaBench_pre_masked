
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esp {int command_block; int command_block_dma; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct esp *VAR_2)
{
 VAR_2->command_block = FUNC_0(VAR_2->dev, 16,
      &VAR_2->command_block_dma,
      VAR_1);
 if (!VAR_2->command_block)
  return -VAR_0;
 return 0;
}
