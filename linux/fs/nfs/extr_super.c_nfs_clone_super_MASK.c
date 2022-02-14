
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_time_gran; int s_time_max; scalar_t__ s_time_min; int s_flags; int s_export_op; int s_op; int s_xattr; int s_maxbytes; int s_blocksize; int s_blocksize_bits; } ;
struct nfs_server {TYPE_3__* nfs_client; } ;
struct nfs_mount_info {TYPE_1__* cloned; } ;
struct TYPE_6__ {TYPE_2__* rpc_ops; } ;
struct TYPE_5__ {int version; } ;
struct TYPE_4__ {struct super_block* sb; } ;


 struct nfs_server* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static void FUNC_2(struct super_block *VAR_4,
       struct nfs_mount_info *VAR_5)
{
 const struct super_block *VAR_6 = VAR_5->cloned->sb;
 struct nfs_server *VAR_7 = FUNC_0(VAR_4);

 VAR_4->s_blocksize_bits = VAR_6->s_blocksize_bits;
 VAR_4->s_blocksize = VAR_6->s_blocksize;
 VAR_4->s_maxbytes = VAR_6->s_maxbytes;
 VAR_4->s_xattr = VAR_6->s_xattr;
 VAR_4->s_op = VAR_6->s_op;
 VAR_4->s_export_op = VAR_6->s_export_op;

 if (VAR_7->nfs_client->rpc_ops->version != 2) {



  VAR_4->s_flags |= VAR_2;
  VAR_4->s_time_gran = 1;
 } else
  VAR_4->s_time_gran = 1000;

 if (VAR_7->nfs_client->rpc_ops->version != 4) {
  VAR_4->s_time_min = 0;
  VAR_4->s_time_max = VAR_3;
 } else {
  VAR_4->s_time_min = VAR_1;
  VAR_4->s_time_max = VAR_0;
 }

  FUNC_1(VAR_4);
}
