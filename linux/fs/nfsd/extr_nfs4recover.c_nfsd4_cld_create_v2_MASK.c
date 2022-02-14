
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct xdr_netobj {int * data; scalar_t__ len; } ;
struct nfsd_net {struct cld_net* cld_net; } ;
struct TYPE_15__ {char* cr_raw_principal; char* cr_principal; } ;
struct TYPE_14__ {scalar_t__ len; int * data; } ;
struct nfs4_client {int cl_flags; TYPE_4__ cl_cred; TYPE_3__ cl_name; int net; } ;
struct crypto_shash {int dummy; } ;
struct TYPE_16__ {scalar_t__ cp_len; int cp_data; } ;
struct TYPE_13__ {int cn_id; scalar_t__ cn_len; } ;
struct TYPE_17__ {TYPE_5__ cc_princhash; TYPE_2__ cc_name; } ;
struct TYPE_18__ {TYPE_6__ cm_clntinfo; } ;
struct cld_msg_v2 {int cm_status; TYPE_7__ cm_u; int cm_cmd; } ;
struct TYPE_12__ {struct cld_msg_v2 cu_msg_v2; } ;
struct cld_upcall {TYPE_1__ cu_u; } ;
struct cld_net {int cn_pipe; struct crypto_shash* cn_tfm; } ;
struct TYPE_19__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_8__*,struct crypto_shash*) ;
 struct cld_upcall* FUNC_1 (struct nfsd_net*) ;
 int FUNC_2 (int ,struct cld_msg_v2*) ;
 int FUNC_3 (TYPE_8__*,char*,int ,int *) ;
 scalar_t__ FUNC_4 (struct crypto_shash*) ;
 TYPE_8__* VAR_4 ;
 int FUNC_5 (struct cld_upcall*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ,int *,scalar_t__) ;
 struct nfsd_net* FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static void
FUNC_15(struct nfs4_client *VAR_6)
{
 int VAR_7;
 struct cld_upcall *VAR_8;
 struct nfsd_net *VAR_9 = FUNC_9(VAR_6->net, VAR_5);
 struct cld_net *VAR_10 = VAR_9->cld_net;
 struct cld_msg_v2 *VAR_11;
 struct crypto_shash *VAR_12 = VAR_10->cn_tfm;
 struct xdr_netobj VAR_13;
 char *VAR_14 = ((void*)0);
 FUNC_0(VAR_4, VAR_12);


 if (FUNC_14(VAR_3, &VAR_6->cl_flags))
  return;

 VAR_8 = FUNC_1(VAR_9);
 if (!VAR_8) {
  VAR_7 = -VAR_1;
  goto out_err;
 }

 VAR_11 = &VAR_8->cu_u.cu_msg_v2;
 VAR_11->cm_cmd = VAR_0;
 VAR_11->cm_u.cm_clntinfo.cc_name.cn_len = VAR_6->cl_name.len;
 FUNC_8(VAR_11->cm_u.cm_clntinfo.cc_name.cn_id, VAR_6->cl_name.data,
   VAR_6->cl_name.len);
 if (VAR_6->cl_cred.cr_raw_principal)
  VAR_14 = VAR_6->cl_cred.cr_raw_principal;
 else if (VAR_6->cl_cred.cr_principal)
  VAR_14 = VAR_6->cl_cred.cr_principal;
 if (VAR_14) {
  VAR_4->tfm = VAR_12;
  VAR_13.len = FUNC_4(VAR_12);
  VAR_13.data = FUNC_7(VAR_13.len, VAR_2);
  if (VAR_13.data == ((void*)0)) {
   VAR_7 = -VAR_1;
   goto out;
  }
  VAR_7 = FUNC_3(VAR_4, VAR_14, FUNC_13(VAR_14),
       VAR_13.data);
  FUNC_12(VAR_4);
  if (VAR_7) {
   FUNC_6(VAR_13.data);
   goto out;
  }
  VAR_11->cm_u.cm_clntinfo.cc_princhash.cp_len = VAR_13.len;
  FUNC_8(VAR_11->cm_u.cm_clntinfo.cc_princhash.cp_data,
         VAR_13.data, VAR_13.len);
  FUNC_6(VAR_13.data);
 } else
  VAR_11->cm_u.cm_clntinfo.cc_princhash.cp_len = 0;

 VAR_7 = FUNC_2(VAR_10->cn_pipe, VAR_11);
 if (!VAR_7) {
  VAR_7 = VAR_11->cm_status;
  FUNC_11(VAR_3, &VAR_6->cl_flags);
 }

out:
 FUNC_5(VAR_8);
out_err:
 if (VAR_7)
  FUNC_10("NFSD: Unable to create client record on stable storage: %d\n",
    VAR_7);
}
