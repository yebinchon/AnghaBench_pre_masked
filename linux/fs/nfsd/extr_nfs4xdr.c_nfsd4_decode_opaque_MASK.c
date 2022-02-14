
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; int data; } ;
struct nfsd4_compoundargs {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static __be32 FUNC_3(struct nfsd4_compoundargs *VAR_3, struct xdr_netobj *VAR_4)
{
 __be32 *VAR_5;

 FUNC_0(4);
 VAR_4->len = FUNC_2(VAR_5++);

 if (VAR_4->len == 0 || VAR_4->len > VAR_0)
  return VAR_2;

 FUNC_0(VAR_4->len);
 FUNC_1(VAR_4->data, VAR_4->len);
 return VAR_1;
xdr_error:
 return VAR_2;
}
