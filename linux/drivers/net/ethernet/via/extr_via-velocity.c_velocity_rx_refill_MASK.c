
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int dirty; int curr; int filled; TYPE_2__* info; struct rx_desc* ring; } ;
struct TYPE_7__ {int numrx; } ;
struct velocity_info {TYPE_4__ rx; TYPE_3__ options; } ;
struct TYPE_5__ {int len; } ;
struct rx_desc {TYPE_1__ rdesc0; } ;
struct TYPE_6__ {int skb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct velocity_info*,int) ;

__attribute__((used)) static int FUNC_1(struct velocity_info *VAR_1)
{
 int VAR_2 = VAR_1->rx.dirty, VAR_3 = 0;

 do {
  struct rx_desc *VAR_4 = VAR_1->rx.ring + VAR_2;


  if (VAR_4->rdesc0.len & VAR_0)
   break;

  if (!VAR_1->rx.info[VAR_2].skb) {
   if (FUNC_0(VAR_1, VAR_2) < 0)
    break;
  }
  VAR_3++;
  VAR_2 = (VAR_2 < VAR_1->options.numrx - 1) ? VAR_2 + 1 : 0;
 } while (VAR_2 != VAR_1->rx.curr);

 if (VAR_3) {
  VAR_1->rx.dirty = VAR_2;
  VAR_1->rx.filled += VAR_3;
 }

 return VAR_3;
}
