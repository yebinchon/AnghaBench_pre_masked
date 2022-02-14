
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dsize_log2; int ring_size; scalar_t__ cur; } ;
struct fec_enet_priv_tx_q {TYPE_1__ bd; scalar_t__ dirty_tx; } ;



__attribute__((used)) static int FUNC_0(struct fec_enet_priv_tx_q *VAR_0)
{
 int VAR_1;

 VAR_1 = (((const char *)VAR_0->dirty_tx -
   (const char *)VAR_0->bd.cur) >> VAR_0->bd.dsize_log2) - 1;

 return VAR_1 >= 0 ? VAR_1 : VAR_1 + VAR_0->bd.ring_size;
}
