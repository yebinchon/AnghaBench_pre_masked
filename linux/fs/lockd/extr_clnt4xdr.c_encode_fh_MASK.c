
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int data; } ;


 int FUNC_0 (struct xdr_stream*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct xdr_stream *VAR_0, const struct nfs_fh *VAR_1)
{
 FUNC_0(VAR_0, (u8 *)&VAR_1->data, VAR_1->size);
}
