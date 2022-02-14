
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rpc_message {struct nfs4_server_caps_res* rpc_resp; struct nfs4_server_caps_arg* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int* attr_bitmask; int caps; int* attr_bitmask_nl; int* cache_consistency_bitmask; int* exclcreat_bitmask; int acl_bitmask; int fh_expire_type; int client; TYPE_1__* nfs_client; } ;
struct nfs_fh {int dummy; } ;
struct nfs4_server_caps_res {int* attr_bitmask; int acl_bitmask; scalar_t__ has_links; scalar_t__ has_symlinks; int* exclcreat_bitmask; int fh_expire_type; int seq_res; } ;
struct nfs4_server_caps_arg {int* bitmask; int seq_args; struct nfs_fh* fhandle; } ;
struct TYPE_2__ {int cl_minorversion; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ,struct nfs_server*,struct rpc_message*,int *,int *,int ) ;
 int * VAR_35 ;

__attribute__((used)) static int FUNC_3(struct nfs_server *VAR_36, struct nfs_fh *VAR_37)
{
 u32 VAR_38[3] = {}, VAR_39 = VAR_36->nfs_client->cl_minorversion;
 struct nfs4_server_caps_arg VAR_40 = {
  .fhandle = VAR_37,
  .bitmask = VAR_38,
 };
 struct nfs4_server_caps_res VAR_41 = {};
 struct rpc_message VAR_42 = {
  .rpc_proc = &VAR_35[VAR_22],
  .rpc_argp = &VAR_40,
  .rpc_resp = &VAR_41,
 };
 int VAR_43;
 int VAR_44;

 VAR_38[0] = VAR_8 |
       VAR_4 |
       VAR_6 |
       VAR_9 |
       VAR_2;
 if (VAR_39)
  VAR_38[2] = VAR_21;

 VAR_43 = FUNC_2(VAR_36->client, VAR_36, &VAR_42, &VAR_40.seq_args, &VAR_41.seq_res, 0);
 if (VAR_43 == 0) {

  switch (VAR_39) {
  case 0:
   VAR_41.attr_bitmask[1] &= VAR_11;
   VAR_41.attr_bitmask[2] = 0;
   break;
  case 1:
   VAR_41.attr_bitmask[2] &= VAR_18;
   break;
  case 2:
   VAR_41.attr_bitmask[2] &= VAR_19;
  }
  FUNC_1(VAR_36->attr_bitmask, VAR_41.attr_bitmask, sizeof(VAR_36->attr_bitmask));
  VAR_36->caps &= ~(VAR_23|VAR_27|
    VAR_34|VAR_26|
    VAR_28|VAR_30|VAR_31|
    VAR_32|VAR_24|
    VAR_25|VAR_29|
    VAR_33);
  if (VAR_41.attr_bitmask[0] & VAR_1 &&
    VAR_41.acl_bitmask & VAR_0)
   VAR_36->caps |= VAR_23;
  if (VAR_41.has_links != 0)
   VAR_36->caps |= VAR_27;
  if (VAR_41.has_symlinks != 0)
   VAR_36->caps |= VAR_34;
  if (VAR_41.attr_bitmask[0] & VAR_5)
   VAR_36->caps |= VAR_26;
  if (VAR_41.attr_bitmask[1] & VAR_10)
   VAR_36->caps |= VAR_28;
  if (VAR_41.attr_bitmask[1] & VAR_12)
   VAR_36->caps |= VAR_30;
  if (VAR_41.attr_bitmask[1] & VAR_13)
   VAR_36->caps |= VAR_31;
  if (VAR_41.attr_bitmask[1] & VAR_14)
   VAR_36->caps |= VAR_32;
  if (VAR_41.attr_bitmask[1] & VAR_15)
   VAR_36->caps |= VAR_24;
  if (VAR_41.attr_bitmask[1] & VAR_16)
   VAR_36->caps |= VAR_25;
  if (VAR_41.attr_bitmask[1] & VAR_17)
   VAR_36->caps |= VAR_29;




  FUNC_1(VAR_36->attr_bitmask_nl, VAR_41.attr_bitmask,
    sizeof(VAR_36->attr_bitmask));
  VAR_36->attr_bitmask_nl[2] &= ~VAR_20;

  FUNC_1(VAR_36->cache_consistency_bitmask, VAR_41.attr_bitmask, sizeof(VAR_36->cache_consistency_bitmask));
  VAR_36->cache_consistency_bitmask[0] &= VAR_3|VAR_7;
  VAR_36->cache_consistency_bitmask[1] &= VAR_16|VAR_17;
  VAR_36->cache_consistency_bitmask[2] = 0;


  for (VAR_44 = 0; VAR_44 < FUNC_0(VAR_41.exclcreat_bitmask); VAR_44++)
   VAR_41.exclcreat_bitmask[VAR_44] &= VAR_41.attr_bitmask[VAR_44];
  FUNC_1(VAR_36->exclcreat_bitmask, VAR_41.exclcreat_bitmask,
   sizeof(VAR_36->exclcreat_bitmask));

  VAR_36->acl_bitmask = VAR_41.acl_bitmask;
  VAR_36->fh_expire_type = VAR_41.fh_expire_type;
 }

 return VAR_43;
}
