
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u64 ;
struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct TYPE_5__ {unsigned int mft_record_size_bits; unsigned int mft_record_size; int sb; struct inode* mft_ino; } ;
typedef TYPE_1__ ntfs_volume ;
struct TYPE_6__ {unsigned int mft_no; unsigned int page_ofs; struct page* page; TYPE_1__* vol; } ;
typedef TYPE_2__ ntfs_inode ;
typedef unsigned int loff_t ;
typedef int le32 ;
typedef void MFT_RECORD ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (TYPE_1__*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned int) ;
 int FUNC_7 (int *) ;
 struct page* FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct page*) ;
 void* FUNC_10 (struct page*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static inline MFT_RECORD *FUNC_12(ntfs_inode *VAR_4)
{
 loff_t VAR_5;
 ntfs_volume *VAR_6 = VAR_4->vol;
 struct inode *VAR_7 = VAR_6->mft_ino;
 struct page *VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned VAR_11;

 FUNC_0(VAR_4->page);






 VAR_9 = (u64)VAR_4->mft_no << VAR_6->mft_record_size_bits >>
   VAR_3;
 VAR_11 = (VAR_4->mft_no << VAR_6->mft_record_size_bits) & ~VAR_2;

 VAR_5 = FUNC_4(VAR_7);

 VAR_10 = VAR_5 >> VAR_3;


 if (FUNC_11(VAR_9 >= VAR_10)) {
  if (VAR_9 > VAR_10 || (VAR_5 & ~VAR_2) < VAR_11 +
    VAR_6->mft_record_size) {
   VAR_8 = FUNC_1(-VAR_1);
   FUNC_6(VAR_6->sb, "Attempt to read mft record 0x%lx, "
     "which is beyond the end of the mft.  "
     "This is probably a bug in the ntfs "
     "driver.", VAR_4->mft_no);
   goto err_out;
  }
 }

 VAR_8 = FUNC_8(VAR_7->i_mapping, VAR_9);
 if (!FUNC_2(VAR_8)) {

  if (FUNC_5(FUNC_7((le32*)(FUNC_10(VAR_8) +
    VAR_11)))) {
   VAR_4->page = VAR_8;
   VAR_4->page_ofs = VAR_11;
   return FUNC_10(VAR_8) + VAR_11;
  }
  FUNC_6(VAR_6->sb, "Mft record 0x%lx is corrupt.  "
    "Run chkdsk.", VAR_4->mft_no);
  FUNC_9(VAR_8);
  VAR_8 = FUNC_1(-VAR_0);
  FUNC_3(VAR_6);
 }
err_out:
 VAR_4->page = ((void*)0);
 VAR_4->page_ofs = 0;
 return (void*)VAR_8;
}
