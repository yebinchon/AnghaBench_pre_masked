
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct compound_hdr {char* tag; int nops; void* status; void* taglen; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_1, struct compound_hdr *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_4(VAR_1, 8);
 if (FUNC_3(!VAR_3))
  return -VAR_0;
 VAR_2->status = FUNC_1(VAR_3++);
 VAR_2->taglen = FUNC_1(VAR_3);

 VAR_3 = FUNC_4(VAR_1, VAR_2->taglen + 4);
 if (FUNC_3(!VAR_3))
  return -VAR_0;
 VAR_2->tag = (char *)VAR_3;
 VAR_3 += FUNC_0(VAR_2->taglen);
 VAR_2->nops = FUNC_1(VAR_3);
 if (FUNC_3(VAR_2->nops < 1))
  return FUNC_2(VAR_2->status);
 return 0;
}
