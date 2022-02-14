
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_closeres {int stateid; int seqid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, struct nfs_closeres *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 != -VAR_0)
  FUNC_2(VAR_4, VAR_3->seqid);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_2, &VAR_3->stateid);
 return VAR_4;
}
