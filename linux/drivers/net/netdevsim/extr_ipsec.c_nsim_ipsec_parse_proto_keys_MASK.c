
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct net_device* dev; } ;
struct xfrm_state {TYPE_2__* aead; TYPE_1__ xso; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int alg_icv_len; unsigned char* alg_key; int alg_key_len; char* alg_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(struct xfrm_state *VAR_2,
           u32 *VAR_3, u32 *VAR_4)
{
 const char VAR_5[] = "rfc4106(gcm(aes))";
 struct net_device *VAR_6 = VAR_2->xso.dev;
 unsigned char *VAR_7;
 char *VAR_8 = ((void*)0);
 int VAR_9;

 if (!VAR_2->aead) {
  FUNC_1(VAR_6, "Unsupported IPsec algorithm\n");
  return -VAR_0;
 }

 if (VAR_2->aead->alg_icv_len != VAR_1) {
  FUNC_1(VAR_6, "IPsec offload requires %d bit authentication\n",
      VAR_1);
  return -VAR_0;
 }

 VAR_7 = &VAR_2->aead->alg_key[0];
 VAR_9 = VAR_2->aead->alg_key_len;
 VAR_8 = VAR_2->aead->alg_name;

 if (FUNC_2(VAR_8, VAR_5)) {
  FUNC_1(VAR_6, "Unsupported IPsec algorithm - please use %s\n",
      VAR_5);
  return -VAR_0;
 }


 if (VAR_9 > VAR_1) {
  *VAR_4 = ((u32 *)VAR_7)[4];
 } else if (VAR_9 == VAR_1) {
  *VAR_4 = 0;
 } else {
  FUNC_1(VAR_6, "IPsec hw offload only supports 128 bit keys with optional 32 bit salt\n");
  return -VAR_0;
 }
 FUNC_0(VAR_3, VAR_7, 16);

 return 0;
}
