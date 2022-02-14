
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct nfs4_fs_locations_res {TYPE_1__* fs_locations; scalar_t__ renew; scalar_t__ migration; int seq_res; } ;
struct compound_hdr {int dummy; } ;
struct TYPE_2__ {int server; int fattr; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,struct compound_hdr*) ;
 int FUNC_1 (struct xdr_stream*,int *,int *,TYPE_1__*,int *,int ) ;
 int FUNC_2 (struct xdr_stream*) ;
 int FUNC_3 (struct xdr_stream*) ;
 int FUNC_4 (struct xdr_stream*) ;
 int FUNC_5 (struct xdr_stream*,int *,struct rpc_rqst*) ;
 int FUNC_6 (struct xdr_stream*,int ) ;

__attribute__((used)) static int FUNC_7(struct rpc_rqst *VAR_1,
         struct xdr_stream *VAR_2,
         void *VAR_3)
{
 struct nfs4_fs_locations_res *VAR_4 = VAR_3;
 struct compound_hdr VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_5(VAR_2, &VAR_4->seq_res, VAR_1);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  goto out;
 if (VAR_4->migration) {
  FUNC_6(VAR_2, VAR_0);
  VAR_6 = FUNC_1(VAR_2,
     &VAR_4->fs_locations->fattr,
      ((void*)0), VAR_4->fs_locations,
      ((void*)0), VAR_4->fs_locations->server);
  if (VAR_6)
   goto out;
  if (VAR_4->renew)
   VAR_6 = FUNC_4(VAR_2);
 } else {
  VAR_6 = FUNC_2(VAR_2);
  if (VAR_6)
   goto out;
  FUNC_6(VAR_2, VAR_0);
  VAR_6 = FUNC_1(VAR_2,
     &VAR_4->fs_locations->fattr,
      ((void*)0), VAR_4->fs_locations,
      ((void*)0), VAR_4->fs_locations->server);
 }
out:
 return VAR_6;
}
