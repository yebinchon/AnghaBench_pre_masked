
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mem_block_size; } ;
struct ar9170 {int mem_free_blocks; TYPE_1__ fw; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ar9170 *VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1->fw.mem_block_size) >
  FUNC_1(&VAR_1->mem_free_blocks));
}
