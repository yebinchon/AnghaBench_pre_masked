
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ring {int hop; TYPE_1__* nhi; int is_tx; } ;
struct TYPE_2__ {scalar_t__ hop_count; } ;



__attribute__((used)) static int FUNC_0(struct tb_ring *VAR_0)
{
 int VAR_1 = VAR_0->hop;
 if (!VAR_0->is_tx)
  VAR_1 += VAR_0->nhi->hop_count;
 return VAR_1;
}
