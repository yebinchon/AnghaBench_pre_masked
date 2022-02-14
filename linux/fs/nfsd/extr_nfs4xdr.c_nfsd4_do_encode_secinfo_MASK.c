
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct xdr_stream {int dummy; } ;
struct svc_export {size_t ex_nflavors; TYPE_3__* ex_client; struct exp_flavor_info* ex_flavors; } ;
struct TYPE_5__ {int len; int data; } ;
struct rpcsec_gss_info {scalar_t__ qop; scalar_t__ service; TYPE_2__ oid; } ;
struct exp_flavor_info {scalar_t__ pseudoflavor; } ;
typedef scalar_t__ rpc_authflavor_t ;
typedef int __be32 ;
struct TYPE_6__ {TYPE_1__* flavour; } ;
struct TYPE_4__ {scalar_t__ flavour; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (size_t) ;
 int VAR_4 ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,struct rpcsec_gss_info*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int * FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32
FUNC_8(struct xdr_stream *VAR_5, struct svc_export *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 struct exp_flavor_info *VAR_10;
 struct exp_flavor_info VAR_11[2];
 __be32 *VAR_12, *VAR_13;
 static bool VAR_14 = 1;

 if (VAR_6->ex_nflavors) {
  VAR_10 = VAR_6->ex_flavors;
  VAR_8 = VAR_6->ex_nflavors;
 } else {
  VAR_10 = VAR_11;
  if (VAR_6->ex_client->flavour->flavour == VAR_3) {
   VAR_8 = 2;
   VAR_10[0].pseudoflavor = VAR_3;
   VAR_10[1].pseudoflavor = VAR_2;
  } else if (VAR_6->ex_client->flavour->flavour == VAR_0) {
   VAR_8 = 1;
   VAR_10[0].pseudoflavor
     = FUNC_5(VAR_6->ex_client);
  } else {
   VAR_8 = 1;
   VAR_10[0].pseudoflavor
     = VAR_6->ex_client->flavour->flavour;
  }
 }

 VAR_9 = 0;
 VAR_12 = FUNC_7(VAR_5, 4);
 if (!VAR_12)
  return VAR_4;
 VAR_13 = VAR_12++;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  rpc_authflavor_t VAR_15 = VAR_10[VAR_7].pseudoflavor;
  struct rpcsec_gss_info VAR_16;

  if (FUNC_4(VAR_15, &VAR_16) == 0) {
   VAR_9++;
   VAR_12 = FUNC_7(VAR_5, 4 + 4 +
           FUNC_0(VAR_16.oid.len) + 4 + 4);
   if (!VAR_12)
    return VAR_4;
   *VAR_12++ = FUNC_1(VAR_0);
   VAR_12 = FUNC_6(VAR_12, VAR_16.oid.data, VAR_16.oid.len);
   *VAR_12++ = FUNC_1(VAR_16.qop);
   *VAR_12++ = FUNC_1(VAR_16.service);
  } else if (VAR_15 < VAR_1) {
   VAR_9++;
   VAR_12 = FUNC_7(VAR_5, 4);
   if (!VAR_12)
    return VAR_4;
   *VAR_12++ = FUNC_1(VAR_15);
  } else {
   if (VAR_14)
    FUNC_3("NFS: SECINFO: security flavor %u "
     "is not supported\n", VAR_15);
  }
 }

 if (VAR_8 != VAR_9)
  VAR_14 = 0;
 *VAR_13 = FUNC_2(VAR_9);
 return 0;
}
