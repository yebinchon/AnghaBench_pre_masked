
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int tag; unsigned char* host_scribble; TYPE_1__* request; } ;
struct request_queue {int dummy; } ;
struct request {int tag; } ;
struct fnic {int dummy; } ;
struct TYPE_2__ {int tag; struct request_queue* q; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct request* FUNC_1 (struct request_queue*,int ,int ) ;

__attribute__((used)) static inline int
FUNC_2(struct fnic *VAR_3, struct scsi_cmnd *VAR_4)
{
 struct request_queue *VAR_5 = VAR_4->request->q;
 struct request *VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_0);
 if (FUNC_0(VAR_6))
  return VAR_2;

 VAR_4->tag = VAR_4->request->tag = VAR_6->tag;
 VAR_4->host_scribble = (unsigned char *)VAR_6;

 return VAR_6->tag;
}
