
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfs42_layoutstat_devinfo {TYPE_1__ ld_private; } ;
typedef int nfs4_stateid ;


 int FUNC_0 (struct xdr_stream*,int const*,struct nfs42_layoutstat_devinfo const*) ;
 int FUNC_1 (struct xdr_stream*,struct nfs42_layoutstat_devinfo const*,int ) ;

__attribute__((used)) static void
FUNC_2(struct xdr_stream *VAR_0,
       const nfs4_stateid *VAR_1,
       const struct nfs42_layoutstat_devinfo *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_2,
   VAR_2->ld_private.data);
}
