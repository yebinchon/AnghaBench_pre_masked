
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nsm_args {int proc; int vers; int prog; int nodename; } ;
typedef void* __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 void** FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0, const struct nsm_args *VAR_1)
{
 __be32 *VAR_2;

 FUNC_1(VAR_0, VAR_1->nodename);
 VAR_2 = FUNC_2(VAR_0, 4 + 4 + 4);
 *VAR_2++ = FUNC_0(VAR_1->prog);
 *VAR_2++ = FUNC_0(VAR_1->vers);
 *VAR_2 = FUNC_0(VAR_1->proc);
}
