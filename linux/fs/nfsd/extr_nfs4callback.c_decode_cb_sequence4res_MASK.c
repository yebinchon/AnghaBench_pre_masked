
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfsd4_callback {scalar_t__ cb_seq_status; TYPE_1__* cb_clp; } ;
struct TYPE_2__ {scalar_t__ cl_minorversion; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ,scalar_t__*) ;
 int FUNC_1 (struct xdr_stream*,struct nfsd4_callback*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1,
      struct nfsd4_callback *VAR_2)
{
 int VAR_3;

 if (VAR_2->cb_clp->cl_minorversion == 0)
  return 0;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_2->cb_seq_status);
 if (FUNC_2(VAR_3 || VAR_2->cb_seq_status))
  return VAR_3;

 return FUNC_1(VAR_1, VAR_2);
}
