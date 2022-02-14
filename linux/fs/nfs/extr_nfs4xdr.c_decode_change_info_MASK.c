
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs4_change_info {int after; int before; int atomic; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_1, struct nfs4_change_info *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_3(VAR_1, 20);
 if (FUNC_1(!VAR_3))
  return -VAR_0;
 VAR_2->atomic = FUNC_0(VAR_3++);
 VAR_3 = FUNC_2(VAR_3, &VAR_2->before);
 FUNC_2(VAR_3, &VAR_2->after);
 return 0;
}
