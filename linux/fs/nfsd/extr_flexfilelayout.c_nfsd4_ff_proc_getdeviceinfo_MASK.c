
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ ss_family; } ;
struct svc_rqst {TYPE_1__ rq_daddr; } ;
struct super_block {int dummy; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int netid_len; int addr; int addr_len; int netid; } ;
struct pnfs_ff_device_addr {int version; int tightly_coupled; TYPE_2__ netaddr; int rsize; int wsize; scalar_t__ minor_version; } ;
struct nfsd4_getdeviceinfo {struct pnfs_ff_device_addr* gd_device; } ;
struct nfs4_client {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pnfs_ff_device_addr* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr*,char*,int) ;
 int FUNC_4 (int ,scalar_t__,char*,...) ;
 int FUNC_5 (struct svc_rqst*) ;

__attribute__((used)) static __be32
FUNC_6(struct super_block *VAR_6, struct svc_rqst *VAR_7,
  struct nfs4_client *VAR_8, struct nfsd4_getdeviceinfo *VAR_9)
{
 struct pnfs_ff_device_addr *VAR_10;

 u16 VAR_11;
 char VAR_12[VAR_5];

 VAR_10 = FUNC_0(sizeof(struct pnfs_ff_device_addr), VAR_4);
 if (!VAR_10)
  return FUNC_1(-VAR_1);

 VAR_9->gd_device = VAR_10;

 VAR_10->version = 3;
 VAR_10->minor_version = 0;

 VAR_10->rsize = FUNC_5(VAR_7);
 VAR_10->wsize = VAR_10->rsize;

 FUNC_3((struct sockaddr *)&VAR_7->rq_daddr,
   VAR_12, VAR_5);
 if (VAR_7->rq_daddr.ss_family == VAR_0) {
  struct sockaddr_in *VAR_13;

  VAR_13 = (struct sockaddr_in *)&VAR_7->rq_daddr;
  VAR_11 = FUNC_2(VAR_13->sin_port);
  FUNC_4(VAR_10->netaddr.netid, VAR_3 + 1, "tcp");
  VAR_10->netaddr.netid_len = 3;
 } else {
  struct sockaddr_in6 *VAR_14;

  VAR_14 = (struct sockaddr_in6 *)&VAR_7->rq_daddr;
  VAR_11 = FUNC_2(VAR_14->sin6_port);
  FUNC_4(VAR_10->netaddr.netid, VAR_3 + 1, "tcp6");
  VAR_10->netaddr.netid_len = 4;
 }

 VAR_10->netaddr.addr_len =
  FUNC_4(VAR_10->netaddr.addr, VAR_2 + 1,
    "%s.%hhu.%hhu", VAR_12, VAR_11 >> 8, VAR_11 & 0xff);

 VAR_10->tightly_coupled = 0;

 return 0;
}
