
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_lock_res {int lock_seqid; int * open_seqid; int stateid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xdr_stream*,int *) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_3, struct nfs_lock_res *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_5 == -VAR_0)
  goto out;
 if (VAR_5 == 0) {
  VAR_5 = FUNC_1(VAR_3, &VAR_4->stateid);
  if (FUNC_5(VAR_5))
   goto out;
 } else if (VAR_5 == -VAR_1)
  VAR_5 = FUNC_0(VAR_3, ((void*)0));
 if (VAR_4->open_seqid != ((void*)0))
  FUNC_4(VAR_5, VAR_4->open_seqid);
 FUNC_3(VAR_5, VAR_4->lock_seqid);
out:
 return VAR_5;
}
