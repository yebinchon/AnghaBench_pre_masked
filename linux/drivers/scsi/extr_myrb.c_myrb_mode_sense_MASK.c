
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; } ;
struct myrb_ldev_info {scalar_t__ wb_enabled; int size; } ;
struct myrb_hba {scalar_t__ segment_size; int ldev_block_size; } ;
typedef int modes ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (scalar_t__,unsigned char*) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (struct scsi_cmnd*,unsigned char*,size_t) ;

__attribute__((used)) static void
FUNC_4(struct myrb_hba *VAR_0, struct scsi_cmnd *VAR_1,
  struct myrb_ldev_info *VAR_2)
{
 unsigned char VAR_3[32], *VAR_4;
 bool VAR_5;
 size_t VAR_6;

 VAR_5 = (VAR_1->cmnd[1] & 0x08) == 0x08;
 if (VAR_5) {
  VAR_6 = 24;
  VAR_4 = &VAR_3[4];
 } else {
  VAR_6 = 32;
  VAR_4 = &VAR_3[12];
 }
 FUNC_0(VAR_3, 0, sizeof(VAR_3));
 VAR_3[0] = VAR_6 - 1;
 if (!VAR_5) {
  unsigned char *VAR_7 = &VAR_3[4];

  VAR_3[3] = 8;
  FUNC_2(VAR_2->size, &VAR_7[0]);
  FUNC_2(VAR_0->ldev_block_size, &VAR_7[5]);
 }
 VAR_4[0] = 0x08;
 VAR_4[1] = 0x12;
 if (VAR_2->wb_enabled)
  VAR_4[2] |= 0x04;
 if (VAR_0->segment_size) {
  VAR_4[2] |= 0x08;
  FUNC_1(VAR_0->segment_size, &VAR_4[14]);
 }

 FUNC_3(VAR_1, VAR_3, VAR_6);
}
