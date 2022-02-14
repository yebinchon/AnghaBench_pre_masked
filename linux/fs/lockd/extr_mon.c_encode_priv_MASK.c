
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nsm_args {TYPE_1__* priv; } ;
typedef int __be32 ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_1, const struct nsm_args *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_3, VAR_2->priv->data, VAR_0);
}
