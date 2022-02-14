
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_qla_host {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_5 ;
 int FUNC_5 (struct scsi_qla_host*,int) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 int FUNC_10 (struct scsi_qla_host*,int*,int,int) ;
 int FUNC_11 (struct scsi_qla_host*,int*,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

int
FUNC_14(struct scsi_qla_host *VAR_6, void *VAR_7,
     uint32_t VAR_8, uint32_t VAR_9)
{
 int VAR_10 = VAR_3, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 uint32_t VAR_15;
 uint8_t *VAR_16, *VAR_17;

 VAR_15 = VAR_8;

 VAR_16 = FUNC_0(VAR_9, sizeof(uint8_t), VAR_0);
 if (!VAR_16)
  return VAR_3;

 FUNC_2(VAR_16, VAR_7, VAR_9);
 VAR_17 = VAR_16;
 VAR_13 = VAR_9 / sizeof(uint32_t);



 VAR_12 = VAR_13 / VAR_1;
 VAR_14 = VAR_9 / VAR_2;


 FUNC_12(VAR_6->host);

 FUNC_6(VAR_6);
 FUNC_9(VAR_6);


 for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
  VAR_10 = FUNC_5(VAR_6, VAR_15);
  FUNC_3(VAR_4, VAR_6, 0xb138,
      "Done erase of sector=0x%x.\n",
      VAR_15);
  if (VAR_10) {
   FUNC_4(VAR_5, VAR_6, 0xb121,
       "Failed to erase the sector having address: "
       "0x%x.\n", VAR_15);
   goto out;
  }
  VAR_15 += VAR_2;
 }
 FUNC_3(VAR_4, VAR_6, 0xb13f,
     "Got write for addr = 0x%x length=0x%x.\n",
     VAR_8, VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {


  VAR_10 = FUNC_10(VAR_6, (uint32_t *)VAR_17,
      VAR_8, VAR_1);
  if (VAR_10) {

   FUNC_4(VAR_5, VAR_6, 0xb122,
       "Failed to write flash in buffer mode, "
       "Reverting to slow-write.\n");
   VAR_10 = FUNC_11(VAR_6,
       (uint32_t *)VAR_17, VAR_8,
       VAR_1);
  }
  VAR_17 += sizeof(uint32_t) * VAR_1;
  VAR_8 += sizeof(uint32_t) * VAR_1;
 }
 FUNC_3(VAR_4, VAR_6, 0xb133,
     "Done writing.\n");

out:
 FUNC_8(VAR_6);
 FUNC_7(VAR_6);
 FUNC_13(VAR_6->host);
 FUNC_1(VAR_16);

 return VAR_10;
}
