
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; int rq_npages; int rq_pagesz; int rq_offset; scalar_t__ rq_tailsz; struct kvec* rq_iov; } ;
struct kvec {int iov_len; } ;
struct TCP_Server_Info {TYPE_1__* vals; } ;
struct TYPE_2__ {scalar_t__ header_preamble_size; } ;



unsigned long
FUNC_0(struct TCP_Server_Info *VAR_0, struct smb_rqst *VAR_1)
{
 unsigned int VAR_2;
 struct kvec *VAR_3;
 int VAR_4;
 unsigned long VAR_5 = 0;

 if (VAR_0->vals->header_preamble_size == 0 &&
     VAR_1->rq_nvec >= 2 && VAR_1->rq_iov[0].iov_len == 4) {
  VAR_3 = &VAR_1->rq_iov[1];
  VAR_4 = VAR_1->rq_nvec - 1;
 } else {
  VAR_3 = VAR_1->rq_iov;
  VAR_4 = VAR_1->rq_nvec;
 }


 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
  VAR_5 += VAR_3[VAR_2].iov_len;







 if (VAR_1->rq_npages) {
  if (VAR_1->rq_npages == 1)
   VAR_5 += VAR_1->rq_tailsz;
  else {




   VAR_5 += VAR_1->rq_pagesz * (VAR_1->rq_npages - 1) -
     VAR_1->rq_offset;
   VAR_5 += VAR_1->rq_tailsz;
  }
 }

 return VAR_5;
}
