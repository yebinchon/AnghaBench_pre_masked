
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int u32 ;
struct TYPE_3__ {int fh_base; int fh_size; } ;
struct svc_fh {TYPE_1__ fh_handle; } ;
struct TYPE_4__ {int size; int data; } ;
struct pnfs_ff_layout {int flags; TYPE_2__ fh; int deviceid; int gid; int uid; } ;
struct nfsd4_layout_seg {scalar_t__ iomode; scalar_t__ length; scalar_t__ offset; } ;
struct nfsd4_layoutget {struct pnfs_ff_layout* lg_content; struct nfsd4_layout_seg lg_seg; } ;
struct inode {int i_gid; int i_uid; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_7 ;
 struct pnfs_ff_layout* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *,struct svc_fh const*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static __be32
FUNC_7(struct inode *VAR_8, const struct svc_fh *VAR_9,
  struct nfsd4_layoutget *VAR_10)
{
 struct nfsd4_layout_seg *VAR_11 = &VAR_10->lg_seg;
 u32 VAR_12 = 0;
 int VAR_13;
 uid_t VAR_14;

 struct pnfs_ff_layout *VAR_15;






 VAR_13 = -VAR_0;
 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  goto out_error;
 VAR_10->lg_content = VAR_15;






 VAR_15->flags = VAR_2 | VAR_1 |
      VAR_3;


 if (VAR_11->iomode == VAR_5) {
  VAR_14 = FUNC_1(&VAR_7, VAR_8->i_uid) + 1;
  VAR_15->uid = FUNC_3(&VAR_7, VAR_14);
 } else
  VAR_15->uid = VAR_8->i_uid;
 VAR_15->gid = VAR_8->i_gid;

 VAR_13 = FUNC_5(&VAR_15->deviceid, VAR_9, VAR_12);
 if (VAR_13)
  goto out_error;

 VAR_15->fh.size = VAR_9->fh_handle.fh_size;
 FUNC_4(VAR_15->fh.data, &VAR_9->fh_handle.fh_base, VAR_15->fh.size);


 VAR_11->offset = 0;
 VAR_11->length = VAR_6;

 FUNC_0("GET: 0x%llx:0x%llx %d\n", VAR_11->offset, VAR_11->length,
  VAR_11->iomode);
 return 0;

out_error:
 VAR_11->length = 0;
 return FUNC_6(VAR_13);
}
