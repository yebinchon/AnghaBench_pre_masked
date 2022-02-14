
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct nfs_fh*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_3, struct nfs_fh *VAR_4)
{
 __be32 *VAR_5;
 uint32_t VAR_6;
 int VAR_7;


 FUNC_3(VAR_4, 0, sizeof(*VAR_4));

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_5(VAR_3, 4);
 if (FUNC_4(!VAR_5))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 > VAR_1)
  return -VAR_0;
 VAR_4->size = VAR_6;
 VAR_5 = FUNC_5(VAR_3, VAR_6);
 if (FUNC_4(!VAR_5))
  return -VAR_0;
 FUNC_2(VAR_4->data, VAR_5, VAR_6);
 return 0;
}
