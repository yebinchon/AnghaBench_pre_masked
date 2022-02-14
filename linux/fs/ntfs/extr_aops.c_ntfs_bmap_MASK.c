
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct address_space {int host; } ;
typedef unsigned char sector_t ;
typedef unsigned char s64 ;
struct TYPE_13__ {unsigned char cluster_size_bits; unsigned char cluster_size_mask; TYPE_4__* sb; } ;
typedef TYPE_2__ ntfs_volume ;
struct TYPE_12__ {int lock; } ;
struct TYPE_14__ {long long mft_no; scalar_t__ type; unsigned char initialized_size; TYPE_1__ runlist; int size_lock; TYPE_2__* vol; } ;
typedef TYPE_3__ ntfs_inode ;
typedef unsigned char loff_t ;
typedef int lcn ;
typedef int block ;
struct TYPE_15__ {unsigned long s_blocksize; unsigned char s_blocksize_bits; } ;
typedef unsigned char LCN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;


 unsigned char VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 unsigned char FUNC_8 (int ) ;
 unsigned char FUNC_9 (TYPE_3__*,unsigned char,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (TYPE_4__*,char*,...) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static sector_t FUNC_16(struct address_space *VAR_2, sector_t VAR_3)
{
 s64 VAR_4, VAR_5;
 loff_t VAR_6;
 LCN VAR_7;
 unsigned long VAR_8, VAR_9;
 ntfs_inode *VAR_10 = FUNC_5(VAR_2->host);
 ntfs_volume *VAR_11 = VAR_10->vol;
 unsigned VAR_12;
 unsigned char VAR_13, VAR_14;

 FUNC_10("Entering for mft_no 0x%lx, logical block 0x%llx.",
   VAR_10->mft_no, (unsigned long long)VAR_3);
 if (VAR_10->type != VAR_0 || !FUNC_4(VAR_10) || FUNC_2(VAR_10)) {
  FUNC_11(VAR_11->sb, "BMAP does not make sense for %s "
    "attributes, returning 0.",
    (VAR_10->type != VAR_0) ? "non-data" :
    (!FUNC_4(VAR_10) ? "resident" :
    "encrypted"));
  return 0;
 }

 FUNC_0(FUNC_1(VAR_10));
 FUNC_0(FUNC_3(VAR_10));
 VAR_8 = VAR_11->sb->s_blocksize;
 VAR_13 = VAR_11->sb->s_blocksize_bits;
 VAR_4 = (s64)VAR_3 << VAR_13;
 FUNC_12(&VAR_10->size_lock, VAR_9);
 VAR_5 = VAR_10->initialized_size;
 VAR_6 = FUNC_8(FUNC_6(VAR_10));
 FUNC_13(&VAR_10->size_lock, VAR_9);





 if (FUNC_14(VAR_4 >= VAR_5 || (VAR_4 + VAR_8 > VAR_5 && VAR_5 < VAR_6)))
  goto hole;
 VAR_14 = VAR_11->cluster_size_bits;
 FUNC_7(&VAR_10->runlist.lock);
 VAR_7 = FUNC_9(VAR_10, VAR_4 >> VAR_14, 0);
 FUNC_15(&VAR_10->runlist.lock);
 if (FUNC_14(VAR_7 < VAR_1)) {
  switch ((int)VAR_7) {
  case 129:




   goto hole;
  case 128:
   FUNC_11(VAR_11->sb, "Not enough memory to complete "
     "mapping for inode 0x%lx.  "
     "Returning 0.", VAR_10->mft_no);
   break;
  default:
   FUNC_11(VAR_11->sb, "Failed to complete mapping for "
     "inode 0x%lx.  Run chkdsk.  "
     "Returning 0.", VAR_10->mft_no);
   break;
  }
  return 0;
 }
 if (VAR_7 < 0) {

hole:
  FUNC_10("Done (returning hole).");
  return 0;
 }




 VAR_12 = VAR_4 & VAR_11->cluster_size_mask;
 if (FUNC_14(sizeof(VAR_3) < sizeof(VAR_7))) {
  VAR_3 = VAR_7 = ((VAR_7 << VAR_14) + VAR_12) >>
    VAR_13;

  if (FUNC_14(VAR_3 != VAR_7)) {
   FUNC_11(VAR_11->sb, "Physical block 0x%llx is too "
     "large to be returned, returning 0.",
     (long long)VAR_7);
   return 0;
  }
 } else
  VAR_3 = ((VAR_7 << VAR_14) + VAR_12) >>
    VAR_13;
 FUNC_10("Done (returning block 0x%llx).", (unsigned long long)VAR_7);
 return VAR_3;
}
