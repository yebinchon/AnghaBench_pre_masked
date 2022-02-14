
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct TYPE_6__ {scalar_t__ version; int port; int addrlen; TYPE_1__ address; scalar_t__ hostname; int protocol; } ;
struct TYPE_5__ {int addrlen; int address; scalar_t__ hostname; int export_path; } ;
struct nfs_parsed_mount_data {int flags; int version; TYPE_3__ mount_server; TYPE_2__ nfs_server; int net; } ;
struct nfs_mount_request {int noresvport; unsigned int* auth_flav_len; scalar_t__ version; scalar_t__ hostname; struct sockaddr* sap; int salen; int net; int * auth_flavs; struct nfs_fh* fh; int protocol; int dirpath; } ;
struct nfs_fh {int dummy; } ;
typedef int rpc_authflavor_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 int FUNC_1 (struct sockaddr*,int *,int ) ;
 int FUNC_2 (struct nfs_mount_request*) ;
 int FUNC_3 (struct sockaddr*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct nfs_parsed_mount_data *VAR_5,
        struct nfs_fh *VAR_6,
        rpc_authflavor_t *VAR_7,
        unsigned int *VAR_8)
{
 struct nfs_mount_request VAR_9 = {
  .sap = (struct sockaddr *)
      &VAR_5->mount_server.address,
  .dirpath = VAR_5->nfs_server.export_path,
  .protocol = VAR_5->mount_server.protocol,
  .fh = VAR_6,
  .noresvport = VAR_5->flags & VAR_4,
  .auth_flav_len = VAR_8,
  .auth_flavs = VAR_7,
  .net = VAR_5->net,
 };
 int VAR_10;

 if (VAR_5->mount_server.version == 0) {
  switch (VAR_5->version) {
   default:
    VAR_5->mount_server.version = VAR_2;
    break;
   case 2:
    VAR_5->mount_server.version = VAR_3;
  }
 }
 VAR_9.version = VAR_5->mount_server.version;

 if (VAR_5->mount_server.hostname)
  VAR_9.hostname = VAR_5->mount_server.hostname;
 else
  VAR_9.hostname = VAR_5->nfs_server.hostname;




 if (VAR_5->mount_server.address.ss_family == VAR_0) {
  FUNC_1(VAR_9.sap, &VAR_5->nfs_server.address,
         VAR_5->nfs_server.addrlen);
  VAR_5->mount_server.addrlen = VAR_5->nfs_server.addrlen;
 }
 VAR_9.salen = VAR_5->mount_server.addrlen;
 FUNC_3(VAR_9.sap, &VAR_5->mount_server.port, 0);





 VAR_10 = FUNC_2(&VAR_9);
 if (VAR_10 != 0) {
  FUNC_0(VAR_1, "NFS: unable to mount server %s, error %d\n",
    VAR_9.hostname, VAR_10);
  return VAR_10;
 }

 return 0;
}
