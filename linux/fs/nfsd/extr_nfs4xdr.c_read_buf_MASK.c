
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct nfsd4_compoundargs {char* end; char* p; scalar_t__ pagelen; int tail; char* tmp; char* tmpp; TYPE_2__* rqstp; } ;
struct kvec {unsigned int iov_len; char* iov_base; } ;
typedef char __be32 ;
struct TYPE_3__ {struct kvec* tail; } ;
struct TYPE_4__ {TYPE_1__ rq_arg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (struct nfsd4_compoundargs*) ;

__attribute__((used)) static __be32 *FUNC_5(struct nfsd4_compoundargs *VAR_2, u32 VAR_3)
{



 unsigned int VAR_4 = (char *)VAR_2->end - (char *)VAR_2->p;
 __be32 *VAR_5;

 if (VAR_2->pagelen == 0) {
  struct kvec *VAR_6 = &VAR_2->rqstp->rq_arg.tail[0];

  if (!VAR_2->tail) {
   VAR_2->tail = 1;
   VAR_4 = VAR_6->iov_len;
   VAR_2->p = VAR_6->iov_base;
   VAR_2->end = VAR_6->iov_base + VAR_4;
  }

  if (VAR_4 < VAR_3)
   return ((void*)0);

  VAR_5 = VAR_2->p;
  VAR_2->p += FUNC_0(VAR_3);
  return VAR_5;
 }

 if (VAR_4 + VAR_2->pagelen < VAR_3)
  return ((void*)0);
 if (VAR_4 + VAR_1 < VAR_3)
  return ((void*)0);

 if (VAR_3 <= sizeof(VAR_2->tmp))
  VAR_5 = VAR_2->tmp;
 else {
  FUNC_1(VAR_2->tmpp);
  VAR_5 = VAR_2->tmpp = FUNC_2(VAR_3, VAR_0);
  if (!VAR_5)
   return ((void*)0);

 }





 FUNC_3(VAR_5, VAR_2->p, VAR_4);
 FUNC_4(VAR_2);
 FUNC_3(((char*)VAR_5)+VAR_4, VAR_2->p, (VAR_3 - VAR_4));
 VAR_2->p += FUNC_0(VAR_3 - VAR_4);
 return VAR_5;
}
