
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs3_accessargs {int access; int fh; } ;


 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_0,
          const struct nfs3_accessargs *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->fh);
 FUNC_1(VAR_0, VAR_1->access);
}
