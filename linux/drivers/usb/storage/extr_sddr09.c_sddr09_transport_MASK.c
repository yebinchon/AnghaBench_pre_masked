
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {unsigned char* iobuf; unsigned int send_bulk_pipe; unsigned int recv_bulk_pipe; scalar_t__ extra; } ;
struct sddr09_card_info {int flags; int capacity; int pageshift; int pagesize; int blockshift; int blocksize; int blockmask; int lbact; } ;
struct scsi_cmnd {int* cmnd; int cmd_len; scalar_t__ sc_data_direction; } ;
struct nand_flash_dev {int chipshift; int pageshift; int blockshift; } ;
typedef int mode_page_01 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct us_data*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 struct nand_flash_dev* FUNC_6 (struct us_data*,int) ;
 int FUNC_7 (struct us_data*,struct sddr09_card_info*) ;
 int FUNC_8 (struct us_data*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct us_data*) ;
 int FUNC_10 (struct us_data*,int*,int) ;
 int FUNC_11 (struct us_data*,unsigned int,unsigned int) ;
 unsigned int FUNC_12 (int,int) ;
 int FUNC_13 (unsigned char*,char*,int) ;
 int FUNC_14 (unsigned char*) ;
 int FUNC_15 (struct us_data*,unsigned int,struct scsi_cmnd*) ;
 int FUNC_16 (struct us_data*,char*,...) ;
 int FUNC_17 (unsigned char*,int,struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_18(struct scsi_cmnd *VAR_16, struct us_data *VAR_17)
{
 static unsigned char VAR_18 = 0, VAR_19 = 0;
 static unsigned char VAR_20 = 0;
 int VAR_21, VAR_22;
 unsigned char *VAR_23 = VAR_17->iobuf;
 unsigned long VAR_24;
 unsigned int VAR_25, VAR_26;

 struct sddr09_card_info *VAR_27;

 static unsigned char VAR_28[8] = {
  0x00, 0x80, 0x00, 0x02, 0x1F, 0x00, 0x00, 0x00
 };


 static unsigned char VAR_29[19] = {
  0x00, 0x0F, 0x00, 0x0, 0x0, 0x0, 0x00,
  0x01, 0x0A,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
 };

 VAR_27 = (struct sddr09_card_info *)VAR_17->extra;

 if (VAR_16->cmnd[0] == VAR_8 && VAR_20) {

  FUNC_4(VAR_23, 0, 18);
  VAR_23[0] = 0x70;
  VAR_23[2] = VAR_18;
  VAR_23[7] = 11;
  VAR_23[12] = VAR_19;
  FUNC_17(VAR_23, 18, VAR_16);
  VAR_18 = VAR_19 = VAR_20 = 0;
  return VAR_13;
 }

 VAR_20 = 1;






 if (VAR_16->cmnd[0] == VAR_3) {
  FUNC_3(VAR_23, VAR_28, 8);
  FUNC_2(VAR_17, VAR_23, 36);
  return VAR_13;
 }

 if (VAR_16->cmnd[0] == VAR_7) {
  struct nand_flash_dev *VAR_30;

  FUNC_7(VAR_17, VAR_27);

  VAR_30 = FUNC_6(VAR_17, VAR_27->flags);
  if (!VAR_30) {

  init_error:
   VAR_18 = 0x02;
   VAR_19 = 0x3a;
   return VAR_12;
  }

  VAR_27->capacity = (1 << VAR_30->chipshift);
  VAR_27->pageshift = VAR_30->pageshift;
  VAR_27->pagesize = (1 << VAR_27->pageshift);
  VAR_27->blockshift = VAR_30->blockshift;
  VAR_27->blocksize = (1 << VAR_27->blockshift);
  VAR_27->blockmask = VAR_27->blocksize - 1;


  if (FUNC_9(VAR_17)) {

   goto init_error;
  }



  VAR_24 = (VAR_27->lbact << VAR_27->blockshift) - 1;

  ((__be32 *) VAR_23)[0] = FUNC_1(VAR_24);



  ((__be32 *) VAR_23)[1] = FUNC_1(VAR_27->pagesize);
  FUNC_17(VAR_23, 8, VAR_16);

  return VAR_13;
 }

 if (VAR_16->cmnd[0] == VAR_5) {
  int VAR_31 = (VAR_16->cmnd[2] & 0x3F);






  if (VAR_31 == 0x01 || VAR_31 == 0x3F) {
   FUNC_16(VAR_17, "Dummy up request for mode page 0x%x\n",
         VAR_31);

   FUNC_3(VAR_23, VAR_29, sizeof(VAR_29));
   ((__be16*)VAR_23)[0] = FUNC_0(sizeof(VAR_29) - 2);
   VAR_23[3] = (VAR_27->flags & VAR_9) ? 0x80 : 0;
   FUNC_17(VAR_23, sizeof(VAR_29), VAR_16);
   return VAR_13;
  }

  VAR_18 = 0x05;
  VAR_19 = 0x24;
  return VAR_12;
 }

 if (VAR_16->cmnd[0] == VAR_0)
  return VAR_13;

 VAR_20 = 0;

 if (VAR_16->cmnd[0] == VAR_6) {

  VAR_25 = FUNC_12(VAR_16->cmnd[3], VAR_16->cmnd[2]);
  VAR_25 <<= 16;
  VAR_25 |= FUNC_12(VAR_16->cmnd[5], VAR_16->cmnd[4]);
  VAR_26 = FUNC_12(VAR_16->cmnd[8], VAR_16->cmnd[7]);

  FUNC_16(VAR_17, "READ_10: read page %d pagect %d\n",
        VAR_25, VAR_26);

  VAR_21 = FUNC_8(VAR_17, VAR_25, VAR_26);
  return (VAR_21 == 0 ? VAR_13 :
    VAR_11);
 }

 if (VAR_16->cmnd[0] == VAR_15) {

  VAR_25 = FUNC_12(VAR_16->cmnd[3], VAR_16->cmnd[2]);
  VAR_25 <<= 16;
  VAR_25 |= FUNC_12(VAR_16->cmnd[5], VAR_16->cmnd[4]);
  VAR_26 = FUNC_12(VAR_16->cmnd[8], VAR_16->cmnd[7]);

  FUNC_16(VAR_17, "WRITE_10: write page %d pagect %d\n",
        VAR_25, VAR_26);

  VAR_21 = FUNC_11(VAR_17, VAR_25, VAR_26);
  return (VAR_21 == 0 ? VAR_13 :
    VAR_11);
 }





 if (VAR_16->cmnd[0] != VAR_10 &&
     VAR_16->cmnd[0] != VAR_8) {
  VAR_18 = 0x05;
  VAR_19 = 0x20;
  VAR_20 = 1;
  return VAR_12;
 }

 for (; VAR_16->cmd_len<12; VAR_16->cmd_len++)
  VAR_16->cmnd[VAR_16->cmd_len] = 0;

 VAR_16->cmnd[1] = VAR_4;

 VAR_23[0] = 0;
 for (VAR_22=0; VAR_22<12; VAR_22++)
  FUNC_13(VAR_23+FUNC_14(VAR_23), "%02X ", VAR_16->cmnd[VAR_22]);

 FUNC_16(VAR_17, "Send control for command %s\n", VAR_23);

 VAR_21 = FUNC_10(VAR_17, VAR_16->cmnd, 12);
 if (VAR_21) {
  FUNC_16(VAR_17, "sddr09_send_scsi_command returns %d\n",
        VAR_21);
  return VAR_11;
 }

 if (FUNC_5(VAR_16) == 0)
  return VAR_13;

 if (VAR_16->sc_data_direction == VAR_2 ||
     VAR_16->sc_data_direction == VAR_1) {
  unsigned int VAR_32 = (VAR_16->sc_data_direction == VAR_2)
    ? VAR_17->send_bulk_pipe : VAR_17->recv_bulk_pipe;

  FUNC_16(VAR_17, "%s %d bytes\n",
        (VAR_16->sc_data_direction == VAR_2) ?
        "sending" : "receiving",
        FUNC_5(VAR_16));

  VAR_21 = FUNC_15(VAR_17, VAR_32, VAR_16);

  return (VAR_21 == VAR_14 ?
   VAR_13 : VAR_11);
 }

 return VAR_13;
}
