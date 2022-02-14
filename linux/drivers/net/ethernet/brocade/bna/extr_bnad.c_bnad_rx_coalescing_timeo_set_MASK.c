
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_rx_info {int rx; } ;
struct bnad {int num_rx; int rx_coalescing_timeo; struct bnad_rx_info* rx_info; } ;


 int FUNC_0 (int ,int ) ;

void
FUNC_1(struct bnad *VAR_0)
{
 struct bnad_rx_info *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx; VAR_2++) {
  VAR_1 = &VAR_0->rx_info[VAR_2];
  if (!VAR_1->rx)
   continue;
  FUNC_0(VAR_1->rx,
    VAR_0->rx_coalescing_timeo);
 }
}
