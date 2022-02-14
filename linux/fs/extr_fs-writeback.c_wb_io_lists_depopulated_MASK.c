
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bdi_writeback {TYPE_1__* bdi; int avg_write_bandwidth; int state; int b_more_io; int b_io; int b_dirty; } ;
struct TYPE_2__ {int tot_write_bandwidth; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct bdi_writeback*) ;

__attribute__((used)) static void FUNC_5(struct bdi_writeback *VAR_1)
{
 if (FUNC_4(VAR_1) && FUNC_3(&VAR_1->b_dirty) &&
     FUNC_3(&VAR_1->b_io) && FUNC_3(&VAR_1->b_more_io)) {
  FUNC_2(VAR_0, &VAR_1->state);
  FUNC_0(FUNC_1(VAR_1->avg_write_bandwidth,
     &VAR_1->bdi->tot_write_bandwidth) < 0);
 }
}
