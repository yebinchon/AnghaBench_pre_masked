
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct nfs_parsed_mount_data* hostname; struct nfs_parsed_mount_data* export_path; } ;
struct TYPE_3__ {struct nfs_parsed_mount_data* hostname; } ;
struct nfs_parsed_mount_data {int lsm_opts; struct nfs_parsed_mount_data* fscache_uniq; TYPE_2__ nfs_server; TYPE_1__ mount_server; struct nfs_parsed_mount_data* client_address; } ;


 int FUNC_0 (struct nfs_parsed_mount_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfs_parsed_mount_data *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->client_address);
  FUNC_0(VAR_0->mount_server.hostname);
  FUNC_0(VAR_0->nfs_server.export_path);
  FUNC_0(VAR_0->nfs_server.hostname);
  FUNC_0(VAR_0->fscache_uniq);
  FUNC_1(&VAR_0->lsm_opts);
  FUNC_0(VAR_0);
 }
}
