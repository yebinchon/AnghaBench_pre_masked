
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ln_sbd; int ln_number; int ln_type; } ;
struct gfs2_glock {TYPE_1__ gl_name; } ;
struct buffer_head {TYPE_2__* b_page; int b_state; scalar_t__ b_blocknr; } ;
struct TYPE_4__ {int flags; int mapping; } ;


 int FUNC_0 (int ,char*,struct buffer_head const*,unsigned long long,int ,...) ;
 int FUNC_1 (struct gfs2_glock*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct gfs2_glock *VAR_0, const struct buffer_head *VAR_1)
{
 FUNC_0(VAR_0->gl_name.ln_sbd,
        "AIL buffer %p: blocknr %llu state 0x%08lx mapping %p page "
        "state 0x%lx\n",
        VAR_1, (unsigned long long)VAR_1->b_blocknr, VAR_1->b_state,
        VAR_1->b_page->mapping, VAR_1->b_page->flags);
 FUNC_0(VAR_0->gl_name.ln_sbd, "AIL glock %u:%llu mapping %p\n",
        VAR_0->gl_name.ln_type, VAR_0->gl_name.ln_number,
        FUNC_1(VAR_0));
 FUNC_2(VAR_0->gl_name.ln_sbd, "AIL error\n");
}
