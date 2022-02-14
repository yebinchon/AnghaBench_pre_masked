
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sockaddr {int dummy; } ;
struct rpc_timeout {int dummy; } ;
struct nfs_server {int flags; int options; struct nfs_client* nfs_client; int port; int mig_status; int cred; } ;
struct nfs_client_initdata {char const* hostname; size_t const addrlen; char const* ip_addr; int proto; scalar_t__ minorversion; unsigned int nconnect; int init_flags; int cred; struct rpc_timeout const* timeparms; struct net* net; int * nfs_mod; struct sockaddr const* addr; } ;
struct nfs_client {int cl_res_state; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_client*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct nfs_client*) ;
 int VAR_8 ;
 struct nfs_client* FUNC_2 (struct nfs_client_initdata*) ;
 int FUNC_3 (struct nfs_client*) ;
 int VAR_9 ;
 int FUNC_4 (struct sockaddr const*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct nfs_server *VAR_10,
  const char *VAR_11,
  const struct sockaddr *VAR_12,
  const size_t VAR_13,
  const char *VAR_14,
  int VAR_15, const struct rpc_timeout *VAR_16,
  u32 VAR_17, unsigned int VAR_18,
  struct net *VAR_19)
{
 struct nfs_client_initdata VAR_20 = {
  .hostname = VAR_11,
  .addr = VAR_12,
  .addrlen = VAR_13,
  .ip_addr = VAR_14,
  .nfs_mod = &VAR_9,
  .proto = VAR_15,
  .minorversion = VAR_17,
  .net = VAR_19,
  .timeparms = VAR_16,
  .cred = VAR_10->cred,
 };
 struct nfs_client *VAR_21;

 if (VAR_17 > 0 && VAR_15 == VAR_8)
  VAR_20.nconnect = VAR_18;
 if (VAR_10->flags & VAR_6)
  FUNC_5(VAR_3, &VAR_20.init_flags);
 if (VAR_10->options & VAR_7)
  FUNC_5(VAR_2, &VAR_20.init_flags);
 if (FUNC_6(VAR_5, &VAR_10->mig_status))
  FUNC_5(VAR_4, &VAR_20.init_flags);
 VAR_10->port = FUNC_4(VAR_12);


 VAR_21 = FUNC_2(&VAR_20);
 if (FUNC_0(VAR_21))
  return FUNC_1(VAR_21);

 if (VAR_10->nfs_client == VAR_21) {
  FUNC_3(VAR_21);
  return -VAR_0;
 }
 FUNC_5(VAR_1, &VAR_21->cl_res_state);

 VAR_10->nfs_client = VAR_21;
 return 0;
}
