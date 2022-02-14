
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfsic_state {int dummy; } ;
struct btrfsic_block_link {TYPE_2__* block_ref_to; TYPE_2__* block_ref_from; int ref_cnt; } ;
struct TYPE_4__ {int mirror_num; int dev_bytenr; TYPE_1__* dev_state; int logical_bytenr; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (struct btrfsic_state const*,TYPE_2__*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct btrfsic_state *VAR_0,
       const struct btrfsic_block_link *VAR_1)
{
 FUNC_1("Rem %u* link from %c @%llu (%s/%llu/%d) to %c @%llu (%s/%llu/%d).\n",
        VAR_1->ref_cnt,
        FUNC_0(VAR_0, VAR_1->block_ref_from),
        VAR_1->block_ref_from->logical_bytenr,
        VAR_1->block_ref_from->dev_state->name,
        VAR_1->block_ref_from->dev_bytenr, VAR_1->block_ref_from->mirror_num,
        FUNC_0(VAR_0, VAR_1->block_ref_to),
        VAR_1->block_ref_to->logical_bytenr,
        VAR_1->block_ref_to->dev_state->name, VAR_1->block_ref_to->dev_bytenr,
        VAR_1->block_ref_to->mirror_num);
}
