
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfs42_device_error {int opnum; int status; TYPE_1__ dev_id; } ;
typedef void* __be32 ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 void** FUNC_1 (struct xdr_stream*,scalar_t__) ;
 void** FUNC_2 (void**,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_1,
    const struct nfs42_device_error *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0 + 2*4);
 VAR_3 = FUNC_2(VAR_3, VAR_2->dev_id.data,
   VAR_0);
 *VAR_3++ = FUNC_0(VAR_2->status);
 *VAR_3 = FUNC_0(VAR_2->opnum);
}
