
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jbd2_buffer_trigger_type {int dummy; } ;
struct buffer_head {TYPE_1__* b_bdev; scalar_t__ b_blocknr; } ;
struct TYPE_2__ {int bd_super; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long long) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct jbd2_buffer_trigger_type *VAR_1,
    struct buffer_head *VAR_2)
{
 FUNC_0(VAR_0,
      "ocfs2_abort_trigger called by JBD2.  bh = 0x%lx, "
      "bh->b_blocknr = %llu\n",
      (unsigned long)VAR_2,
      (unsigned long long)VAR_2->b_blocknr);

 FUNC_1(VAR_2->b_bdev->bd_super,
      "JBD2 has aborted our journal, ocfs2 cannot continue\n");
}
