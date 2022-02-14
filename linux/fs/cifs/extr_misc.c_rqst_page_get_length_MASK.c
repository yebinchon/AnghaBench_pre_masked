
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {unsigned int rq_pagesz; unsigned int rq_offset; int rq_npages; unsigned int rq_tailsz; } ;



void FUNC_0(struct smb_rqst *VAR_0, unsigned int VAR_1,
    unsigned int *VAR_2, unsigned int *VAR_3)
{
 *VAR_2 = VAR_0->rq_pagesz;
 *VAR_3 = (VAR_1 == 0) ? VAR_0->rq_offset : 0;

 if (VAR_0->rq_npages == 1 || VAR_1 == VAR_0->rq_npages-1)
  *VAR_2 = VAR_0->rq_tailsz;
 else if (VAR_1 == 0)
  *VAR_2 = VAR_0->rq_pagesz - VAR_0->rq_offset;
}
