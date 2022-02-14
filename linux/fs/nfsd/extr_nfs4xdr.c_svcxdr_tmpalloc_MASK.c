
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct svcxdr_tmpbuf {void* buf; struct svcxdr_tmpbuf* next; } ;
struct nfsd4_compoundargs {struct svcxdr_tmpbuf* to_free; } ;


 int VAR_0 ;
 struct svcxdr_tmpbuf* FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void *
FUNC_1(struct nfsd4_compoundargs *VAR_1, u32 VAR_2)
{
 struct svcxdr_tmpbuf *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3) + VAR_2, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->next = VAR_1->to_free;
 VAR_1->to_free = VAR_3;
 return VAR_3->buf;
}
