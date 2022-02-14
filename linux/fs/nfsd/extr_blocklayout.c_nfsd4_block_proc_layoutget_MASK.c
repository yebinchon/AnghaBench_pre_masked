
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct svc_fh {int dummy; } ;
struct super_block {TYPE_1__* s_export_op; } ;
struct pnfs_block_extent {int foff; scalar_t__ len; int es; int vol_id; int soff; } ;
struct nfsd4_layout_seg {int offset; scalar_t__ length; scalar_t__ iomode; } ;
struct nfsd4_layoutget {scalar_t__ lg_minlength; struct pnfs_block_extent* lg_content; struct nfsd4_layout_seg lg_seg; } ;
struct iomap {scalar_t__ length; int type; int offset; int addr; } ;
struct inode {struct super_block* i_sb; } ;
typedef int __be32 ;
struct TYPE_2__ {int (* map_blocks ) (struct inode*,int,scalar_t__,struct iomap*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct inode*) ;
 struct pnfs_block_extent* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct svc_fh const*,int) ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct inode*,int,scalar_t__,struct iomap*,int,int*) ;

__attribute__((used)) static __be32
FUNC_7(struct inode *VAR_10, const struct svc_fh *VAR_11,
  struct nfsd4_layoutget *VAR_12)
{
 struct nfsd4_layout_seg *VAR_13 = &VAR_12->lg_seg;
 struct super_block *VAR_14 = VAR_10->i_sb;
 u32 VAR_15 = FUNC_2(VAR_10);
 struct pnfs_block_extent *VAR_16;
 struct iomap VAR_17;
 u32 VAR_18 = 0;
 int VAR_19;

 if (VAR_13->offset & (VAR_15 - 1)) {
  FUNC_1("pnfsd: I/O misaligned\n");
  goto out_layoutunavailable;
 }





 VAR_19 = -VAR_0;
 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  goto out_error;
 VAR_12->lg_content = VAR_16;

 VAR_19 = VAR_14->s_export_op->map_blocks(VAR_10, VAR_13->offset, VAR_13->length,
         &VAR_17, VAR_13->iomode != VAR_3,
         &VAR_18);
 if (VAR_19) {
  if (VAR_19 == -VAR_1)
   goto out_layoutunavailable;
  goto out_error;
 }

 if (VAR_17.length < VAR_12->lg_minlength) {
  FUNC_1("pnfsd: extent smaller than minlength\n");
  goto out_layoutunavailable;
 }

 switch (VAR_17.type) {
 case 129:
  if (VAR_13->iomode == VAR_3)
   VAR_16->es = VAR_8;
  else
   VAR_16->es = VAR_7;
  VAR_16->soff = VAR_17.addr;
  break;
 case 128:
  if (VAR_13->iomode & VAR_4) {



   if (VAR_12->lg_minlength == 0) {
    FUNC_1("pnfsd: no soup for you!\n");
    goto out_layoutunavailable;
   }

   VAR_16->es = VAR_5;
   VAR_16->soff = VAR_17.addr;
   break;
  }

 case 130:
  if (VAR_13->iomode == VAR_3) {
   VAR_16->es = VAR_6;
   break;
  }

 case 131:
 default:
  FUNC_0(1, "pnfsd: filesystem returned %d extent\n", VAR_17.type);
  goto out_layoutunavailable;
 }

 VAR_19 = FUNC_4(&VAR_16->vol_id, VAR_11, VAR_18);
 if (VAR_19)
  goto out_error;
 VAR_16->foff = VAR_17.offset;
 VAR_16->len = VAR_17.length;

 VAR_13->offset = VAR_17.offset;
 VAR_13->length = VAR_17.length;

 FUNC_1("GET: 0x%llx:0x%llx %d\n", VAR_16->foff, VAR_16->len, VAR_16->es);
 return 0;

out_error:
 VAR_13->length = 0;
 return FUNC_5(VAR_19);
out_layoutunavailable:
 VAR_13->length = 0;
 return VAR_9;
}
