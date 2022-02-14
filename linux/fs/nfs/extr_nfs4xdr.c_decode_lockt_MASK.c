
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_lockt_res {int denied; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_2, struct nfs_lockt_res *VAR_3)
{
 int VAR_4;
 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 == -VAR_0)
  return FUNC_0(VAR_2, VAR_3->denied);
 return VAR_4;
}
