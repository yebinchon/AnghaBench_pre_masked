
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svcxdr_tmpbuf {struct svcxdr_tmpbuf* next; } ;
struct svc_rqst {struct nfsd4_compoundargs* rq_argp; } ;
struct nfsd4_compoundargs {scalar_t__ ops; scalar_t__ iops; struct svcxdr_tmpbuf* to_free; struct svcxdr_tmpbuf* tmpp; } ;


 int FUNC_0 (struct svcxdr_tmpbuf*) ;

void FUNC_1(struct svc_rqst *VAR_0)
{
 struct nfsd4_compoundargs *VAR_1 = VAR_0->rq_argp;

 if (VAR_1->ops != VAR_1->iops) {
  FUNC_0(VAR_1->ops);
  VAR_1->ops = VAR_1->iops;
 }
 FUNC_0(VAR_1->tmpp);
 VAR_1->tmpp = ((void*)0);
 while (VAR_1->to_free) {
  struct svcxdr_tmpbuf *VAR_2 = VAR_1->to_free;
  VAR_1->to_free = VAR_2->next;
  FUNC_0(VAR_2);
 }
}
