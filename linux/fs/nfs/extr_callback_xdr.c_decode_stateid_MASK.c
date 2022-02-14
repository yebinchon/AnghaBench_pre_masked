
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int data; } ;
typedef TYPE_1__ nfs4_stateid ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct xdr_stream*,int ) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_2, nfs4_stateid *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (FUNC_2(VAR_4 == ((void*)0)))
  return FUNC_0(VAR_0);
 FUNC_1(VAR_3->data, VAR_4, VAR_1);
 return 0;
}
