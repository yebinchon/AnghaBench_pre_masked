
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {unsigned int opt_xfer_blocks; int physical_block_size; struct scsi_device* device; } ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct scsi_device*,unsigned int) ;
 int FUNC_1 (int ,struct scsi_disk*,char*,unsigned int,...) ;

__attribute__((used)) static bool FUNC_2(struct scsi_disk *VAR_4,
          unsigned int VAR_5)
{
 struct scsi_device *VAR_6 = VAR_4->device;
 unsigned int VAR_7 =
  FUNC_0(VAR_6, VAR_4->opt_xfer_blocks);

 if (VAR_4->opt_xfer_blocks == 0)
  return 0;

 if (VAR_4->opt_xfer_blocks > VAR_5) {
  FUNC_1(VAR_1, VAR_4,
    "Optimal transfer size %u logical blocks " "> dev_max (%u logical blocks)\n",

    VAR_4->opt_xfer_blocks, VAR_5);
  return 0;
 }

 if (VAR_4->opt_xfer_blocks > VAR_3) {
  FUNC_1(VAR_1, VAR_4,
    "Optimal transfer size %u logical blocks " "> sd driver limit (%u logical blocks)\n",

    VAR_4->opt_xfer_blocks, VAR_3);
  return 0;
 }

 if (VAR_7 < VAR_2) {
  FUNC_1(VAR_1, VAR_4,
    "Optimal transfer size %u bytes < " "PAGE_SIZE (%u bytes)\n",

    VAR_7, (unsigned int)VAR_2);
  return 0;
 }

 if (VAR_7 & (VAR_4->physical_block_size - 1)) {
  FUNC_1(VAR_1, VAR_4,
    "Optimal transfer size %u bytes not a " "multiple of physical block size (%u bytes)\n",

    VAR_7, VAR_4->physical_block_size);
  return 0;
 }

 FUNC_1(VAR_0, VAR_4, "Optimal transfer size %u bytes\n",
   VAR_7);
 return 1;
}
