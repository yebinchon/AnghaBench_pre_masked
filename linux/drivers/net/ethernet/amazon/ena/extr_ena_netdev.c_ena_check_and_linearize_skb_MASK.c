
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int linearize_failed; int linearize; } ;
struct ena_ring {int sgl_size; int tx_max_header_size; int syncp; TYPE_1__ tx_stats; } ;
struct TYPE_4__ {int nr_frags; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ena_ring *VAR_0,
           struct sk_buff *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_2(VAR_1)->nr_frags;
 VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_0->sgl_size)
  return 0;

 if ((VAR_2 == VAR_0->sgl_size) &&
     (VAR_3 < VAR_0->tx_max_header_size))
  return 0;

 FUNC_3(&VAR_0->syncp);
 VAR_0->tx_stats.linearize++;
 FUNC_4(&VAR_0->syncp);

 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_5(VAR_4)) {
  FUNC_3(&VAR_0->syncp);
  VAR_0->tx_stats.linearize_failed++;
  FUNC_4(&VAR_0->syncp);
 }

 return VAR_4;
}
