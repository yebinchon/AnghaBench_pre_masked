
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_sense_hdr {int dummy; } ;
struct scsi_request {unsigned char* cmd; int retries; unsigned int resid_len; unsigned char const* sense; int result; scalar_t__ sense_len; int cmd_len; } ;
struct scsi_device {int request_queue; } ;
struct request {int timeout; int rq_flags; int q; int cmd_flags; } ;
typedef int req_flags_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct request*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *,struct request*,int) ;
 struct request* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int ,struct request*,void*,unsigned int,int ) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int ) ;
 int FUNC_7 (void*,int ,unsigned int) ;
 int FUNC_8 (unsigned char const*,scalar_t__,struct scsi_sense_hdr*) ;
 struct scsi_request* FUNC_9 (struct request*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct scsi_device *VAR_8, const unsigned char *VAR_9,
   int VAR_10, void *VAR_11, unsigned VAR_12,
   unsigned char *VAR_13, struct scsi_sense_hdr *VAR_14,
   int VAR_15, int VAR_16, u64 VAR_17, req_flags_t VAR_18,
   int *VAR_19)
{
 struct request *VAR_20;
 struct scsi_request *VAR_21;
 int VAR_22 = VAR_2 << 24;

 VAR_20 = FUNC_3(VAR_8->request_queue,
   VAR_10 == VAR_1 ?
   VAR_5 : VAR_4, VAR_0);
 if (FUNC_1(VAR_20))
  return VAR_22;
 VAR_21 = FUNC_9(VAR_20);

 if (VAR_12 && FUNC_5(VAR_8->request_queue, VAR_20,
     VAR_11, VAR_12, VAR_3))
  goto out;

 VAR_21->cmd_len = FUNC_0(VAR_9[0]);
 FUNC_6(VAR_21->cmd, VAR_9, VAR_21->cmd_len);
 VAR_21->retries = VAR_16;
 VAR_20->timeout = VAR_15;
 VAR_20->cmd_flags |= VAR_17;
 VAR_20->rq_flags |= VAR_18 | VAR_6;




 FUNC_2(VAR_20->q, ((void*)0), VAR_20, 1);







 if (FUNC_10(VAR_21->resid_len > 0 && VAR_21->resid_len <= VAR_12))
  FUNC_7(VAR_11 + (VAR_12 - VAR_21->resid_len), 0, VAR_21->resid_len);

 if (VAR_19)
  *VAR_19 = VAR_21->resid_len;
 if (VAR_13 && VAR_21->sense_len)
  FUNC_6(VAR_13, VAR_21->sense, VAR_7);
 if (VAR_14)
  FUNC_8(VAR_21->sense, VAR_21->sense_len, VAR_14);
 VAR_22 = VAR_21->result;
 out:
 FUNC_4(VAR_20);

 return VAR_22;
}
