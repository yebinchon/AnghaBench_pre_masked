
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef unsigned long long s64 ;
struct TYPE_8__ {int sector_size; int sector_size_bits; unsigned int cluster_size; int cluster_size_mask; int cluster_size_bits; int mft_record_size; int mft_record_size_mask; int mft_record_size_bits; int index_record_size; int index_record_size_mask; int index_record_size_bits; unsigned long long nr_clusters; unsigned long long mft_lcn; unsigned long long mftmirr_lcn; int mftmirr_size; scalar_t__ serial_no; TYPE_6__* sb; } ;
typedef TYPE_2__ ntfs_volume ;
struct TYPE_10__ {int s_blocksize; } ;
struct TYPE_7__ {unsigned long long sectors_per_cluster; int hidden_sectors; int bytes_per_sector; } ;
struct TYPE_9__ {int clusters_per_mft_record; int clusters_per_index_record; int volume_serial_number; int mftmirr_lcn; int mft_lcn; int number_of_sectors; TYPE_1__ bpb; } ;
typedef TYPE_3__ NTFS_BOOT_SECTOR ;


 unsigned long long VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,unsigned long long,...) ;
 int FUNC_5 (TYPE_6__*,char*,...) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(ntfs_volume *VAR_1, const NTFS_BOOT_SECTOR *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 s64 VAR_7;

 VAR_1->sector_size = FUNC_1(VAR_2->bpb.bytes_per_sector);
 VAR_1->sector_size_bits = FUNC_0(VAR_1->sector_size) - 1;
 FUNC_4("vol->sector_size = %i (0x%x)", VAR_1->sector_size,
   VAR_1->sector_size);
 FUNC_4("vol->sector_size_bits = %i (0x%x)", VAR_1->sector_size_bits,
   VAR_1->sector_size_bits);
 if (VAR_1->sector_size < VAR_1->sb->s_blocksize) {
  FUNC_5(VAR_1->sb, "Sector size (%i) is smaller than the "
    "device block size (%lu).  This is not "
    "supported.  Sorry.", VAR_1->sector_size,
    VAR_1->sb->s_blocksize);
  return 0;
 }
 FUNC_4("sectors_per_cluster = 0x%x", VAR_2->bpb.sectors_per_cluster);
 VAR_3 = FUNC_0(VAR_2->bpb.sectors_per_cluster) - 1;
 FUNC_4("sectors_per_cluster_bits = 0x%x",
   VAR_3);
 VAR_4 = FUNC_2(VAR_2->bpb.hidden_sectors);
 FUNC_4("number of hidden sectors = 0x%x", VAR_4);
 VAR_1->cluster_size = VAR_1->sector_size << VAR_3;
 VAR_1->cluster_size_mask = VAR_1->cluster_size - 1;
 VAR_1->cluster_size_bits = FUNC_0(VAR_1->cluster_size) - 1;
 FUNC_4("vol->cluster_size = %i (0x%x)", VAR_1->cluster_size,
   VAR_1->cluster_size);
 FUNC_4("vol->cluster_size_mask = 0x%x", VAR_1->cluster_size_mask);
 FUNC_4("vol->cluster_size_bits = %i", VAR_1->cluster_size_bits);
 if (VAR_1->cluster_size < VAR_1->sector_size) {
  FUNC_5(VAR_1->sb, "Cluster size (%i) is smaller than the "
    "sector size (%i).  This is not supported.  "
    "Sorry.", VAR_1->cluster_size, VAR_1->sector_size);
  return 0;
 }
 VAR_5 = VAR_2->clusters_per_mft_record;
 FUNC_4("clusters_per_mft_record = %i (0x%x)",
   VAR_5, VAR_5);
 if (VAR_5 > 0)
  VAR_1->mft_record_size = VAR_1->cluster_size <<
    (FUNC_0(VAR_5) - 1);
 else





  VAR_1->mft_record_size = 1 << -VAR_5;
 VAR_1->mft_record_size_mask = VAR_1->mft_record_size - 1;
 VAR_1->mft_record_size_bits = FUNC_0(VAR_1->mft_record_size) - 1;
 FUNC_4("vol->mft_record_size = %i (0x%x)", VAR_1->mft_record_size,
   VAR_1->mft_record_size);
 FUNC_4("vol->mft_record_size_mask = 0x%x",
   VAR_1->mft_record_size_mask);
 FUNC_4("vol->mft_record_size_bits = %i (0x%x)",
   VAR_1->mft_record_size_bits, VAR_1->mft_record_size_bits);




 if (VAR_1->mft_record_size > VAR_0) {
  FUNC_5(VAR_1->sb, "Mft record size (%i) exceeds the "
    "PAGE_SIZE on your system (%lu).  "
    "This is not supported.  Sorry.",
    VAR_1->mft_record_size, VAR_0);
  return 0;
 }

 if (VAR_1->mft_record_size < VAR_1->sector_size) {
  FUNC_5(VAR_1->sb, "Mft record size (%i) is smaller than the "
    "sector size (%i).  This is not supported.  "
    "Sorry.", VAR_1->mft_record_size,
    VAR_1->sector_size);
  return 0;
 }
 VAR_6 = VAR_2->clusters_per_index_record;
 FUNC_4("clusters_per_index_record = %i (0x%x)",
   VAR_6, VAR_6);
 if (VAR_6 > 0)
  VAR_1->index_record_size = VAR_1->cluster_size <<
    (FUNC_0(VAR_6) - 1);
 else






  VAR_1->index_record_size = 1 << -VAR_6;
 VAR_1->index_record_size_mask = VAR_1->index_record_size - 1;
 VAR_1->index_record_size_bits = FUNC_0(VAR_1->index_record_size) - 1;
 FUNC_4("vol->index_record_size = %i (0x%x)",
   VAR_1->index_record_size, VAR_1->index_record_size);
 FUNC_4("vol->index_record_size_mask = 0x%x",
   VAR_1->index_record_size_mask);
 FUNC_4("vol->index_record_size_bits = %i (0x%x)",
   VAR_1->index_record_size_bits,
   VAR_1->index_record_size_bits);

 if (VAR_1->index_record_size < VAR_1->sector_size) {
  FUNC_5(VAR_1->sb, "Index record size (%i) is smaller than "
    "the sector size (%i).  This is not "
    "supported.  Sorry.", VAR_1->index_record_size,
    VAR_1->sector_size);
  return 0;
 }





 VAR_7 = FUNC_6(VAR_2->number_of_sectors) >> VAR_3;
 if ((u64)VAR_7 >= 1ULL << 32) {
  FUNC_5(VAR_1->sb, "Cannot handle 64-bit clusters.  Sorry.");
  return 0;
 }
 VAR_1->nr_clusters = VAR_7;
 FUNC_4("vol->nr_clusters = 0x%llx", (long long)VAR_1->nr_clusters);





 if (sizeof(unsigned long) < 8) {
  if ((VAR_7 << VAR_1->cluster_size_bits) >= (1ULL << 41)) {
   FUNC_5(VAR_1->sb, "Volume size (%lluTiB) is too "
     "large for this architecture.  "
     "Maximum supported is 2TiB.  Sorry.",
     (unsigned long long)VAR_7 >> (40 -
     VAR_1->cluster_size_bits));
   return 0;
  }
 }
 VAR_7 = FUNC_6(VAR_2->mft_lcn);
 if (VAR_7 >= VAR_1->nr_clusters) {
  FUNC_5(VAR_1->sb, "MFT LCN (%lli, 0x%llx) is beyond end of "
    "volume.  Weird.", (unsigned long long)VAR_7,
    (unsigned long long)VAR_7);
  return 0;
 }
 VAR_1->mft_lcn = VAR_7;
 FUNC_4("vol->mft_lcn = 0x%llx", (long long)VAR_1->mft_lcn);
 VAR_7 = FUNC_6(VAR_2->mftmirr_lcn);
 if (VAR_7 >= VAR_1->nr_clusters) {
  FUNC_5(VAR_1->sb, "MFTMirr LCN (%lli, 0x%llx) is beyond end "
    "of volume.  Weird.", (unsigned long long)VAR_7,
    (unsigned long long)VAR_7);
  return 0;
 }
 VAR_1->mftmirr_lcn = VAR_7;
 FUNC_4("vol->mftmirr_lcn = 0x%llx", (long long)VAR_1->mftmirr_lcn);
 VAR_1->serial_no = FUNC_3(VAR_2->volume_serial_number);
 FUNC_4("vol->serial_no = 0x%llx",
   (unsigned long long)VAR_1->serial_no);
 return 1;
}
