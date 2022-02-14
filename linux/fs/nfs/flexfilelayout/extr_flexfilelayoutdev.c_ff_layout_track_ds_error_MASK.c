
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_7__ {TYPE_2__* plh_inode; } ;
struct nfs4_flexfile_layout {TYPE_3__ generic_hdr; } ;
struct nfs4_ff_layout_mirror {TYPE_4__* mirror_ds; int stateid; } ;
struct nfs4_ff_layout_ds_err {int status; int opnum; int deviceid; int stateid; void* length; void* offset; int list; } ;
typedef int gfp_t ;
typedef enum nfs_opnum4 { ____Placeholder_nfs_opnum4 } nfs_opnum4 ;
struct TYPE_5__ {int deviceid; } ;
struct TYPE_8__ {TYPE_1__ id_node; } ;
struct TYPE_6__ {int i_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_2 (struct nfs4_flexfile_layout*,struct nfs4_ff_layout_ds_err*) ;
 struct nfs4_ff_layout_ds_err* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct nfs4_flexfile_layout *VAR_3,
        struct nfs4_ff_layout_mirror *VAR_4, u64 VAR_5,
        u64 VAR_6, int VAR_7, enum nfs_opnum4 VAR_8,
        gfp_t VAR_9)
{
 struct nfs4_ff_layout_ds_err *VAR_10;

 if (VAR_7 == 0)
  return 0;

 if (FUNC_1(VAR_4->mirror_ds))
  return -VAR_0;

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_9);
 if (!VAR_10)
  return -VAR_1;

 FUNC_0(&VAR_10->list);
 VAR_10->offset = VAR_5;
 VAR_10->length = VAR_6;
 VAR_10->status = VAR_7;
 VAR_10->opnum = VAR_8;
 FUNC_5(&VAR_10->stateid, &VAR_4->stateid);
 FUNC_4(&VAR_10->deviceid, &VAR_4->mirror_ds->id_node.deviceid,
        VAR_2);

 FUNC_6(&VAR_3->generic_hdr.plh_inode->i_lock);
 FUNC_2(VAR_3, VAR_10);
 FUNC_7(&VAR_3->generic_hdr.plh_inode->i_lock);
 return 0;
}
