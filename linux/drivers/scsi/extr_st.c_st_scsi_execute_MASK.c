
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_request {int bio; struct scsi_tape* stp; } ;
struct scsi_tape {TYPE_3__* stats; TYPE_2__* device; TYPE_1__* buffer; } ;
struct scsi_request {int retries; int cmd_len; int cmd; } ;
struct rq_map_data {int null_mapped; } ;
struct request {int timeout; int q; struct st_request* end_io_data; int bio; int rq_flags; } ;
struct TYPE_6__ {void* other_time; void* read_time; int last_read_size; void* write_time; int last_write_size; int in_flight; } ;
struct TYPE_5__ {int request_queue; } ;
struct TYPE_4__ {struct rq_map_data map_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct request*) ;
 unsigned char const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char const VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (int ,struct request*,struct rq_map_data*,int *,unsigned int,int ) ;
 void* FUNC_8 () ;
 int FUNC_9 (int ,unsigned char const*,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 struct scsi_request* FUNC_11 (struct request*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct st_request *VAR_10, const unsigned char *VAR_11,
      int VAR_12, void *VAR_13, unsigned VAR_14,
      int VAR_15, int VAR_16)
{
 struct request *VAR_17;
 struct scsi_request *VAR_18;
 struct rq_map_data *VAR_19 = &VAR_10->stp->buffer->map_data;
 int VAR_20 = 0;
 struct scsi_tape *VAR_21 = VAR_10->stp;

 VAR_17 = FUNC_5(VAR_10->stp->device->request_queue,
   VAR_12 == VAR_1 ?
   VAR_6 : VAR_5, 0);
 if (FUNC_1(VAR_17))
  return VAR_2 << 24;
 VAR_18 = FUNC_11(VAR_17);
 VAR_17->rq_flags |= VAR_7;

 VAR_19->null_mapped = 1;

 if (VAR_14) {
  VAR_20 = FUNC_7(VAR_17->q, VAR_17, VAR_19, ((void*)0), VAR_14,
          VAR_3);
  if (VAR_20) {
   FUNC_6(VAR_17);
   return VAR_2 << 24;
  }
 }

 FUNC_2(&VAR_21->stats->in_flight);
 if (VAR_11[0] == VAR_8) {
  FUNC_3(&VAR_21->stats->last_write_size, VAR_14);
  VAR_21->stats->write_time = FUNC_8();
 } else if (VAR_11[0] == VAR_4) {
  FUNC_3(&VAR_21->stats->last_read_size, VAR_14);
  VAR_21->stats->read_time = FUNC_8();
 } else {
  VAR_21->stats->other_time = FUNC_8();
 }

 VAR_10->bio = VAR_17->bio;
 VAR_18->cmd_len = FUNC_0(VAR_11[0]);
 FUNC_10(VAR_18->cmd, 0, VAR_0);
 FUNC_9(VAR_18->cmd, VAR_11, VAR_18->cmd_len);
 VAR_17->timeout = VAR_15;
 VAR_18->retries = VAR_16;
 VAR_17->end_io_data = VAR_10;

 FUNC_4(VAR_17->q, ((void*)0), VAR_17, 1, VAR_9);
 return 0;
}
