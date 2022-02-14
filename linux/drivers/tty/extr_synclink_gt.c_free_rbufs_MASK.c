
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slgt_info {unsigned int rbuf_count; unsigned int rbuf_current; int rbuf_fill_level; TYPE_1__* rbufs; } ;
struct TYPE_2__ {scalar_t__ status; } ;


 int FUNC_0 (TYPE_1__,int ) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 int VAR_3 = 0;

 while(!VAR_3) {

  VAR_0->rbufs[VAR_1].status = 0;
  FUNC_0(VAR_0->rbufs[VAR_1], VAR_0->rbuf_fill_level);
  if (VAR_1 == VAR_2)
   VAR_3 = 1;
  if (++VAR_1 == VAR_0->rbuf_count)
   VAR_1 = 0;
 }
 VAR_0->rbuf_current = VAR_1;
}
