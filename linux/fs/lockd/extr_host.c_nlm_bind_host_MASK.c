
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_timeout {unsigned long to_initval; unsigned long to_increment; unsigned long to_maxval; unsigned int to_retries; } ;
struct rpc_create_args {int flags; int saddress; int cred; int authflavor; int version; int * program; int servername; struct rpc_timeout* timeout; int addrsize; int address; int protocol; int net; } ;
struct rpc_clnt {int dummy; } ;
struct nlm_host {int h_mutex; int h_name; struct rpc_clnt* h_rpcclnt; scalar_t__ h_srcaddrlen; scalar_t__ h_noresvport; int h_server; int h_cred; int h_version; int h_addrlen; int h_proto; int net; scalar_t__ h_nextrebind; int h_addrbuf; } ;


 int FUNC_0 (struct rpc_clnt*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nlm_host*) ;
 int VAR_7 ;
 int FUNC_5 (struct nlm_host*) ;
 unsigned long VAR_8 ;
 int FUNC_6 (char*,int ) ;
 struct rpc_clnt* FUNC_7 (struct rpc_create_args*) ;
 int FUNC_8 (struct rpc_clnt*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

struct rpc_clnt *
FUNC_10(struct nlm_host *VAR_9)
{
 struct rpc_clnt *VAR_10;

 FUNC_1("lockd: nlm_bind_host %s (%s)\n",
   VAR_9->h_name, VAR_9->h_addrbuf);


 FUNC_2(&VAR_9->h_mutex);




 if ((VAR_10 = VAR_9->h_rpcclnt) != ((void*)0)) {
  if (FUNC_9(VAR_6, VAR_9->h_nextrebind)) {
   FUNC_8(VAR_10);
   VAR_9->h_nextrebind = VAR_6 + VAR_0;
   FUNC_1("lockd: next rebind in %lu jiffies\n",
     VAR_9->h_nextrebind - VAR_6);
  }
 } else {
  unsigned long VAR_11 = VAR_8;
  struct rpc_timeout VAR_12 = {
   .to_initval = VAR_11,
   .to_increment = VAR_11,
   .to_maxval = VAR_11 * 6UL,
   .to_retries = 5U,
  };
  struct rpc_create_args VAR_13 = {
   .net = VAR_9->net,
   .protocol = VAR_9->h_proto,
   .address = FUNC_4(VAR_9),
   .addrsize = VAR_9->h_addrlen,
   .timeout = &VAR_12,
   .servername = VAR_9->h_name,
   .program = &VAR_7,
   .version = VAR_9->h_version,
   .authflavor = VAR_1,
   .flags = (VAR_5 |
        VAR_2),
   .cred = VAR_9->h_cred,
  };






  if (!VAR_9->h_server)
   VAR_13.flags |= VAR_3;
  if (VAR_9->h_noresvport)
   VAR_13.flags |= VAR_4;
  if (VAR_9->h_srcaddrlen)
   VAR_13.saddress = FUNC_5(VAR_9);

  VAR_10 = FUNC_7(&VAR_13);
  if (!FUNC_0(VAR_10))
   VAR_9->h_rpcclnt = VAR_10;
  else {
   FUNC_6("lockd: couldn't create RPC handle for %s\n", VAR_9->h_name);
   VAR_10 = ((void*)0);
  }
 }

 FUNC_3(&VAR_9->h_mutex);
 return VAR_10;
}
