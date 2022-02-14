
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_tape {TYPE_3__* stats; TYPE_2__* buffer; } ;
struct request {int dummy; } ;
typedef int ktime_t ;
struct TYPE_8__ {scalar_t__* cmd; scalar_t__ result; } ;
struct TYPE_7__ {int in_flight; int other_cnt; int tot_io_time; int other_time; int read_byte_cnt; int last_read_size; int resid_cnt; int read_cnt; int tot_read_time; int read_time; int write_byte_cnt; int last_write_size; int write_cnt; int tot_write_time; int write_time; } ;
struct TYPE_5__ {scalar_t__ residual; } ;
struct TYPE_6__ {TYPE_1__ cmdstat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_4__* FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct scsi_tape *VAR_2, struct request *VAR_3)
{
 ktime_t VAR_4;

 VAR_4 = FUNC_4();
 if (FUNC_7(VAR_3)->cmd[0] == VAR_1) {
  VAR_4 = FUNC_5(VAR_4, VAR_2->stats->write_time);
  FUNC_0(FUNC_6(VAR_4), &VAR_2->stats->tot_write_time);
  FUNC_0(FUNC_6(VAR_4), &VAR_2->stats->tot_io_time);
  FUNC_2(&VAR_2->stats->write_cnt);
  if (FUNC_7(VAR_3)->result) {
   FUNC_0(FUNC_3(&VAR_2->stats->last_write_size)
    - VAR_2->buffer->cmdstat.residual,
    &VAR_2->stats->write_byte_cnt);
   if (VAR_2->buffer->cmdstat.residual > 0)
    FUNC_2(&VAR_2->stats->resid_cnt);
  } else
   FUNC_0(FUNC_3(&VAR_2->stats->last_write_size),
    &VAR_2->stats->write_byte_cnt);
 } else if (FUNC_7(VAR_3)->cmd[0] == VAR_0) {
  VAR_4 = FUNC_5(VAR_4, VAR_2->stats->read_time);
  FUNC_0(FUNC_6(VAR_4), &VAR_2->stats->tot_read_time);
  FUNC_0(FUNC_6(VAR_4), &VAR_2->stats->tot_io_time);
  FUNC_2(&VAR_2->stats->read_cnt);
  if (FUNC_7(VAR_3)->result) {
   FUNC_0(FUNC_3(&VAR_2->stats->last_read_size)
    - VAR_2->buffer->cmdstat.residual,
    &VAR_2->stats->read_byte_cnt);
   if (VAR_2->buffer->cmdstat.residual > 0)
    FUNC_2(&VAR_2->stats->resid_cnt);
  } else
   FUNC_0(FUNC_3(&VAR_2->stats->last_read_size),
    &VAR_2->stats->read_byte_cnt);
 } else {
  VAR_4 = FUNC_5(VAR_4, VAR_2->stats->other_time);
  FUNC_0(FUNC_6(VAR_4), &VAR_2->stats->tot_io_time);
  FUNC_2(&VAR_2->stats->other_cnt);
 }
 FUNC_1(&VAR_2->stats->in_flight);
}
