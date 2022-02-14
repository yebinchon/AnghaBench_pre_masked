
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int * data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_6(struct xdr_stream *VAR_3, struct nfs_fh *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_5(VAR_3, 4);
 if (FUNC_4(VAR_5 == ((void*)0)))
  return FUNC_0(VAR_1);
 VAR_4->size = FUNC_3(*VAR_5);
 if (VAR_4->size > VAR_2)
  return FUNC_0(VAR_0);
 VAR_5 = FUNC_5(VAR_3, VAR_4->size);
 if (FUNC_4(VAR_5 == ((void*)0)))
  return FUNC_0(VAR_1);
 FUNC_1(&VAR_4->data[0], VAR_5, VAR_4->size);
 FUNC_2(&VAR_4->data[VAR_4->size], 0, sizeof(VAR_4->data) - VAR_4->size);
 return 0;
}
