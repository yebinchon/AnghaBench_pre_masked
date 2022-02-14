
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_time_max; scalar_t__ s_time_min; int * s_export_op; int s_flags; scalar_t__ s_blocksize_bits; scalar_t__ s_blocksize; int s_op; int s_xattr; } ;
struct nfs_server {TYPE_3__* nfs_client; } ;
struct nfs_parsed_mount_data {scalar_t__ bsize; } ;
struct nfs_mount_info {struct nfs_parsed_mount_data* parsed; } ;
struct TYPE_6__ {TYPE_2__* rpc_ops; TYPE_1__* cl_nfs_mod; } ;
struct TYPE_5__ {int version; } ;
struct TYPE_4__ {int sops; int xattr; } ;


 struct nfs_server* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*) ;
 int VAR_4 ;
 int FUNC_2 (struct super_block*) ;

void FUNC_3(struct super_block *VAR_5, struct nfs_mount_info *VAR_6)
{
 struct nfs_parsed_mount_data *VAR_7 = VAR_6->parsed;
 struct nfs_server *VAR_8 = FUNC_0(VAR_5);

 VAR_5->s_blocksize_bits = 0;
 VAR_5->s_blocksize = 0;
 VAR_5->s_xattr = VAR_8->nfs_client->cl_nfs_mod->xattr;
 VAR_5->s_op = VAR_8->nfs_client->cl_nfs_mod->sops;
 if (VAR_7 && VAR_7->bsize)
  VAR_5->s_blocksize = FUNC_1(VAR_7->bsize, &VAR_5->s_blocksize_bits);

 if (VAR_8->nfs_client->rpc_ops->version != 2) {



  VAR_5->s_flags |= VAR_2;
  VAR_5->s_time_gran = 1;
  VAR_5->s_export_op = &VAR_4;
 } else
  VAR_5->s_time_gran = 1000;

 if (VAR_8->nfs_client->rpc_ops->version != 4) {
  VAR_5->s_time_min = 0;
  VAR_5->s_time_max = VAR_3;
 } else {
  VAR_5->s_time_min = VAR_1;
  VAR_5->s_time_max = VAR_0;
 }

  FUNC_2(VAR_5);
}
