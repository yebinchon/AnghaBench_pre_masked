
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_1, const struct nfs_fh *VAR_2)
{
 __be32 *VAR_3;

 FUNC_0(VAR_2->size > VAR_0);
 VAR_3 = FUNC_2(VAR_1, 4 + VAR_2->size);
 FUNC_1(VAR_3, VAR_2->data, VAR_2->size);
}
