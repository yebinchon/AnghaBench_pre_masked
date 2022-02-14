
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_fh {int data; int size; } ;
struct mountres {struct nfs_fh* fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct xdr_stream*,int ) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, struct mountres *VAR_3)
{
 struct nfs_fh *VAR_4 = VAR_3->fh;
 __be32 *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (FUNC_1(VAR_5 == ((void*)0)))
  return -VAR_0;

 VAR_4->size = VAR_1;
 FUNC_0(VAR_4->data, VAR_5, VAR_1);
 return 0;
}
