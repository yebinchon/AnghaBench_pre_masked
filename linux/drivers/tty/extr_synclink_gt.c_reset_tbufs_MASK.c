
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slgt_info {unsigned int tbuf_count; TYPE_1__* tbufs; scalar_t__ tbuf_current; } ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ status; } ;



__attribute__((used)) static void FUNC_0(struct slgt_info *VAR_0)
{
 unsigned int VAR_1;
 VAR_0->tbuf_current = 0;
 for (VAR_1=0 ; VAR_1 < VAR_0->tbuf_count ; VAR_1++) {
  VAR_0->tbufs[VAR_1].status = 0;
  VAR_0->tbufs[VAR_1].count = 0;
 }
}
