
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_seqid {TYPE_1__* sequence; } ;
struct TYPE_2__ {int counter; } ;


 int FUNC_0 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_1(struct xdr_stream *VAR_0,
  const struct nfs_seqid *VAR_1)
{
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_0, VAR_1->sequence->counter);
 else
  FUNC_0(VAR_0, 0);
}
