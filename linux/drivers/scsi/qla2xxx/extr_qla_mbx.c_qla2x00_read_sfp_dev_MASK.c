
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u8 ;
typedef int u16 ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int sfp_data_dma; int * sfp_data; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int,int,int) ;
 int VAR_4 ;
 int FUNC_3 (struct scsi_qla_host*,int,int *,int,int,int,int ) ;

int
FUNC_4(struct scsi_qla_host *VAR_5, char *VAR_6, int VAR_7)
{
 struct qla_hw_data *VAR_8 = VAR_5->hw;
 uint16_t VAR_9, VAR_10, VAR_11;
 dma_addr_t VAR_12;
 int VAR_13, VAR_14;
 u8 *VAR_15;

 FUNC_1(VAR_8->sfp_data, 0, VAR_3);
 VAR_10 = 0xa0;
 VAR_12 = VAR_8->sfp_data_dma;
 VAR_15 = VAR_8->sfp_data;
 VAR_11 = VAR_14 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3 / VAR_2; VAR_9++) {
  if (VAR_9 == 4) {

   VAR_10 = 0xa2;
   VAR_11 = 0;
  }

  VAR_13 = FUNC_3(VAR_5, VAR_12, VAR_15,
      VAR_10, VAR_11, VAR_2, VAR_0);
  if (VAR_13 != VAR_1) {
   FUNC_2(VAR_4, VAR_5, 0x706d,
       "Unable to read SFP data (%x/%x/%x).\n", VAR_13,
       VAR_10, VAR_11);

   return VAR_13;
  }

  if (VAR_6 && (VAR_14 < VAR_7)) {
   u16 VAR_16;

   if ((VAR_7 - VAR_14) >= VAR_2)
    VAR_16 = VAR_2;
   else
    VAR_16 = VAR_7 - VAR_14;

   FUNC_0(VAR_6, VAR_15, VAR_16);
   VAR_6 += VAR_2;
   VAR_14 += VAR_16;
  }
  VAR_12 += VAR_2;
  VAR_15 += VAR_2;
  VAR_11 += VAR_2;
 }

 return VAR_13;
}
