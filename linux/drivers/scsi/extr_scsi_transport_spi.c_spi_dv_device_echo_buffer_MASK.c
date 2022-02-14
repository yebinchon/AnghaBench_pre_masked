
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct scsi_sense_hdr {scalar_t__ sense_key; int asc; int ascq; } ;
struct scsi_device {int dummy; } ;
typedef enum spi_compare_returns { ____Placeholder_spi_compare_returns } spi_compare_returns ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (struct scsi_device*,int ) ;
 scalar_t__ FUNC_5 (struct scsi_sense_hdr*) ;
 int FUNC_6 (int ,struct scsi_device*,char*,int) ;
 int FUNC_7 (struct scsi_device*,char const*,int ,int*,int,struct scsi_sense_hdr*) ;

__attribute__((used)) static enum spi_compare_returns
FUNC_8(struct scsi_device *VAR_10, u8 *VAR_11,
     u8 *VAR_12, const int VAR_13)
{
 int VAR_14 = VAR_12 - VAR_11;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19 = 0x0000ffff;
 struct scsi_sense_hdr VAR_20;

 const char VAR_21[] = {
  VAR_9, 0x0a, 0, 0, 0, 0, 0, VAR_14 >> 8, VAR_14 & 0xff, 0
 };
 const char VAR_22[] = {
  VAR_4, 0x0a, 0, 0, 0, 0, 0, VAR_14 >> 8, VAR_14 & 0xff, 0
 };



 for (VAR_15 = 0; VAR_15 < VAR_14; ) {


  for ( ; VAR_15 < FUNC_2(VAR_14, 32); VAR_15++)
   VAR_11[VAR_15] = VAR_15;
  VAR_16 = VAR_15;


  for ( ; VAR_15 < FUNC_2(VAR_14, VAR_16 + 32); VAR_15 += 2) {
   u16 *VAR_23 = (u16 *)&VAR_11[VAR_15];

   *VAR_23 = (VAR_15 & 0x02) ? 0x0000 : 0xffff;
  }
  VAR_16 = VAR_15;


  for ( ; VAR_15 < FUNC_2(VAR_14, VAR_16 + 32); VAR_15 += 2) {
   u16 *VAR_24 = (u16 *)&VAR_11[VAR_15];

   *VAR_24 = (VAR_15 & 0x02) ? 0x5555 : 0xaaaa;
  }
  VAR_16 = VAR_15;

  for ( ; VAR_15 < FUNC_2(VAR_14, VAR_16 + 32); VAR_15 += 4) {
   u32 *VAR_25 = (unsigned int *)&VAR_11[VAR_15];
   u32 VAR_26 = (VAR_19 & 0x80000000) ? 1 : 0;

   *VAR_25 = VAR_19;
   VAR_19 = (VAR_19 << 1) | VAR_26;
  }

 }

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_18 = FUNC_7(VAR_10, VAR_21, VAR_1,
         VAR_11, VAR_14, &VAR_20);
  if(VAR_18 || !FUNC_3(VAR_10)) {

   FUNC_4(VAR_10, VAR_5);
   if (FUNC_5(&VAR_20)
       && VAR_20.sense_key == VAR_2

       && VAR_20.asc == 0x24 && VAR_20.ascq == 0x00)





    return VAR_7;


   FUNC_6(VAR_3, VAR_10, "Write Buffer failure %x\n", VAR_18);
   return VAR_6;
  }

  FUNC_1(VAR_12, 0, VAR_14);
  FUNC_7(VAR_10, VAR_22, VAR_0,
       VAR_12, VAR_14, ((void*)0));
  FUNC_4(VAR_10, VAR_5);

  if (FUNC_0(VAR_11, VAR_12, VAR_14) != 0)
   return VAR_6;
 }
 return VAR_8;
}
